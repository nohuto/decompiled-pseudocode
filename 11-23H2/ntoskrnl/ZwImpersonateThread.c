/*
 * XREFs of ZwImpersonateThread @ 0x14041D170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateThread(
        HANDLE ServerThreadHandle,
        HANDLE ClientThreadHandle,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ServerThreadHandle);
}
