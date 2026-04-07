/*
 * XREFs of ?GetMonitorInternalInfo@CDWMDisplay@@QEBAJPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x18003E000
 * Callers:
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003DED8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

LONG __fastcall CDWMDisplay::GetMonitorInternalInfo(CDWMDisplay *this, DISPLAYCONFIG_DEVICE_INFO_HEADER *a2)
{
  memset_0(&a2->adapterId, 0, 0x3A4uLL);
  a2->type = -7;
  a2->size = 940;
  a2->adapterId = (LUID)*((_QWORD *)this + 21);
  a2->id = *((_DWORD *)this + 45);
  return DisplayConfigGetDeviceInfo(a2);
}
