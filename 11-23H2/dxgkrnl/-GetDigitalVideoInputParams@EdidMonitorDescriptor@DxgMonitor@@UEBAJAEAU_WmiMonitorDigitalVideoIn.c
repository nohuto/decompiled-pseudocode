/*
 * XREFs of ?GetDigitalVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C0228B80
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C0023BFC (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01D8610 (-_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDigitalVideoInputParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorDigitalVideoInputParams *a2)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  struct _WmiMonitorDigitalVideoInputParams *v3; // rdx

  EdidBaseBlockPtr = (unsigned __int8 *)DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  return EDIDV1_ObtainMonitorDigitalVideoInputParams(EdidBaseBlockPtr, v3);
}
