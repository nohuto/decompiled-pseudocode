/*
 * XREFs of ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18047C0D4
 * Callers:
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180477098 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::RemoveRectFromRegion(
        SearchAppDesktopExperienceView *this,
        HRGN a2,
        int a3,
        int a4,
        int x2,
        int y2)
{
  HRGN RectRgn; // rax
  unsigned int v8; // edi
  HRGN v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  RectRgn = CreateRectRgn(a3, a4, x2, y2);
  v8 = 0;
  v9 = RectRgn;
  if ( RectRgn )
  {
    if ( !CombineRgn(a2, a2, RectRgn, 4) )
    {
      v8 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)0x80004005LL);
    }
    DeleteObject(v9);
  }
  else
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)0x80004005LL);
  }
  return v8;
}
