/*
 * XREFs of ?GetFilterForDesktop@VirtualDesktopGestureWindow@@AEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x180551BF4
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18049F9D0 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::GetFilterForDesktop(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int FilterForDesktop; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(a2, *(_QWORD *)(a1 + 32), a3, a4);
  v5 = FilterForDesktop;
  if ( FilterForDesktop < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)FilterForDesktop);
  return v5;
}
