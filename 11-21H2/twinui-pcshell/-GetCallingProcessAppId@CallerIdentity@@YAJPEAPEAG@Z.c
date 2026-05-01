/*
 * XREFs of ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1800C6188
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x180058FA4 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1800C60D0 (-_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?VerifyCallingProcessIsTrustedHandlerForUriScheme@ProtocolLauncher@Utils@@QEAAXXZ @ 0x1805D1890 (-VerifyCallingProcessIsTrustedHandlerForUriScheme@ProtocolLauncher@Utils@@QEAAXXZ.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1805E77BC (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18008CC00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1800C6334 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetCallingProcessAppId(unsigned int **this, unsigned __int16 **a2)
{
  int CallingProcessHandle; // ebx
  unsigned __int16 **v4; // r8
  int ProcessAppId; // eax
  char *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  *this = 0LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, 1LL, &hObject);
  if ( CallingProcessHandle >= 0 )
  {
    ProcessAppId = CallerIdentity::GetProcessAppId(hObject, this, v4);
    CallingProcessHandle = ProcessAppId;
    if ( ProcessAppId != -2147023728 && ProcessAppId != -2147024891 )
    {
      if ( ProcessAppId >= 0 )
        CallingProcessHandle = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE8,
          (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)(unsigned int)ProcessAppId);
    }
  }
  v6 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return (unsigned int)CallingProcessHandle;
}
