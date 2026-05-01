/*
 * XREFs of ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18000F948
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000F0C0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000FB04 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@_KPEA_K@Z @ 0x18000FB9C (--$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@-$CActivationBasedCollection@V-$ComPtr@UIIm.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180011CD0 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_180011CD0.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x18006DBBC (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleTaskWindowDestruction(
        CApplicationManager *this,
        const struct CTaskWindowFinder *a2)
{
  char *v4; // r15
  __int64 v5; // r8
  bool v6; // bl
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned int (__fastcall *v10)(__int64, const struct CTaskWindowFinder *, __int64 *); // rdi
  bool v11; // bl
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+48h] [rbp-8h]
  __int64 v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+50h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v4 = (char *)this + 704;
  v12 = *(_QWORD *)a2;
  v13 = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v14 = *((_BYTE *)a2 + 16);
  v15 = 1;
  v6 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByTaskWindow>(
              v4,
              &v12,
              v5,
              &v18) >= 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 89);
    v8 = v18;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7 + 8 * v8))(
      *(_QWORD *)(v7 + 8 * v8),
      &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
      &v16);
    v9 = v16;
    v10 = *(unsigned int (__fastcall **)(__int64, const struct CTaskWindowFinder *, __int64 *))(*(_QWORD *)v16 + 80LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    if ( v10(v9, a2, &v17) == 6 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 16LL))(v4, v8);
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    v12 = *(_QWORD *)a2;
    v13 = *((_QWORD *)a2 + 1);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v14 = *((_BYTE *)a2 + 16);
    v15 = 1;
    v11 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v12, &v16, &v18) >= 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    if ( v11 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
      CApplicationManager::_RemoveWindowFromGlom(this, a2, v16);
    }
  }
  if ( v16 )
    CApplicationManager::_UpdatePerApplicationDataIfNeeded(this, v16, v17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
}
