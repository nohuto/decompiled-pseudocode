/*
 * XREFs of ZwUnloadKeyEx @ 0x14041E1C0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x1408676EC (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
