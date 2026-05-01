/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18060C080
 * Callers:
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x1806125A8 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 *     ?UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z @ 0x1806128B4 (-UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z @ 0x18060D100 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z.c)
 */

__int64 __fastcall VirtualDesktopGestureContext::CreateAdjacentDesktop(
        VirtualDesktopGestureContext *this,
        bool *a2,
        unsigned int a3,
        int a4)
{
  VirtualDesktopGestureWindow **v5; // rbx
  VirtualDesktopGestureWindow **v8; // rsi
  int AdjacentDesktop; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  v5 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v8 = &v5[*((_QWORD *)this + 10)];
  while ( 1 )
  {
    if ( v5 == v8 )
      return 0LL;
    AdjacentDesktop = VirtualDesktopGestureWindow::CreateAdjacentDesktop(*v5, a2, a3, a4);
    v10 = AdjacentDesktop;
    if ( AdjacentDesktop < 0 )
      break;
    ++v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x605,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)AdjacentDesktop);
  return v10;
}
