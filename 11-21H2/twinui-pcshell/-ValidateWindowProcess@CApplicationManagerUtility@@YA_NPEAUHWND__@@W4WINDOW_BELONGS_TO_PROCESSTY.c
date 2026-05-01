/*
 * XREFs of ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1802ECD94
 * Callers:
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180055A84 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802F23F0 (-HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1805E7388 (-GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1805E8408 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 */

bool __fastcall CApplicationManagerUtility::ValidateWindowProcess(
        CallerIdentity *a1,
        int a2,
        enum PROCESS_UICONTEXT *a3)
{
  bool v3; // bl
  void **v4; // r8
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF
  HLOCAL hMem; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( a2 )
  {
    hMem = 0LL;
    if ( (GetWindowThreadProcessId((HWND)a1, &dwProcessId) || ResultFromKnownLastError() >= 0)
      && (int)CallerIdentity::GetPackageSidFromProcess(dwProcessId, &hMem, v4) >= 0 )
    {
      if ( !(unsigned int)RtlGetAppContainerSidType(hMem, &dwProcessId) )
        v3 = dwProcessId == 1;
      LocalFree(hMem);
    }
  }
  else if ( (int)CallerIdentity::GetProcessTypeFromWindow(a1, (HWND)&dwProcessId, a3) >= 0 )
  {
    return dwProcessId == 2;
  }
  return v3;
}
