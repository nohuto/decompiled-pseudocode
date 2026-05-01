/*
 * XREFs of ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x180102F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180104F18 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x180105A7C (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::GetRootSwitchableOwner(
        CClassicWindowManager *this,
        struct IClassicWindowExternal *a2,
        HWND *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CClassicWindowManager *v7; // [rsp+30h] [rbp+8h] BYREF
  CClassicWindowManager *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = this;
  *a3 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(&v7, a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  CClassicWindowManager::GetRootOwner(v4, &v8, v7);
  if ( v8 != v7 )
    *a3 = (HWND)(*(__int64 (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v8 + 24LL))(v8);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *a3 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  return v5;
}
