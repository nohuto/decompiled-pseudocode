/*
 * XREFs of ?GetPnpProperty@PM_DISK@@UEAAJPEAXPEAPEAX@Z @ 0x1C001F2A0
 * Callers:
 *     <none>
 * Callees:
 *     PmGetDevicePropertyData @ 0x1C001F2BC (PmGetDevicePropertyData.c)
 */

__int64 __fastcall PM_DISK::GetPnpProperty(PDEVICE_OBJECT *this, DEVPROPKEY *a2, void **a3)
{
  return PmGetDevicePropertyData(this[49], a2);
}
