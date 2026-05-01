/*
 * XREFs of ?HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x18059F7E0
 * Callers:
 *     ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x1805A0170 (-SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800F2578 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x18059F50C (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapServiceProvider::HandleDesktopModeSnapping(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        char a4,
        _OWORD *a5)
{
  unsigned int SnapRectForDesktopMode; // ebx
  __int64 v9; // rdx
  ApplicationViewOperation *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  ApplicationViewOperation *v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v17 = 0LL;
  SnapRectForDesktopMode = SnapServiceProvider::GetSnapRectForDesktopMode(a1, a2, a3, &v17);
  if ( (SnapRectForDesktopMode & 0x80000000) != 0 )
  {
    v9 = 90LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
      (const char *)SnapRectForDesktopMode);
    return SnapRectForDesktopMode;
  }
  if ( (int)v17 >= SDWORD2(v17) || SDWORD1(v17) >= SHIDWORD(v17) )
  {
    SnapRectForDesktopMode = -2147024809;
    v9 = 94LL;
    goto LABEL_17;
  }
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v16);
  v10 = v16;
  if ( v16 )
  {
    *((_OWORD *)v16 + 6) = v17;
    *((_BYTE *)v10 + 92) = 1;
    *((_DWORD *)v10 + 20) = (a3 != 2) + 3;
    v13 = 2 * (a4 & 1);
    if ( (a4 & 2) != 0 )
      v13 |= 1u;
    *((_DWORD *)v10 + 21) = v13;
    *((_DWORD *)v10 + 22) = 1;
    *((_WORD *)v10 + 56) = 257;
    v14 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
    SnapRectForDesktopMode = v14;
    if ( v14 >= 0 )
    {
      if ( a5 )
        *a5 = v17;
      SnapRectForDesktopMode = 0;
      goto LABEL_15;
    }
    v11 = (unsigned int)v14;
    v12 = 123LL;
  }
  else
  {
    SnapRectForDesktopMode = -2147024882;
    v11 = 2147942414LL;
    v12 = 97LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
    (const char *)v11);
LABEL_15:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v16);
  return SnapRectForDesktopMode;
}
