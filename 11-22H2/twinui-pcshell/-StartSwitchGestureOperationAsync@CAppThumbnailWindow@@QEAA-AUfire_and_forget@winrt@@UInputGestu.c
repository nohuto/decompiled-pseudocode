/*
 * XREFs of ?StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180210F44
 * Callers:
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18054EEE0 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_InitCoro$2 @ 0x1802105B8 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *CAppThumbnailWindow::StartSwitchGestureOperationAsync(
        int a1,
        _BYTE *a2,
        winrt::Windows::Foundation::IUnknown *a3,
        int a4,
        ...)
{
  _DWORD *v8; // rax
  int v10; // [rsp+238h] [rbp+10h] BYREF
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+240h] [rbp+18h]
  va_list va; // [rsp+250h] [rbp+28h] BYREF

  va_start(va, a4);
  v11 = a3;
  v8 = operator new(0x1C1uLL);
  v10 = 0;
  CAppThumbnailWindow::StartSwitchGestureOperationAsync__InitCoro_2(&v10, v8, a2, (int)a3, a4, (int *)va, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  return a2;
}
