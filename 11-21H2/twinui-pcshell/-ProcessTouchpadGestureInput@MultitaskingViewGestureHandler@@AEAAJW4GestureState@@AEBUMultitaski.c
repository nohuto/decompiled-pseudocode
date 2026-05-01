/*
 * XREFs of ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180230D4A
 * Callers:
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180230AC0 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180496CF0 (-FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180497350 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180230760 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     ?DetermineTouchpadGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180230B8A (-DetermineTouchpadGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4G.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x180230CBC (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x180496C3C (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ProcessTouchpadGestureInput(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4)
{
  int v8; // ebx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // ebx
  _DWORD v15[10]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v8 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
         *(unsigned int *)(a1 + 128),
         *(unsigned int *)(a1 + 132));
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 88) + 24LL))(
         *(_QWORD *)(a1 + 88),
         *(unsigned int *)(a1 + 164),
         v15);
  if ( v9 < 0 )
  {
    v10 = 707LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( v15[0] == 0xFFFF )
  {
    v12 = *(_QWORD *)(a1 + 88);
    v17 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v12 + 48LL))(
           v12,
           *(unsigned int *)(a1 + 164),
           *(unsigned int *)(a1 + 168),
           &v17);
    if ( v9 < 0 )
    {
      v10 = 712LL;
      goto LABEL_3;
    }
    switch ( v17 )
    {
      case 1:
        v8 = 3;
        break;
      case 2:
        v8 = 1;
        break;
      case 3:
        v8 = 2;
        break;
    }
  }
  v13 = *(_DWORD *)(a3 + 4);
  if ( a2 == 3 )
    v14 = (v13 & 1) != 0 ? 7 : 0;
  else
    v14 = MultitaskingViewGestureHandlerHelpers::DetermineTouchpadGestureAction(v8, *(_BYTE *)a3, v13);
  if ( v14 != 6 )
  {
    if ( (v14 != 3 || *(_DWORD *)(a1 + 160) != 2) && (v14 != 1 || *(_DWORD *)(a1 + 160) != 4) )
      return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v14);
    goto LABEL_23;
  }
  if ( (unsigned __int64)(MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                            (MultitaskingViewGestureHandler *)a1,
                            a4)
                        - *(_QWORD *)(a1 + 176)) < *(_QWORD *)(a1 + 192) )
LABEL_23:
    v14 = 0;
  return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v14);
}
