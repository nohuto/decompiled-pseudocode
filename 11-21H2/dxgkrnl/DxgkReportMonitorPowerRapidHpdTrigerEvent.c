/*
 * XREFs of DxgkReportMonitorPowerRapidHpdTrigerEvent @ 0x1C002397C
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C00239C0 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkReportMonitorPowerRapidHpdTrigerEvent(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  struct DXGGLOBAL *Global; // rax

  v2 = a2;
  Global = DXGGLOBAL_GetGlobal();
  return RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305224, (v2 ^ 1u) + 1, *(_QWORD *)(a1 + 404));
}
