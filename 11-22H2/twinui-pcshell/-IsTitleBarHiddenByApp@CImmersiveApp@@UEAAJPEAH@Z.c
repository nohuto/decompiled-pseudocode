/*
 * XREFs of ?IsTitleBarHiddenByApp@CImmersiveApp@@UEAAJPEAH@Z @ 0x1803C2B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019F418 (-GetAppTitleBarConfig@@YA-AV-$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewMan.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsTitleBarHiddenByApp(CImmersiveApp *this, int *a2)
{
  RTL_SRWLOCK *v4; // rdi
  int (__fastcall *v5)(char *, __int64, GUID *, __int64 *); // rbx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, GUID *, __int64 *); // rsi
  unsigned int v8; // r8d
  char v10; // [rsp+60h] [rbp+30h] BYREF
  char v11; // [rsp+61h] [rbp+31h]
  char v12; // [rsp+62h] [rbp+32h]
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = 0LL;
  v5 = *(int (__fastcall **)(char *, __int64, GUID *, __int64 *))(*((_QWORD *)this + 2) + 352LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  if ( v5((char *)this + 16, 1LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v14) >= 0 )
  {
    v13 = 0LL;
    v6 = v14;
    v7 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v14 + 40LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    if ( v7(v6, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v13) >= 0 )
    {
      GetAppTitleBarConfig((__int64)&v10, v13, v8);
      if ( v12 )
      {
        if ( v10 && v11 )
          *a2 = 1;
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
