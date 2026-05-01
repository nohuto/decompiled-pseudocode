/*
 * XREFs of CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke @ 0x180181800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _LogEventWithApplicationViewData__ @ 0x1803CC0E8 (_LogEventWithApplicationViewData__.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D0EF4 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D1E0C (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D2EB4 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  struct IApplicationView **v5; // rsi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  if ( *(_DWORD *)(v1 + 456) == v2 )
    return v3;
  *(_DWORD *)(v1 + 456) = v2;
  if ( !v2 )
  {
    v5 = (struct IApplicationView **)(v1 + 432);
    if ( !*(_QWORD *)(v1 + 432) )
      return v3;
    LogEventWithApplicationViewData__(*v5, HolographicPositionerTelemetry::ReplayPendingAppView<unsigned short const *>);
    v8 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)v1, *v5, 0LL);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x81E,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
    v9 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)v1, *v5);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x821,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
    goto LABEL_15;
  }
  if ( v2 == 1 )
  {
    v5 = (struct IApplicationView **)(v1 + 432);
    if ( !*(_QWORD *)(v1 + 432) )
      return v3;
    LogEventWithApplicationViewData__(
      *v5,
      HolographicPositionerTelemetry::TerminatePendingAppViewForOOBE<unsigned short const *>);
    v6 = HolographicPositioner::_CloseView((HolographicPositioner *)v1, *v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x832,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
LABEL_15:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v5);
    return v3;
  }
  if ( (unsigned int)(v2 - 3) <= 1 )
    *(_BYTE *)(v1 + 304) = 0;
  return v3;
}
