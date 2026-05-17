/*
 * XREFs of LdrpCheckForRetryLoading @ 0x180010E50
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpMinimalMapModule @ 0x18002C6F4 (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlRbInsertNodeEx @ 0x180039370 (RtlRbInsertNodeEx.c)
 *     LdrpCompareModuleName @ 0x180086F9C (LdrpCompareModuleName.c)
 */

char __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v5; // r13
  __int64 v6; // r8
  char v7; // al
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rax
  int v14; // esi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 176) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v7 = BYTE8(LdrpRetryingModuleIndex);
    v8 = LdrpRetryingModuleIndex;
    if ( (BYTE8(LdrpRetryingModuleIndex) & 1) != 0 )
    {
      if ( (_QWORD)LdrpRetryingModuleIndex )
        v9 = (unsigned __int64)&LdrpRetryingModuleIndex ^ LdrpRetryingModuleIndex;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = LdrpRetryingModuleIndex;
    }
    v10 = BYTE8(LdrpRetryingModuleIndex) & 1;
    if ( v9 )
    {
      do
      {
        v11 = LdrpCompareModuleName(v5, v9);
        if ( v11 >= 0 )
        {
          if ( v11 <= 0 )
            break;
          v12 = *(_QWORD *)(v9 + 8);
        }
        else
        {
          v12 = *(_QWORD *)v9;
        }
        if ( v10 && v12 )
          v9 ^= v12;
        else
          v9 = v12;
      }
      while ( v9 );
      if ( v9 )
        goto LABEL_38;
      v7 = BYTE8(LdrpRetryingModuleIndex);
      v8 = LdrpRetryingModuleIndex;
    }
    if ( !a2 )
    {
LABEL_14:
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      return v2;
    }
    if ( (v7 & 1) != 0 )
    {
      if ( v8 )
        v8 ^= (unsigned __int64)&LdrpRetryingModuleIndex;
      else
        v8 = 0LL;
    }
    v14 = v7 & 1;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v5, v8) < 0 )
        {
          v15 = *(_QWORD *)v8;
          if ( v14 )
          {
            if ( !v15 )
              break;
            v15 ^= v8;
          }
          if ( !v15 )
            break;
        }
        else
        {
          v15 = *(_QWORD *)(v8 + 8);
          if ( v14 )
          {
            if ( !v15 )
              goto LABEL_36;
            v15 ^= v8;
          }
          if ( !v15 )
          {
LABEL_36:
            v2 = 1;
            break;
          }
        }
        v8 = v15;
      }
    }
    LOBYTE(v6) = v2;
    RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, v8, v6, v5 + 224);
LABEL_38:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v16 = (_QWORD *)qword_180184258;
    v17 = (_QWORD *)(a1 + 64);
    v2 = 1;
    if ( *(__int64 **)qword_180184258 != &LdrpRetryQueue )
      __fastfail(3u);
    *v17 = &LdrpRetryQueue;
    *(_QWORD *)(a1 + 72) = v16;
    *v16 = v17;
    qword_180184258 = a1 + 64;
    goto LABEL_14;
  }
  return v2;
}
