/*
 * XREFs of SshSessionManagerFlushBuffers @ 0x1409A1798
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     SshpAlpcShutdownTraceSessions @ 0x1409A2504 (SshpAlpcShutdownTraceSessions.c)
 */

NTSTATUS SshSessionManagerFlushBuffers()
{
  NTSTATUS result; // eax
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = -100000LL;
  result = KeWaitForSingleObject(&stru_140C38748, Executive, 0, 0, &Timeout);
  if ( result != 258 )
    return SshpAlpcShutdownTraceSessions();
  return result;
}
