/*
 * XREFs of ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1801230DC
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800E8B80 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x18012351C (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_18012351C.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180124EC0 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@_KPEA_K@Z @ 0x180124F58 (--$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@-$CActivationBasedCollection@V-$ComPtr@UIIm.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801759E4 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleTaskWindowDestruction(
        CApplicationManager *this,
        const struct CTaskWindowFinder *a2,
        __int64 a3)
{
  _QWORD *v5; // r15
  __int64 v6; // rcx
  bool v7; // bl
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned int (__fastcall *v11)(__int64, const struct CTaskWindowFinder *, __int64 *); // rdi
  __int64 v12; // rcx
  bool v13; // bl
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+48h] [rbp-8h]
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v5 = (_QWORD *)((char *)this + 704);
  v14 = *(_QWORD *)a2;
  v6 = *((_QWORD *)a2 + 1);
  v15 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v16 = *((_BYTE *)a2 + 16);
  v17 = 1;
  v7 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByTaskWindow>(
              v5,
              &v14,
              a3,
              &v20) >= 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  if ( v7 )
  {
    v8 = v5[1];
    v9 = v20;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v8 + 8 * v9))(
      *(_QWORD *)(v8 + 8 * v9),
      &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
      &v18);
    v10 = v18;
    v11 = *(unsigned int (__fastcall **)(__int64, const struct CTaskWindowFinder *, __int64 *))(*(_QWORD *)v18 + 80LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    if ( v11(v10, a2, &v19) == 6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 16LL))(v5, v9);
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    v14 = *(_QWORD *)a2;
    v12 = *((_QWORD *)a2 + 1);
    v15 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v16 = *((_BYTE *)a2 + 16);
    v17 = 1;
    v13 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v14, &v18, &v20) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    if ( v13 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      CApplicationManager::_RemoveWindowFromGlom(this, a2, v18);
    }
  }
  if ( v18 )
    CApplicationManager::_UpdatePerApplicationDataIfNeeded(this, v18, v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
}
