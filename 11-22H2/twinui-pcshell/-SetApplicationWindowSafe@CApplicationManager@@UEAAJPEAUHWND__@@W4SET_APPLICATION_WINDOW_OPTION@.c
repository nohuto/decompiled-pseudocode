/*
 * XREFs of ?SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x18039FFA0
 * Callers:
 *     ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x18039FF00 (-SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z.c)
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003FFA0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationWindowSafe(__int64 a1, __int64 a2, int a3)
{
  bool v5; // di
  __int64 v6; // rbx
  signed int First; // ebx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  v12 = 0LL;
  v6 = a1 - 248;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  v10 = a2;
  v11 = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, (__int64)&v10, &v12, 0LL);
  if ( First >= 0 )
  {
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 384LL))(v12) == a2 )
    {
      v5 = (a3 & 0xFFFFFFFE) == 0;
      if ( (a3 & 0xFFFFFFFE) == 0 )
        goto LABEL_7;
    }
    else if ( (a3 & 1) == 0 )
    {
      First = -2147024809;
      goto LABEL_7;
    }
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 280LL))(v12) & 2;
    First = v8 != 0 ? 0x8007139F : 0;
    if ( !v8 && !v5 )
      First = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 112LL))(v12, a2, 1LL);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return (unsigned int)First;
}
