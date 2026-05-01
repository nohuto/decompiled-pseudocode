/*
 * XREFs of ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180141D90
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180093558 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x18016A720 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::IsWindowManaged(HolographicPositioner *this, HWND a2, int *a3)
{
  __int64 v6; // r14
  int (__fastcall *v7)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  unsigned int v9; // ebx
  int IsViewManaged; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v13 = 0LL;
  v6 = *((_QWORD *)this + 11);
  if ( v6
    && (v7 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL),
        AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v13),
        v7(v6, a2, AddressOf) >= 0)
    && (IsViewManaged = HolographicPositioner::IsViewManaged(this, v13, a3), v9 = IsViewManaged, IsViewManaged < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x460,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
  }
  else
  {
    v9 = 0;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v13);
  return v9;
}
