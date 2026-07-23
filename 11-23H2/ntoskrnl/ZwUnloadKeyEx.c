/*
 * XREFs of ZwUnloadKeyEx @ 0x14041EC10
 * Callers:
 *     PiDrvDbUnloadHive @ 0x14086745C (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
