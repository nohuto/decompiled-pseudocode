/*
 * XREFs of ?Control@PM_DISK@@UEAAJKPEAXK0K@Z @ 0x1C0021320
 * Callers:
 *     <none>
 * Callees:
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PM_DISK::Control(PDEVICE_OBJECT *this, ULONG a2, void *a3, ULONG a4, PVOID a5, ULONG a6)
{
  return PmSendDeviceControl(this[50], a2, a3, a4, a5, a6, 0);
}
