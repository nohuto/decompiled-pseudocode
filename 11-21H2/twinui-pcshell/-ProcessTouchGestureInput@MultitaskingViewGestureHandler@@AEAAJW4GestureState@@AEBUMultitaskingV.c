/*
 * XREFs of ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x180497088
 * Callers:
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180496690 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180496DE0 (-FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1804974D0 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18009E190 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180496420 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x180496C3C (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180496C80 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ProcessTouchGestureInput(__int64 a1, int a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // r11
  _DWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

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
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v14 = 0x1000000LL;
    v13 = a2;
    v12 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v7,
      byte_1806BDB6C,
      v8,
      v9,
      (__int64)&v12,
      (__int64)&v13,
      (__int64)&v14);
  }
  if ( !v4 )
    goto LABEL_18;
  v10 = 1;
  switch ( v4 )
  {
    case 1:
      v10 = 2;
      goto LABEL_19;
    case 2:
      goto LABEL_20;
    case 3:
      v10 = 3;
      goto LABEL_19;
    case 4:
LABEL_18:
      v10 = 0;
      goto LABEL_19;
  }
  if ( v4 != 5 )
  {
    if ( v4 <= 5 )
      goto LABEL_15;
    if ( v4 <= 7 )
      goto LABEL_20;
    if ( v4 != 8 )
    {
LABEL_15:
      MicrosoftTelemetryAssertTriggeredNoArgs();
      goto LABEL_20;
    }
  }
LABEL_19:
  MultitaskingViewGestureHandler::AnimationComplete(a1, v10);
LABEL_20:
  if ( *(_DWORD *)(a1 + 160) )
  {
LABEL_24:
    v4 = 0;
    return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v4);
  }
  if ( *(_QWORD *)(a1 + 96) != *(_QWORD *)(a1 + 104) && v4 == 3 )
  {
    *(_DWORD *)(a1 + 160) = 3;
    goto LABEL_24;
  }
  return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v4);
}
