/*
 * XREFs of LdrpTryAcquireLoaderLock @ 0x1800D97B4
 * Callers:
 *     LdrLockLoaderLock @ 0x1800844D0 (LdrLockLoaderLock.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x1800225E0 (RtlTryEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 */

char LdrpTryAcquireLoaderLock()
{
  __int64 v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // r8d
  int v4; // r9d
  char *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  int v9; // r8d
  int v10; // r9d

  v0 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v1 = 2147353476LL;
  v2 = 2147353477LL;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v5 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v5 & 0x20) != 0 )
    {
      LOBYTE(v4) = -1;
      LOBYTE(v3) = -1;
      LdrpLogEtwEvent(5248, -1, v3, v4, 0LL, 0LL);
    }
  }
  if ( RtlTryEnterCriticalSection(&LdrpLoaderLock) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v0 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
      {
        LOBYTE(v7) = -1;
        LOBYTE(v6) = -1;
        LdrpLogEtwEvent(5249, -1, v6, v7, 0LL, 0LL);
      }
    }
    return 1;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v0 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
      {
        LOBYTE(v10) = -1;
        LOBYTE(v9) = -1;
        LdrpLogEtwEvent(5250, -1, v9, v10, 0LL, 0LL);
      }
    }
    return 0;
  }
}
