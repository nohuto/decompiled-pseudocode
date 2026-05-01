/*
 * XREFs of CAppThumbnailWindow::StartSwitchGestureOperationAsync$_InitCoro$2 @ 0x1802105B8
 * Callers:
 *     ?StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180210F44 (-StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA-AUfire_and_forget@winrt@@UInputGestu.c)
 * Callees:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     _CAppThumbnailWindow::StartSwitchGestureOperationAsync_::_14_::_parameters_::_parameters_ @ 0x18055505C (_CAppThumbnailWindow--StartSwitchGestureOperationAsync_--_14_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync__InitCoro_2(
        _DWORD *a1,
        _DWORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  CAppThumbnailWindow::StartSwitchGestureOperationAsync_::_14_::_parameters_::_parameters_(
    (_DWORD)a2 + 417,
    a7,
    a4,
    a5,
    *a6);
  *(_QWORD *)a2 = CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1;
  a2[2] = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *((_BYTE *)a2 + 416) = 0;
  return CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1(a2);
}
