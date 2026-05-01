/*
 * XREFs of _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x1806A0F94
 * Callers:
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A3ACC (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$RequestorForegroundChecked@W4ForegroundCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAX$$QEAW4ForegroundCheckResult@0@@Z @ 0x18069AA5C (--$RequestorForegroundChecked@W4ForegroundCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@.c)
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1806A0DFC (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A553C (-RequestorPackageAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x18073CCA4 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements(HANDLE Process, _QWORD *a2)
{
  HWND ForegroundWindow; // rax
  DWORD ProcessId; // eax
  const unsigned __int16 *v6; // rdx
  _QWORD *v7; // rax
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v10; // rcx
  DWORD dwProcessId[4]; // [rsp+28h] [rbp-18h] BYREF

  ForegroundWindow = GetForegroundWindow();
  GetWindowThreadProcessId(ForegroundWindow, dwProcessId);
  ProcessId = GetProcessId(Process);
  if ( dwProcessId[0] == ProcessId )
  {
    dwProcessId[0] = 1;
LABEL_8:
    PinManagerTelemetry::RequestorForegroundChecked<enum PinManagerTelemetry::ForegroundCheckResult>((int *)dwProcessId);
    v8 = (std::_Ref_count_base *)a2[1];
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return 1;
  }
  *(_OWORD *)dwProcessId = 0LL;
  PinRequestContext::RequestorPackageAppId(*a2, dwProcessId);
  if ( *(_QWORD *)&dwProcessId[2]
    && (int)CallerIdentity::ApiPolicyChecker::ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground(
              *(struct IUnknown **)dwProcessId,
              v6) >= 0 )
  {
    dwProcessId[0] = 2;
    goto LABEL_8;
  }
  v7 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
         dwProcessId,
         a2);
  if ( anonymous_namespace_::DoRequestorAndForegroundPublisherMatch(v7) )
  {
    dwProcessId[0] = 3;
    goto LABEL_8;
  }
  dwProcessId[0] = 0;
  PinManagerTelemetry::RequestorForegroundChecked<enum PinManagerTelemetry::ForegroundCheckResult>((int *)dwProcessId);
  v10 = (std::_Ref_count_base *)a2[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 0;
}
