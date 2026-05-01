/*
 * XREFs of ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180392DF0
 * Callers:
 *     ??$InternalCallback@K@?$wnf_subscription_state@K@details@wil@@QEAAXPEBKK@Z @ 0x18005B3E8 (--$InternalCallback@K@-$wnf_subscription_state@K@details@wil@@QEAAXPEBKK@Z.c)
 *     ??$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4ShellState@Holographic@Shell@Internal@Windows@@K@Z @ 0x1801B7438 (--$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@-$wnf_subscription_state@W.c)
 *     ??$InternalCallback@_N@?$wnf_subscription_state@_N@details@wil@@QEAAXPEB_NK@Z @ 0x1801B74D8 (--$InternalCallback@_N@-$wnf_subscription_state@_N@details@wil@@QEAAXPEB_NK@Z.c)
 *     ??$InternalCallback@U_SEB_EVENT_HEADER@@@?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@QEAAXPEBU_SEB_EVENT_HEADER@@K@Z @ 0x1801B7578 (--$InternalCallback@U_SEB_EVENT_HEADER@@@-$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@w.c)
 *     ??$InternalCallback@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@K@Z @ 0x1801B7618 (--$InternalCallback@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@-$wnf_subscription.c)
 *     ??$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@KK@Z @ 0x1801CF8B8 (--$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@K.c)
 *     ??$ZeroStateDataIfSizeInconsistent@H@details@wil@@YAXPEAHKK@Z @ 0x1801D9780 (--$ZeroStateDataIfSizeInconsistent@H@details@wil@@YAXPEAHKK@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@K@details@wil@@YAXPEAKKK@Z @ 0x1801DA0AC (--$ZeroStateDataIfSizeInconsistent@K@details@wil@@YAXPEAKKK@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@_N@details@wil@@YAXPEA_NKK@Z @ 0x1801F2148 (--$ZeroStateDataIfSizeInconsistent@_N@details@wil@@YAXPEA_NKK@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAXPEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@KK@Z @ 0x180205D4C (--$ZeroStateDataIfSizeInconsistent@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@det.c)
 *     ??$ZeroStateDataIfSizeInconsistent@W4_TABLETMODESTATE@@@details@wil@@YAXPEAW4_TABLETMODESTATE@@KK@Z @ 0x180211020 (--$ZeroStateDataIfSizeInconsistent@W4_TABLETMODESTATE@@@details@wil@@YAXPEAW4_TABLETMODESTATE@@K.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180271D90 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 *     ??$InternalCallback@E@?$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z @ 0x1804D41B4 (--$InternalCallback@E@-$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z.c)
 *     ??$InternalCallback@$$BY0CA@E@?$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAAXPEAY0CA@$$CBEK@Z @ 0x18050885C (--$InternalCallback@$$BY0CA@E@-$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAAXPEAY0CA@$$CBE.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180534758 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180392744 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_HrMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned __int64 a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-38h]
  wil::details *v9; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = (unsigned int)a4;
  LODWORD(v9) = (_DWORD)a4;
  wil::details::ReportFailure_HrMsg<2>((__int64)this, a2, a3, (__int64)a4, v8, retaddr, v9, a5, (char *)&a6);
  return v6;
}
