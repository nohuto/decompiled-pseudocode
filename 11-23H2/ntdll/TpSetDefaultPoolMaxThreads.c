/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x180126B40
 * Callers:
 *     RtlpTpInitializeData @ 0x18004D8F0 (RtlpTpInitializeData.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FB10 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180050144 (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x180080F40 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083F40 (TpSetPoolMaxThreadsSoftLimit.c)
 */

void __fastcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  _TP_POOL *v2; // rax
  int v3; // ecx
  _TP_POOL *v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebp
  unsigned int v7; // r14d
  int v8; // r14d
  unsigned int v9; // eax
  ULONG v10; // eax
  ULONG v11; // edi
  __int64 v12; // r8

  v2 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
  v3 = TppPoolpGlobalPoolMaxThreadsOverride;
  v4 = v2;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v5 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v2 || (v6 = *((_DWORD *)v2 + 110), v3 = TppPoolpGlobalPoolMaxThreadsOverride, !v6) )
      v6 = MEMORY[0x7FFE03C0];
    v5 = 8 * v6;
    if ( v5 < 0x300 )
      v5 = 768;
  }
  if ( v3 )
  {
    v7 = 0;
  }
  else
  {
    if ( !v2 || (v8 = *((_DWORD *)v2 + 110)) == 0 )
      v8 = MEMORY[0x7FFE03C0];
    v7 = 4 * v8;
    if ( v7 < 0x180 )
      v7 = 384;
  }
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return;
    goto LABEL_20;
  }
  if ( a1 <= v7 )
    return;
  v9 = v5;
  if ( a1 > v5 )
LABEL_20:
    v9 = a1;
  if ( !v9 )
    return;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
  v10 = TppPoolpGlobalPoolMaxThreads;
  v11 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_27;
  }
  else if ( a1 > v7 )
  {
    v11 = v5;
    if ( a1 <= v5 )
    {
LABEL_28:
      if ( v11 )
        v10 = v11;
      TppPoolpGlobalPoolMaxThreads = v10;
      goto LABEL_31;
    }
LABEL_27:
    v11 = a1;
    goto LABEL_28;
  }
LABEL_31:
  RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v11 )
  {
    if ( v4 )
    {
      TpSetPoolMaxThreads(v4, v11);
      TpSetPoolMaxThreadsSoftLimit((__int64)v4, 0LL, v12);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
}
