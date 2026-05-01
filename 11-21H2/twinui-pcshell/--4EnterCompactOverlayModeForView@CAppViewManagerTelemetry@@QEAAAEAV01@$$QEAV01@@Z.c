/*
 * XREFs of ??4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802F3E58
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FD200 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802F3188 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_1802F3188.c)
 *     ??1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F3C9C (--1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802F3DA4 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_1802F3DA4.c)
 */

_QWORD *__fastcall CAppViewManagerTelemetry::EnterCompactOverlayModeForView::operator=(_QWORD *a1, __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(a1, a2);
  CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v5);
  return a1;
}
