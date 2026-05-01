/*
 * XREFs of ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x1802D0288
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_4cafea38ef16ee539dfc5340af5a0c57___ @ 0x1803A8424 (CClassicWindowManager--ForEachWindow__lambda_4cafea38ef16ee539dfc5340af5a0c57___.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CClassicWindowManager::IsWindowOwnedBy(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow *v5; // rbx
  char v6; // di
  __int64 *v7; // rax
  CClassicWindowManager *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v5 = *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v9 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v6 = 0;
  while ( v5 && a2 != v5 )
  {
    if ( v5 == a3 )
    {
      v6 = 1;
      break;
    }
    v7 = (__int64 *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v5 + 96LL))(v5);
    Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v9, v7);
    v5 = v9;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  return v6;
}
