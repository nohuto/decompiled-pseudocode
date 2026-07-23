/*
 * XREFs of ZwQuerySystemTime @ 0x14041B1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
