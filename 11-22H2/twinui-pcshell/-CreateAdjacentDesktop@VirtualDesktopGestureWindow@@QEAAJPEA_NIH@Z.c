/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z @ 0x18060D100
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18060C080 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x18060DA88 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::CreateAdjacentDesktop(
        VirtualDesktopGestureWindow *this,
        bool *a2,
        unsigned int a3,
        __int64 a4)
{
  int v4; // esi
  int v8; // ebx
  VirtualDesktopGestureWindow *v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  int v12; // ecx
  struct tagRECT v14; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a4;
  if ( *((_DWORD *)this + 57) == 2 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    v8 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v14.top = 0;
    v14.left = v4
             * (int)(float)((float)((float)(int)VirtualDesktopGestureWindow::GetScaleFactor(v9) * 28.0) + (float)v8);
    v14.right = *((_DWORD *)this + 48) + v14.left - *((_DWORD *)this + 46);
    v14.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    v10 = VirtualDesktopGestureWindow::CreateAdjacentDesktop(this, a2, a3, &v14);
    if ( v10 < 0 )
    {
      v11 = 511LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v10);
    }
  }
  else
  {
    v12 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v14.top = 0;
    v14.left = a4 * v12;
    v14.right = v12 + a4 * v12;
    v14.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    v10 = VirtualDesktopGestureWindow::CreateAdjacentDesktop(this, a2, a3, &v14);
    if ( v10 < 0 )
    {
      v11 = 515LL;
      goto LABEL_6;
    }
  }
  return (unsigned int)v10;
}
