/*
 * XREFs of ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C4C10
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x1800C3C34 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x18018CFE8 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x1801BD070 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x1803C8A70 (-GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180475BD8 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?TryGetTileIdForWindow@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@Z @ 0x1805E5090 (-TryGetTileIdForWindow@JointResize@@AEAA-AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x18073C770 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800740B4 (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C5230 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CallerIdentity::GetImmersiveAppIdFromWindow(CallerIdentity *this, _QWORD *a2, unsigned __int16 **a3)
{
  const char *v5; // r9
  wil::details *v6; // rcx
  char *v7; // rbx
  unsigned __int16 **v8; // r8
  const char *v9; // r9
  int ProcessAppId; // edi
  int WeakWindowAppId; // eax
  signed int LastError; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6B,
             (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
             v5);
  v7 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v17 = 0LL;
    if ( (unsigned int)GetProcessUIContextInformation(v7, &v17) )
    {
      if ( (_DWORD)v17 == 2
        && (WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(this, a2, v8),
            ProcessAppId = WeakWindowAppId,
            WeakWindowAppId < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x78,
          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
          (const char *)(unsigned int)WeakWindowAppId,
          v14);
      }
      else if ( *a2 || (ProcessAppId = CallerIdentity::GetProcessAppId(v7, a2, v8), ProcessAppId >= 0) )
      {
        ProcessAppId = 0;
      }
      goto LABEL_7;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x71,
                  (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                  v9);
  }
  else
  {
    LastError = wil::details::GetLastErrorFailHr(v6);
  }
  ProcessAppId = LastError;
LABEL_7:
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return (unsigned int)ProcessAppId;
}
