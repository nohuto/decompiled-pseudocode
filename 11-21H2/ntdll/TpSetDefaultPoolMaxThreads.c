/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x180123C80
 * Callers:
 *     RtlpTpInitializeData @ 0x1800707E4 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18001ED68 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007144C (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x180074550 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180087980 (TpSetPoolMaxThreadsSoftLimit.c)
 */

signed __int64 __fastcall TpSetDefaultPoolMaxThreads(unsigned int a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
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
  __int64 v19; // r8
  unsigned __int64 v20; // r9

  v2 = TpPoolReferenceExistingGlobalPool();
  v6 = TppPoolpGlobalPoolMaxThreadsOverride;
  v7 = v2;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v8 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v2 || (v9 = *(_DWORD *)(v2 + 440), v6 = TppPoolpGlobalPoolMaxThreadsOverride, !v9) )
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
    if ( !v2 || (v11 = *(_DWORD *)(v2 + 440)) == 0 )
      v11 = MEMORY[0x7FFE03C0];
    v10 = 4 * v11;
    if ( v10 < 0x180 )
      v10 = 384;
  }
  result = (unsigned int)TppPoolpGlobalPoolMaxThreads;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return result;
    goto LABEL_20;
  }
  if ( a1 <= v10 )
    return result;
  result = v8;
  if ( a1 > v8 )
LABEL_20:
    result = a1;
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, v3, v4, v5);
  v13 = TppPoolpGlobalPoolMaxThreads;
  v14 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_27;
  }
  else if ( a1 > v10 )
  {
    v14 = v8;
    if ( a1 <= v8 )
    {
LABEL_28:
      if ( v14 )
        v13 = v14;
      TppPoolpGlobalPoolMaxThreads = v13;
      goto LABEL_31;
    }
LABEL_27:
    v14 = a1;
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
      return TppPoolpDereferenceGlobalPool(
               (const void **)&TppPoolpGlobalPool,
               (unsigned __int64)&TppPoolpGlobalPoolLock,
               v19,
               v20);
    }
  }
  return result;
}
