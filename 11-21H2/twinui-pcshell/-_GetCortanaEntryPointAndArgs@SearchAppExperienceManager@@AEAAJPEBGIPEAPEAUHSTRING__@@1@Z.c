/*
 * XREFs of ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18038B328
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18038A920 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180357098 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180357B24 (--1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18035BBE0 (-StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@Q.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035BF78 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x18035D740 (-_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::_GetCortanaEntryPointAndArgs(
        SearchAppExperienceManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HSTRING *a4,
        HSTRING *string)
{
  const WCHAR *v8; // rcx
  UINT32 v9; // ebx
  HRESULT v10; // eax
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // ebx
  PCNZWCH sourceString; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v17[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"CortanaExperienceManager_GetCortanaEntryPointAndArgs");
  v17[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v17);
  v8 = L"Unknown";
  v9 = 7;
  sourceString = L"Unknown";
  *(_QWORD *)length = 7LL;
  if ( a2 )
  {
    SearchAppExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"Positioner=",
      a3,
      (wchar_t **)&sourceString,
      (unsigned __int64 *)length);
    v10 = WindowsCreateString(sourceString, length[0], string);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x322,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    SearchAppExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"StartMode=",
      a3,
      (wchar_t **)&sourceString,
      (unsigned __int64 *)length);
    if ( sourceString && wcsstr(sourceString, L"AppTransition") )
    {
      v8 = L"StartButton";
      v9 = 11;
    }
    else
    {
      SearchAppExperienceManager::_GetLaunchArgsSubstring(
        a2,
        L"QuerySource=",
        a3,
        (wchar_t **)&sourceString,
        (unsigned __int64 *)length);
      v8 = sourceString;
      if ( sourceString )
        v9 = length[0];
      else
        v8 = L"Unknown";
    }
  }
  v11 = WindowsCreateString(v8, v9, a4);
  v13 = v11;
  if ( v11 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v17,
      v12);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x338,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::~CortanaExperienceManager_GetCortanaEntryPointAndArgs((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v17);
  return v13;
}
