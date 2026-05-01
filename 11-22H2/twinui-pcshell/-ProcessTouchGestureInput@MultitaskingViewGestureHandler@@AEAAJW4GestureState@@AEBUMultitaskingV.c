/*
 * XREFs of ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674
 * Callers:
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18054DA70 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054E37C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180550220 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800B2DB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019A7C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1802DF22A (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x18054D31C (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18054E204 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?ResolveThumbnailWindow@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x18054FD98 (-ResolveThumbnailWindow@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGes.c)
 *     ?TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1805504F4 (-TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@M.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ProcessTouchGestureInput(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // r11
  _DWORD *v7; // rcx
  __int64 v8; // r9
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 == 3 )
  {
    v4 = *(_DWORD *)(a1 + 216);
  }
  else
  {
    v5 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(*(_DWORD *)(a1 + 128), *(_DWORD *)(a1 + 132));
    v4 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v5, *(_BYTE *)v6, *(_DWORD *)(v6 + 4));
  }
  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v12 = 0x1000000LL;
    v11 = a2;
    v10 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)v7,
      (int)&unk_180865DC4,
      0,
      v8,
      (__int64)&v10,
      (__int64)&v11,
      (__int64)&v12);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    v8);
  if ( (unsigned __int8)MultitaskingViewGestureHandler::TryStartGlobalOperation(a1, a2, v4) )
    return 0LL;
  if ( (int)MultitaskingViewGestureHandler::ResolveThumbnailWindow(a1, v4) < 0 )
    MultitaskingViewGestureHandler::AnimationComplete(a1, 0);
  if ( !*(_DWORD *)(a1 + 160) )
  {
    if ( *(_QWORD *)(a1 + 96) == *(_QWORD *)(a1 + 104) || v4 != 3 )
      return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v4, 0LL);
    *(_DWORD *)(a1 + 160) = 3;
  }
  v4 = 0;
  return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v4, 0LL);
}
