/*
 * XREFs of ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180399520
 * Callers:
 *     <none>
 * Callees:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18000E214 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1803A2090 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ForgetApplicationsInPackage(
        CApplicationManager *this,
        const unsigned __int16 *a2)
{
  __int64 i; // rsi
  struct IImmersiveApplicationInternal *v5; // rbx
  __int64 v6; // r8
  const unsigned __int16 *v7; // rax
  void (__fastcall *v8)(char *, GUID *, IUnknown **); // rbx
  struct IImmersiveApplicationInternal *v10; // [rsp+50h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+60h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+68h] [rbp+48h] BYREF

  LODWORD(v10) = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = *((_QWORD *)this + 61); i; --i )
  {
    v10 = *(struct IImmersiveApplicationInternal **)(*((_QWORD *)this + 60) + 8 * i - 8);
    v5 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    LOBYTE(v6) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *, const unsigned __int16 *, __int64))(*(_QWORD *)v5 + 320LL))(
           v5,
           a2,
           v6) )
    {
      CApplicationManager::_ForgetApplicationNoLock((CApplicationManager *)((char *)this - 152), v5, 2u);
      v7 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v5 + 24LL))(v5);
      CApplicationManager::_DeleteApplicationData((CApplicationManager *)((char *)this - 152), v7);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  LODWORD(v10) = 2;
  v8 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 13) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v8((char *)this - 104, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  LOBYTE(v8) = IUnknown_QueryService(
                 punk,
                 &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
                 &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
                 &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( (_BYTE)v8 )
    (*(void (__fastcall **)(void *, const unsigned __int16 *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, a2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return 0LL;
}
