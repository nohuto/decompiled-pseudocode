/*
 * XREFs of sub_140A69A2C @ 0x140A69A2C
 * Callers:
 *     sub_140A59724 @ 0x140A59724 (sub_140A59724.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14056D738 @ 0x14056D738 (sub_14056D738.c)
 *     sub_140A59870 @ 0x140A59870 (sub_140A59870.c)
 *     sub_140A699E8 @ 0x140A699E8 (sub_140A699E8.c)
 */

char sub_140A69A2C()
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // r14d
  char *v7; // r15
  unsigned int v8; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // edi
  unsigned int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v41; // rbx
  unsigned int v42; // edi
  char *v43; // rdx
  char v45; // [rsp+20h] [rbp-30h]
  int v46; // [rsp+24h] [rbp-2Ch]
  __int16 v47; // [rsp+28h] [rbp-28h]
  unsigned int v48; // [rsp+2Ch] [rbp-24h]
  char *v49; // [rsp+30h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 2147483649LL;
  __asm { cpuid }
  *((_DWORD *)CurrentPrcb + 8613) = 0;
  if ( (_RCX & 0x400000) == 0 )
  {
    v6 = 0;
    v7 = (char *)CurrentPrcb + 34392;
    v49 = (char *)CurrentPrcb + 34392;
    v48 = 0;
    v8 = 1;
    while ( 1 )
    {
      if ( v6 <= v8 )
      {
        v35 = *((_QWORD *)CurrentPrcb + 25);
        v45 = v8;
        _RAX = 2147483653LL;
        __asm { cpuid }
        v41 = *((unsigned __int8 *)CurrentPrcb + 208);
        v42 = _RDX;
        if ( !v6 )
          v42 = _RCX;
        v16 = HIBYTE(v42) << 10;
        v46 = 2 - (v6 != 0);
        v47 = (unsigned __int8)v42;
        v15 = HIWORD(v42);
        v43 = (char *)CurrentPrcb + 264 * v6;
        if ( *((_WORD *)v43 + 20316) <= (unsigned __int16)v41 )
        {
          if ( *((_WORD *)v43 + 20317) <= (unsigned __int16)v41 )
            goto LABEL_36;
          *((_WORD *)v43 + 20316) = v8 + v41;
        }
        *(_QWORD *)&v43[8 * v41 + 40640] |= v35;
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
        LOBYTE(_RAX) = sub_140A699E8(BYTE1(_RDX) >> 4);
        LOBYTE(v15) = _RAX;
        v16 = v14 >> 18 << 19;
        if ( !v16 )
          return _RAX;
        v17 = *((unsigned __int8 *)CurrentPrcb + 208);
        v18 = *((_QWORD *)CurrentPrcb + 25);
        if ( *((_WORD *)CurrentPrcb + 20712) > (unsigned __int16)v17 )
        {
LABEL_11:
          *((_QWORD *)CurrentPrcb + v17 + 5179) |= v18;
        }
        else if ( *((_WORD *)CurrentPrcb + 20713) > (unsigned __int16)v17 )
        {
          *((_WORD *)CurrentPrcb + 20712) = v8 + v17;
          goto LABEL_11;
        }
        if ( *((char *)CurrentPrcb + 64) <= 21 )
        {
          v19 = 0LL;
          if ( (_DWORD)dword_140D06884 )
          {
            while ( 1 )
            {
              v20 = qword_140D088C0[v19];
              if ( !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)CurrentPrcb + 17288, v19) )
                goto LABEL_24;
              sub_14056D738((__int64)CurrentPrcb);
              v21 = sub_14056D738(v20);
              if ( v22 != v21 )
                goto LABEL_24;
              v23 = *(unsigned __int8 *)(v20 + 208);
              v24 = *(_QWORD *)(v20 + 200);
              if ( *((_WORD *)CurrentPrcb + 20712) <= (unsigned __int16)v23 )
              {
                if ( *((_WORD *)CurrentPrcb + 20713) <= (unsigned __int16)v23 )
                  goto LABEL_20;
                *((_WORD *)CurrentPrcb + 20712) = v23 + 1;
              }
              *((_QWORD *)CurrentPrcb + v23 + 5179) |= v24;
LABEL_20:
              v25 = *((unsigned __int8 *)CurrentPrcb + 208);
              v26 = *((_QWORD *)CurrentPrcb + 25);
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
              if ( (unsigned int)v19 >= (unsigned int)dword_140D06884 )
              {
                v6 = v48;
                v8 = 1;
                v7 = v49;
                break;
              }
            }
          }
        }
LABEL_36:
        *((_DWORD *)v7 + 2) = v46;
        *v7 = v45;
        LOBYTE(_RAX) = v47;
        *((_WORD *)v7 + 1) = v47;
        v7[1] = v15;
        *((_DWORD *)v7 + 1) = v16;
        v7 += 12;
        *((_DWORD *)CurrentPrcb + 8613) += v8;
        v49 = v7;
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
    v32 = sub_140A699E8(BYTE1(_RCX) >> 4);
    v33 = *((unsigned __int8 *)CurrentPrcb + 208);
    LOBYTE(v15) = v32;
    v34 = *((_QWORD *)CurrentPrcb + 25);
    if ( *((_WORD *)CurrentPrcb + 20580) <= (unsigned __int16)v33 )
    {
      if ( *((_WORD *)CurrentPrcb + 20581) <= (unsigned __int16)v33 )
        goto LABEL_36;
      *((_WORD *)CurrentPrcb + 20580) = v8 + v33;
    }
    *((_QWORD *)CurrentPrcb + v33 + 5146) |= v34;
    goto LABEL_36;
  }
  LOBYTE(_RAX) = sub_140A59870((__int64)CurrentPrcb, 0x8000001D);
  return _RAX;
}
