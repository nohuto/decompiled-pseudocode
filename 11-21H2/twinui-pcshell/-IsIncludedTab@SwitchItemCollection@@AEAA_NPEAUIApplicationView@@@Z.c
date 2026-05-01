/*
 * XREFs of ?IsIncludedTab@SwitchItemCollection@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804A796C
 * Callers:
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802327C2 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SwitchItemCollection::IsIncludedTab(SwitchItemCollection *this, struct IApplicationView *a2)
{
  bool v4; // si
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( *((_DWORD *)this + 62)
    || (*(int (__fastcall **)(_QWORD, struct IApplicationView *, int *))(**((_QWORD **)this + 27) + 72LL))(
         *((_QWORD *)this + 27),
         a2,
         &v9) < 0
    || !v9 )
  {
    return 1;
  }
  v10 = 0LL;
  v5 = *((_QWORD *)this + 27);
  v6 = *(int (__fastcall **)(__int64, struct IApplicationView *, __int64 *))(*(_QWORD *)v5 + 56LL);
  AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v10);
  if ( v6(v5, a2, AddressOf) >= 0 )
    v4 = v10 != 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return v4;
}
