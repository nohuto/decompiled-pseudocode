/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x180070978
 * Callers:
 *     LdrpFreeTls @ 0x1800708CC (LdrpFreeTls.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

signed __int64 LdrpCleanupThreadTlsData()
{
  __int64 v0; // rdi
  void **v1; // rsi
  unsigned __int64 UniqueThread; // r14
  volatile signed __int64 *v3; // rbx
  void **v4; // rax
  signed __int64 result; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rbx

  v0 = 0LL;
  v1 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v3 = (volatile signed __int64 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 1);
  v4 = (void **)*v3;
  if ( *v3 )
  {
    do
    {
      v6 = v4[1];
      if ( *v4 == (void *)UniqueThread )
      {
        if ( v1 )
          v1[1] = v6;
        else
          *v3 = (volatile signed __int64)v6;
        v4[1] = (void *)v0;
        v0 = (__int64)v4;
        v4 = v1;
      }
      v1 = v4;
      v4 = (void **)v6;
    }
    while ( v6 );
  }
  result = RtlReleaseSRWLockExclusive(v3 + 1);
  if ( v0 )
  {
    do
    {
      v7 = *(_QWORD *)(v0 + 8);
      result = RtlFreeHeap(LdrpTlsHeap, 0, v0);
      v0 = v7;
    }
    while ( v7 );
  }
  return result;
}
