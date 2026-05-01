/*
 * XREFs of ?QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1802E6730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180143C9C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::QueryObjectForWindow(
        CApplicationManager *this,
        int a2,
        struct IInspectable **a3)
{
  __int64 v5; // rsi
  RTL_SRWLOCK *v6; // rbx
  int First; // edi
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IInspectable **); // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK v12; // [rsp+68h] [rbp+20h]

  v5 = a2;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  v9 = v5;
  v10 = 2;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
            (__int64)this - 328,
            (__int64)&v9,
            &v11,
            0LL);
  if ( First >= 0 )
    First = (**v11)(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)First;
}
