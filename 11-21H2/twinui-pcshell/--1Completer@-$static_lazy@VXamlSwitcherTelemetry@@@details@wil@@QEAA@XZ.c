/*
 * XREFs of ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x180017200
 * Callers:
 *     ??$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z @ 0x180016F7C (--$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x180017060 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ??$MonitorFrameCreated@_NIAEAIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAIAEAIAEAUtagRECT@@@Z @ 0x18042BC48 (--$MonitorFrameCreated@_NIAEAIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAIAEAIAEAUtagRE.c)
 *     ??$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z @ 0x180440100 (--$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z.c)
 *     ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1805FF8B4 (--$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUC.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x180017490 (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  union _RTL_RUN_ONCE v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4.Ptr = *(PVOID *)(wil::details::static_lazy<XamlSwitcherLogging>::get(
                          a1,
                          _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)
                      + 8);
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = v4.Ptr;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
