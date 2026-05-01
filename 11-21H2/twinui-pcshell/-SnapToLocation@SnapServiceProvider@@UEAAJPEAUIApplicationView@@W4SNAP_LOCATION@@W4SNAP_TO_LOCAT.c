/*
 * XREFs of ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x1805A0170
 * Callers:
 *     ?SnapToLocation@SnapServiceProvider@@W7EAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x18020F910 (-SnapToLocation@SnapServiceProvider@@W7EAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCA.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ?HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x18059F7E0 (-HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SN.c)
 *     ?HandleSnapWithWin32VtcLayoutOperation@SnapServiceProvider@@AEAAJPEAUIApplicationView@@@Z @ 0x18059F950 (-HandleSnapWithWin32VtcLayoutOperation@SnapServiceProvider@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleTabletModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUtagRECT@@@Z @ 0x18059FB38 (-HandleTabletModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUt.c)
 *     ?ShouldSnapBeHandledByWin32VtcLayoutOperation@SnapServiceProvider@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805A0000 (-ShouldSnapBeHandledByWin32VtcLayoutOperation@SnapServiceProvider@@AEAA_NPEAUIApplicationView@@@.c)
 */

__int64 __fastcall SnapServiceProvider::SnapToLocation(
        SnapServiceProvider *a1,
        struct IApplicationView *a2,
        int a3,
        char a4,
        _OWORD *a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a5 )
    *a5 = 0LL;
  if ( TabletModeHelpers::IsTabletMode(a1, a2) )
  {
    if ( IsSurfaceHubWithWin32VtcEnabled() && SnapServiceProvider::ShouldSnapBeHandledByWin32VtcLayoutOperation(a1, a2) )
    {
      v9 = SnapServiceProvider::HandleSnapWithWin32VtcLayoutOperation(a1, a2);
      if ( v9 < 0 )
      {
        v10 = 67LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    else
    {
      v9 = SnapServiceProvider::HandleTabletModeSnapping((__int64)a1, (GUID *)a2, a3, (__int64)a5);
      if ( v9 < 0 )
      {
        v10 = 71LL;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v9 = SnapServiceProvider::HandleDesktopModeSnapping((__int64)a1, a2, a3, a4, a5);
    if ( v9 < 0 )
    {
      v10 = 76LL;
      goto LABEL_8;
    }
  }
  return 0LL;
}
