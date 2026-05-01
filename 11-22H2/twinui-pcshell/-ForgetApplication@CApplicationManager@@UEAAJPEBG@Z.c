/*
 * XREFs of ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x180399370
 * Callers:
 *     <none>
 * Callees:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18000E214 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18039579C (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1803A2090 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ForgetApplication(CApplicationManager *this, const unsigned __int16 *a2)
{
  char v4; // di
  CApplicationManager *v5; // rbx
  struct IImmersiveApplicationInternal *v7; // [rsp+30h] [rbp+8h] BYREF
  const unsigned __int16 *v8; // [rsp+38h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  v7 = 0LL;
  v5 = (CApplicationManager *)((char *)this - 152);
  v8 = a2;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>((__int64)v5, &v8, &v7) < 0 )
      break;
    v4 = 1;
    CApplicationManager::_ForgetApplicationNoLock(v5, v7, 2u);
  }
  CApplicationManager::_DeleteApplicationData(v5, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  return v4 == 0 ? 0x80070490 : 0;
}
