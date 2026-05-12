/*
 * XREFs of ?GetPnpProperty@PM_DRIVE@@UEAAJPEAXPEAPEAX@Z @ 0x1C0004FD0
 * Callers:
 *     <none>
 * Callees:
 *     PmGetDevicePropertyData @ 0x1C001F2BC (PmGetDevicePropertyData.c)
 */

__int64 __fastcall PM_DRIVE::GetPnpProperty(PM_DRIVE *this, DEVPROPKEY *a2, void **a3)
{
  return PmGetDevicePropertyData(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 73) + 24LL), a2);
}
