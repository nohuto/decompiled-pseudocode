/*
 * XREFs of ?GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x180399840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18039579C (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplication **a3)
{
  RTL_SRWLOCK *v6; // rbx
  int First; // edi
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v10; // [rsp+48h] [rbp+10h] BYREF
  PSRWLOCK v11; // [rsp+50h] [rbp+18h]

  *a3 = 0LL;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  v10 = a2;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>((__int64)this - 168, &v10, &v9);
  if ( First >= 0 )
    First = (**v9)(v9, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)First;
}
