/*
 * XREFs of ?OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1805D3430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x1805D1B10 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x1805D5C44 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::OnPointerUp(WindowArrangementView *this, __int64 a2, struct tagPOINT *a3)
{
  WindowArrangementView *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 282) )
    return 0LL;
  *((_BYTE *)this + 283) = 0;
  v3 = (WindowArrangementView *)((char *)this - 32);
  v8 = *a3;
  WindowArrangementView::UpdateView((char *)this - 32, &v8, 1LL);
  v4 = WindowArrangementView::EndDrag(v3, 1);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x179,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
