/*
 * XREFs of ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x1800A10D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x1800A0FC0 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::SizeConstraintsQueried(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  struct tagSIZE v9; // [rsp+40h] [rbp+18h] BYREF
  struct tagSIZE v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v8 = a2;
  v4 = CWin32ApplicationView::SetSizeConstraintsForDpi(this - 20, &v8, &v9, &v10);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A1,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
