/*
 * XREFs of LdrpCheckForRetryLoading @ 0x18004FFEC
 * Callers:
 *     LdrpMinimalMapModule @ 0x18004CAA8 (LdrpMinimalMapModule.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpCompareModuleName @ 0x18008B940 (LdrpCompareModuleName.c)
 */

bool __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  bool v2; // bl
  __int64 v5; // r13
  char v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rax
  int v13; // esi
  unsigned __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 176) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v6 = BYTE8(LdrpRetryingModuleIndex);
    v7 = LdrpRetryingModuleIndex;
    if ( (BYTE8(LdrpRetryingModuleIndex) & 1) != 0 )
    {
      if ( (_QWORD)LdrpRetryingModuleIndex )
        v8 = (unsigned __int64)&LdrpRetryingModuleIndex ^ LdrpRetryingModuleIndex;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = LdrpRetryingModuleIndex;
    }
    v9 = BYTE8(LdrpRetryingModuleIndex) & 1;
    if ( v8 )
    {
      do
      {
        v10 = LdrpCompareModuleName(v5, v8);
        if ( v10 >= 0 )
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      while ( v8 );
      if ( v8 )
        goto LABEL_38;
      v6 = BYTE8(LdrpRetryingModuleIndex);
      v7 = LdrpRetryingModuleIndex;
    }
    if ( !a2 )
    {
LABEL_14:
      RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
      return v2;
    }
    if ( (v6 & 1) != 0 )
    {
      if ( v7 )
        v7 ^= (unsigned __int64)&LdrpRetryingModuleIndex;
      else
        v7 = 0LL;
    }
    v13 = v6 & 1;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v5, v7) < 0 )
        {
          v14 = *(_QWORD *)v7;
          if ( v13 )
          {
            if ( !v14 )
              break;
            v14 ^= v7;
          }
          if ( !v14 )
            break;
        }
        else
        {
          v14 = *(_QWORD *)(v7 + 8);
          if ( v13 )
          {
            if ( !v14 )
              goto LABEL_36;
            v14 ^= v7;
          }
          if ( !v14 )
          {
LABEL_36:
            v2 = 1;
            break;
          }
        }
        v7 = v14;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64 *)&LdrpRetryingModuleIndex, v7, v2, v5 + 224);
LABEL_38:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v15 = (_QWORD *)qword_18017A008;
    v16 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18017A008 != &LdrpRetryQueue )
      __fastfail(3u);
    *v16 = &LdrpRetryQueue;
    v2 = 1;
    *(_QWORD *)(a1 + 72) = v15;
    *v15 = v16;
    qword_18017A008 = a1 + 64;
    goto LABEL_14;
  }
  return v2;
}
