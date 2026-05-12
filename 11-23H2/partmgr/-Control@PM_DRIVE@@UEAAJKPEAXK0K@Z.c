/*
 * XREFs of ?Control@PM_DRIVE@@UEAAJKPEAXK0K@Z @ 0x1C001E660
 * Callers:
 *     <none>
 * Callees:
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PM_DRIVE::Control(PM_DRIVE *this, ULONG a2, void *a3, ULONG a4, PVOID a5, ULONG a6)
{
  return PmSendDeviceControl(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 73) + 8LL), a2, a3, a4, a5, a6, 0);
}
