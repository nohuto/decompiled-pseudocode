/*
 * XREFs of ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x180399440
 * Callers:
 *     <none>
 * Callees:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18000E214 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000E7B4 (--$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersive.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18001065C (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ForgetApplicationByHostId(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  char v6; // si
  CApplicationManager *v7; // rbx
  struct IImmersiveApplicationInternal *v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0;
  v9 = 0LL;
  v7 = (CApplicationManager *)((char *)this - 152);
  v11 = a3;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>((__int64)v7, (__int64)&v11, &v9) < 0 )
      break;
    v6 = 1;
    CApplicationManager::_ForgetApplicationNoLock(v7, v9, 2u);
  }
  CApplicationManager::_DeleteApplicationData(v7, a2, &v10);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  return v6 == 0 ? 0x80070490 : 0;
}
