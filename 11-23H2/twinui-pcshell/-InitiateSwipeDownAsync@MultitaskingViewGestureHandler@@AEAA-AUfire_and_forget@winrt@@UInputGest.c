/*
 * XREFs of ?InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@@Z @ 0x18020D868
 * Callers:
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18054EEE0 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_InitCoro$2 @ 0x18020D340 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4)
{
  _DWORD *v8; // rax
  int v10; // [rsp+128h] [rbp+10h] BYREF
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+130h] [rbp+18h]

  v11 = a3;
  v8 = operator new(0xC2uLL);
  v10 = 0;
  MultitaskingViewGestureHandler::InitiateSwipeDownAsync__InitCoro_2((__int64)&v10, v8, a2, (__int64)a3, a4, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  return a2;
}
