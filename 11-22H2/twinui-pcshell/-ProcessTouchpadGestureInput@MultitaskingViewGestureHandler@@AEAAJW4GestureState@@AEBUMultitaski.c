/*
 * XREFs of ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1802DF470
 * Callers:
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1802DF160 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x18054E270 (-FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1805500B0 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1802DF22A (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchpadGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802DF26C (-DetermineTouchpadGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4G.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802DF3E2 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x18054D31C (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
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
  unsigned int v14; // ebx
  _DWORD *v15; // rax
  _DWORD v16[10]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v8 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(*(_DWORD *)(a1 + 128), *(_DWORD *)(a1 + 132));
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 88) + 24LL))(
         *(_QWORD *)(a1 + 88),
         *(unsigned int *)(a1 + 164),
         v16);
  if ( v9 < 0 )
  {
    v10 = 837LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( v16[0] == 0xFFFF )
  {
    v12 = *(_QWORD *)(a1 + 88);
    v18 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v12 + 48LL))(
           v12,
           *(unsigned int *)(a1 + 164),
           *(unsigned int *)(a1 + 168),
           &v18);
    if ( v9 < 0 )
    {
      v10 = 842LL;
      goto LABEL_3;
    }
    switch ( v18 )
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
  {
    v14 = 0;
    v15 = (_DWORD *)(a1 + 160);
    if ( (v13 & 1) != 0 || *v15 == 5 )
      v14 = 7;
  }
  else
  {
    v14 = MultitaskingViewGestureHandlerHelpers::DetermineTouchpadGestureAction(v8, *(_BYTE *)a3, v13);
    v15 = (_DWORD *)(a1 + 160);
  }
  if ( v14 != 6 )
  {
    if ( (v14 != 3 || *(_DWORD *)(a1 + 160) != 2) && (v14 != 1 || *v15 != 4) )
      return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v14, 0LL);
    goto LABEL_25;
  }
  if ( (unsigned __int64)(MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                            (MultitaskingViewGestureHandler *)a1,
                            a4)
                        - *(_QWORD *)(a1 + 176)) < *(_QWORD *)(a1 + 192) )
LABEL_25:
    v14 = 0;
  return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v14, 0LL);
}
