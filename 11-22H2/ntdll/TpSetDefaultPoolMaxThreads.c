/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x1801256C0
 * Callers:
 *     RtlpTpInitializeData @ 0x18004DA50 (RtlpTpInitializeData.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FCE0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800502A4 (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x1800808D0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083740 (TpSetPoolMaxThreadsSoftLimit.c)
 */

signed __int64 __fastcall TpSetDefaultPoolMaxThreads(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rsi
  unsigned int v8; // ebp
  int v9; // ebp
  unsigned int v10; // r14d
  int v11; // r14d
  signed __int64 result; // rax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9

  v4 = a1;
  v5 = TpPoolReferenceExistingGlobalPool(a1, a2, a3, a4);
  v6 = TppPoolpGlobalPoolMaxThreadsOverride;
  v7 = v5;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v8 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v5 || (v9 = *(_DWORD *)(v5 + 440), v6 = TppPoolpGlobalPoolMaxThreadsOverride, !v9) )
      v9 = MEMORY[0x7FFE03C0];
    v8 = 8 * v9;
    if ( v8 < 0x300 )
      v8 = 768;
  }
  if ( v6 )
  {
    v10 = 0;
  }
  else
  {
    if ( !v5 || (v11 = *(_DWORD *)(v5 + 440)) == 0 )
      v11 = MEMORY[0x7FFE03C0];
    v10 = 4 * v11;
    if ( v10 < 0x180 )
      v10 = 384;
  }
  result = (unsigned int)TppPoolpGlobalPoolMaxThreads;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( v4 <= TppPoolpGlobalPoolMaxThreads )
      return result;
    goto LABEL_20;
  }
  if ( v4 <= v10 )
    return result;
  result = v8;
  if ( v4 > v8 )
LABEL_20:
    result = v4;
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
  v13 = TppPoolpGlobalPoolMaxThreads;
  v14 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( v4 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_27;
  }
  else if ( v4 > v10 )
  {
    v14 = v8;
    if ( v4 <= v8 )
    {
LABEL_28:
      if ( v14 )
        v13 = v14;
      TppPoolpGlobalPoolMaxThreads = v13;
      goto LABEL_31;
    }
LABEL_27:
    v14 = v4;
    goto LABEL_28;
  }
LABEL_31:
  result = RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v14 )
  {
    if ( v7 )
    {
      TpSetPoolMaxThreads(v7, (_PEB_LDR_DATA *)v14, v15, v16);
      TpSetPoolMaxThreadsSoftLimit(v7, 0LL, v17, v18);
      return TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
    }
  }
  return result;
}
