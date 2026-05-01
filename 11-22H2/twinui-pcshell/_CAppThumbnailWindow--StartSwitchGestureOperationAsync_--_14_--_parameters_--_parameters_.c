/*
 * XREFs of _CAppThumbnailWindow::StartSwitchGestureOperationAsync_::_14_::_parameters_::_parameters_ @ 0x18055505C
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_InitCoro$2 @ 0x1802105B8 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync_::_14_::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v5 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 24) = a5;
  result = a1;
  *(_QWORD *)(a1 + 16) = a4;
  return result;
}
