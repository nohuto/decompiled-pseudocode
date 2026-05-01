/*
 * XREFs of _lambda_83894a20d7676cc7370719a196cbc3a9_::operator() @ 0x1805186A4
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x180518E40 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback @ 0x18051DA20 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_InvokeCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18051946C (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 */

__int64 __fastcall lambda_83894a20d7676cc7370719a196cbc3a9_::operator()(WindowArrangementView **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = WindowArrangementView::EndDrag(*a1, 0);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
