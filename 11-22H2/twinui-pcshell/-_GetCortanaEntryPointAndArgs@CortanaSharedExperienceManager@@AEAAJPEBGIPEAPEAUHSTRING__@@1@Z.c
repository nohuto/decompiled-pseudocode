/*
 * XREFs of ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18042F50C
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18042D710 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180427888 (--$-0$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@AEAA@U-.c)
 *     ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180429E80 (--1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18042DEF4 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x18042F768 (-_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
        CortanaSharedExperienceManager *this,
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

  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::CortanaExperienceManager_GetCortanaEntryPointAndArgs(
    (__int64)v17,
    (char)a2);
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
      &sourceString,
      (unsigned __int64 *)length);
    v10 = WindowsCreateString(sourceString, length[0], string);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x393,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    SearchAppExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"StartMode=",
      a3,
      &sourceString,
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
        &sourceString,
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
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v17, v12);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::~CortanaExperienceManager_GetCortanaEntryPointAndArgs((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v17);
  return v13;
}
