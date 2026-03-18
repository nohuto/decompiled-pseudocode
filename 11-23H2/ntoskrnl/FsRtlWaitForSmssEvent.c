/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x140865C20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 */

LONG_PTR __fastcall FsRtlWaitForSmssEvent(PVOID Object)
{
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  FsRtlpVolumeStartupApplicationsComplete = 1;
  return ObfDereferenceObject(Object);
}
