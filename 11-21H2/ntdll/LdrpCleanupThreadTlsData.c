/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x18007729C
 * Callers:
 *     LdrpFreeTls @ 0x1800771F0 (LdrpFreeTls.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

signed __int64 __fastcall LdrpCleanupThreadTlsData(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rdi
  void **v5; // rsi
  unsigned __int64 UniqueThread; // r14
  volatile signed __int64 *v7; // rbx
  void **v8; // rax
  signed __int64 result; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rbx

  v4 = 0LL;
  v5 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v7 = (volatile signed __int64 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive((unsigned __int64)(v7 + 1), a2, a3, a4);
  v8 = (void **)*v7;
  if ( *v7 )
  {
    do
    {
      v10 = v8[1];
      if ( *v8 == (void *)UniqueThread )
      {
        if ( v5 )
          v5[1] = v10;
        else
          *v7 = (volatile signed __int64)v10;
        v8[1] = (void *)v4;
        v4 = (__int64)v8;
        v8 = v5;
      }
      v5 = v8;
      v8 = (void **)v10;
    }
    while ( v10 );
  }
  result = RtlReleaseSRWLockExclusive(v7 + 1);
  if ( v4 )
  {
    do
    {
      v11 = *(_QWORD *)(v4 + 8);
      result = RtlFreeHeap(LdrpTlsHeap, 0, v4);
      v4 = v11;
    }
    while ( v11 );
  }
  return result;
}
