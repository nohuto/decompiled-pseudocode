/*
 * XREFs of FsRtlCancellableWaitForSingleObject @ 0x1406CA740
 * Callers:
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 * Callees:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407A11A0 (FsRtlCancellableWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForSingleObject(PVOID Object, PLARGE_INTEGER Timeout, PIRP Irp)
{
  PVOID v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = Object;
  return FsRtlCancellableWaitForMultipleObjects(1u, &v4, WaitAll, Timeout, 0LL, Irp);
}
