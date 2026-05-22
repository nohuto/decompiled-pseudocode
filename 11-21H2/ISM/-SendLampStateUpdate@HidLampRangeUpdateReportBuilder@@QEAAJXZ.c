/*
 * XREFs of ?SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ @ 0x1800D995C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800D20F4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800D897C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 */

__int64 __fastcall HidLampRangeUpdateReportBuilder::SendLampStateUpdate(
        HidLampArrayDevice **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = HidLampArrayDevice::SendLampRangeUpdateReport(
              this[5],
              (const struct LampRangeUpdateDeviceReport *)((char *)this + 20),
              a3,
              a4);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x77,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportbuilder.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
