/*
 * XREFs of ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180067AB0
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076690 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804AC620 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::IsWindowManaged(HolographicPositioner *this, HWND a2, int *a3)
{
  __int64 v6; // r14
  int (__fastcall *v7)(__int64, HWND, struct IApplicationView **); // rbx
  unsigned int v8; // ebx
  int IsViewManaged; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v13 = 0LL;
  v6 = *((_QWORD *)this + 10);
  if ( v6
    && (v7 = *(int (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v6 + 48LL),
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13),
        v7(v6, a2, &v13) >= 0)
    && (IsViewManaged = HolographicPositioner::IsViewManaged(this, v13, a3), v8 = IsViewManaged, IsViewManaged < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x454,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged,
      v11);
  }
  else
  {
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  return v8;
}
