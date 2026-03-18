/*
 * XREFs of ?GetNativeMode@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C01D8530
 * Callers:
 *     <none>
 * Callees:
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0010A30 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetNativeMode(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  return EDID_V1_GetPreferredMode((unsigned __int8 *)(**((_QWORD **)this + 3) + 24LL), a2);
}
