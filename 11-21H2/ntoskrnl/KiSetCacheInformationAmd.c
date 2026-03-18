/*
 * XREFs of KiSetCacheInformationAmd @ 0x140A69A2C
 * Callers:
 *     KiSetCacheInformation @ 0x140A59724 (KiSetCacheInformation.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeGetProcessorNode @ 0x14056D738 (KeGetProcessorNode.c)
 *     KiSetStandardizedCacheInformation @ 0x140A59870 (KiSetStandardizedCacheInformation.c)
 *     KiGetL2L3AssociativityAmd @ 0x140A699E8 (KiGetL2L3AssociativityAmd.c)
 */

char KiSetCacheInformationAmd()
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // r14d
  _CACHE_DESCRIPTOR *Cache; // r15
  unsigned int v8; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // edi
  unsigned int v16; // r12d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 ProcessorNode; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  char L2L3AssociativityAmd; // al
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 GroupSetMember; // r8
  __int64 Group; // rbx
  unsigned int v42; // edi
  char *v43; // rdx
  char v45; // [rsp+20h] [rbp-30h]
  int v46; // [rsp+24h] [rbp-2Ch]
  unsigned __int16 v47; // [rsp+28h] [rbp-28h]
  unsigned int v48; // [rsp+2Ch] [rbp-24h]
  _CACHE_DESCRIPTOR *v49; // [rsp+30h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 2147483649LL;
  __asm { cpuid }
  CurrentPrcb->CacheCount = 0;
  if ( (_RCX & 0x400000) == 0 )
  {
    v6 = 0;
    Cache = CurrentPrcb->Cache;
    v49 = CurrentPrcb->Cache;
    v48 = 0;
    v8 = 1;
    while ( 1 )
    {
      if ( v6 <= v8 )
      {
        GroupSetMember = CurrentPrcb->GroupSetMember;
        v45 = v8;
        _RAX = 2147483653LL;
        __asm { cpuid }
        Group = CurrentPrcb->Group;
        v42 = _RDX;
        if ( !v6 )
          v42 = _RCX;
        v16 = HIBYTE(v42) << 10;
        v46 = 2 - (v6 != 0);
        v47 = (unsigned __int8)v42;
        v15 = HIWORD(v42);
        v43 = (char *)CurrentPrcb + 264 * v6;
        if ( *((_WORD *)v43 + 20316) <= (unsigned __int16)Group )
        {
          if ( *((_WORD *)v43 + 20317) <= (unsigned __int16)Group )
            goto LABEL_36;
          *((_WORD *)v43 + 20316) = v8 + Group;
        }
        *(_QWORD *)&v43[8 * Group + 40640] |= GroupSetMember;
        goto LABEL_36;
      }
      if ( v6 == 2 )
        break;
      if ( v6 == 3 )
      {
        v46 = 0;
        _RAX = 2147483654LL;
        v45 = 3;
        __asm { cpuid }
        v14 = _RDX;
        v47 = (unsigned __int8)_RDX;
        LOBYTE(_RAX) = KiGetL2L3AssociativityAmd(BYTE1(_RDX) >> 4);
        LOBYTE(v15) = _RAX;
        v16 = v14 >> 18 << 19;
        if ( !v16 )
          return _RAX;
        v17 = CurrentPrcb->Group;
        v18 = CurrentPrcb->GroupSetMember;
        if ( CurrentPrcb->CacheProcessorSet[3].Count > (unsigned __int16)v17 )
        {
LABEL_11:
          CurrentPrcb->CacheProcessorSet[3].Bitmap[v17] |= v18;
        }
        else if ( CurrentPrcb->CacheProcessorSet[3].Size > (unsigned __int16)v17 )
        {
          CurrentPrcb->CacheProcessorSet[3].Count = v8 + v17;
          goto LABEL_11;
        }
        if ( CurrentPrcb->CpuType <= 21 )
        {
          v19 = 0LL;
          if ( (_DWORD)KeNumberProcessors_0 )
          {
            while ( 1 )
            {
              v20 = KiProcessorBlock[v19];
              if ( !(unsigned int)KeCheckProcessorAffinityEx(&CurrentPrcb->PackageProcessorSet.Count, v19) )
                goto LABEL_24;
              KeGetProcessorNode((__int64)CurrentPrcb);
              ProcessorNode = KeGetProcessorNode(v20);
              if ( v22 != ProcessorNode )
                goto LABEL_24;
              v23 = *(unsigned __int8 *)(v20 + 208);
              v24 = *(_QWORD *)(v20 + 200);
              if ( CurrentPrcb->CacheProcessorSet[3].Count <= (unsigned __int16)v23 )
              {
                if ( CurrentPrcb->CacheProcessorSet[3].Size <= (unsigned __int16)v23 )
                  goto LABEL_20;
                CurrentPrcb->CacheProcessorSet[3].Count = v23 + 1;
              }
              CurrentPrcb->CacheProcessorSet[3].Bitmap[v23] |= v24;
LABEL_20:
              v25 = CurrentPrcb->Group;
              v26 = CurrentPrcb->GroupSetMember;
              if ( *(_WORD *)(v20 + 41424) > (unsigned __int16)v25 )
                goto LABEL_23;
              if ( *(_WORD *)(v20 + 41426) > (unsigned __int16)v25 )
              {
                *(_WORD *)(v20 + 41424) = v25 + 1;
LABEL_23:
                *(_QWORD *)(v20 + 8 * v25 + 41432) |= v26;
              }
LABEL_24:
              v19 = (unsigned int)(v19 + 1);
              if ( (unsigned int)v19 >= (unsigned int)KeNumberProcessors_0 )
              {
                v6 = v48;
                v8 = 1;
                Cache = v49;
                break;
              }
            }
          }
        }
LABEL_36:
        Cache->Type = v46;
        Cache->Level = v45;
        LOBYTE(_RAX) = v47;
        Cache->LineSize = v47;
        Cache->Associativity = v15;
        Cache->Size = v16;
        ++Cache;
        CurrentPrcb->CacheCount += v8;
        v49 = Cache;
      }
      v48 = ++v6;
      if ( v6 >= 4 )
        return _RAX;
    }
    v46 = 0;
    _RAX = 2147483654LL;
    v45 = 2;
    __asm { cpuid }
    v16 = WORD1(_RCX) << 10;
    v47 = (unsigned __int8)_RCX;
    L2L3AssociativityAmd = KiGetL2L3AssociativityAmd(BYTE1(_RCX) >> 4);
    v33 = CurrentPrcb->Group;
    LOBYTE(v15) = L2L3AssociativityAmd;
    v34 = CurrentPrcb->GroupSetMember;
    if ( CurrentPrcb->CacheProcessorSet[2].Count <= (unsigned __int16)v33 )
    {
      if ( CurrentPrcb->CacheProcessorSet[2].Size <= (unsigned __int16)v33 )
        goto LABEL_36;
      CurrentPrcb->CacheProcessorSet[2].Count = v8 + v33;
    }
    CurrentPrcb->CacheProcessorSet[2].Bitmap[v33] |= v34;
    goto LABEL_36;
  }
  LOBYTE(_RAX) = KiSetStandardizedCacheInformation((__int64)CurrentPrcb, 0x8000001D);
  return _RAX;
}
