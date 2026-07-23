/*
 * XREFs of ZwCreateSemaphore @ 0x14041C990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle);
}
