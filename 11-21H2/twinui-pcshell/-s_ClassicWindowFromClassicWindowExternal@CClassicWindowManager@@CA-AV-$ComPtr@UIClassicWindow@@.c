/*
 * XREFs of ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x180105A7C
 * Callers:
 *     ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x180102F30 (-GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@.c)
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x1802F00D0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  void (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  v4(a2, &GUID_f35c2c7c_f4ba_416d_9028_9bf3fab447bb, &v6);
  *a1 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return a1;
}
