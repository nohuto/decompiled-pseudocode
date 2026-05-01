/*
 * XREFs of ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x18006D83C
 * Callers:
 *     ?OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z @ 0x18006D810 (-OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x18006F2A0 (-OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PE.c)
 *     ?MoveViewToDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805401B0 (-MoveViewToDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskt.c)
 * Callees:
 *     ?CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z @ 0x18006D980 (-CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::MoveViewToDesktopIfAllowed(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        bool *a4)
{
  int v9; // ebx
  __int64 v10; // rdx
  int v11[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a4 )
    *a4 = 1;
  if ( CVirtualDesktopVisibilityPolicy::CanViewMoveDesktops(this, a2) )
  {
    *(GUID *)v11 = GUID_NULL;
    if ( a3 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, int *))(*(_QWORD *)a3 + 32LL))(a3, v11);
      if ( v9 < 0 )
      {
        v10 = 123LL;
        goto LABEL_17;
      }
      if ( *(_QWORD *)v11 == 0x4658059A45DB96FFLL && *(_QWORD *)&v11[2] == 0x1012647F7CCD4687LL )
      {
        v9 = -2147024809;
        v10 = 127LL;
        goto LABEL_17;
      }
    }
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 208LL))(a2, v11);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 80LL))(
             *((_QWORD *)this + 2),
             a2);
      if ( v9 >= 0 )
        return (unsigned int)v9;
      v10 = 132LL;
    }
    else
    {
      v10 = 131LL;
    }
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v9,
      v11[0]);
    return (unsigned int)v9;
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
