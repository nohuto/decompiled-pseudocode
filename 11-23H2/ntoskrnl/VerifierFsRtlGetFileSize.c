/*
 * XREFs of VerifierFsRtlGetFileSize @ 0x140ACE640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierFsRtlGetFileSize()
{
  return ((__int64 (*)(void))pXdvFsRtlGetFileSize)();
}
