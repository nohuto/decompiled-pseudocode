/*
 * XREFs of ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18045E840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014D168 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x180428030 (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x180428090 (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18042955C (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180429F30 (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x18042DE1C (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18045EF28 (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18045F280 (-_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18045F6E0 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ebx
  SearchAppExperienceManager *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  HSTRING v14; // rbx
  unsigned __int16 *StringRawBuffer; // rdi
  SearchAppExperienceManager *v16; // rcx
  int CortanaEntryPointAndArgs; // eax
  const unsigned __int16 *v18; // rsi
  const unsigned __int16 *v19; // rdi
  int v20; // eax
  DWORD v21; // edx
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v23; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v24; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 length; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v26[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  LODWORD(string) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 504) + 64LL))(*(_QWORD *)(a1 + 504), &string);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = (int)string;
  LODWORD(string) = v7;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>((int *)&string);
  SearchAppExperienceManager::_CancelDeferredSuspensionTimer((SearchAppExperienceManager *)a1);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 424) + 72LL))(
         *(_QWORD *)(a1 + 424),
         *(_QWORD *)(a1 + 512),
         1LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v12 = SearchAppExperienceManager::_NormalizeAndAddPositionerArgs(v11, a2, &string);
    v13 = v12;
    v14 = string;
    if ( v12 >= 0 )
    {
      length = 0;
      StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, &length);
      string = (HSTRING)StringRawBuffer;
      v23 = 0LL;
      WindowsDeleteString(0LL);
      v24 = 0LL;
      WindowsDeleteString(v23);
      CortanaEntryPointAndArgs = SearchAppExperienceManager::_GetCortanaEntryPointAndArgs(
                                   v16,
                                   StringRawBuffer,
                                   length,
                                   &v23,
                                   &v24);
      if ( CortanaEntryPointAndArgs < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1AF,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)CortanaEntryPointAndArgs);
      v18 = WindowsGetStringRawBuffer(v24, 0LL);
      v19 = WindowsGetStringRawBuffer(v23, 0LL);
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v26,
        (__int64)"CortanaExperienceManager_ShowDocked");
      v26[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
      CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(
        (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v26,
        v19,
        v18);
      CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
        (__int64)v26,
        (__int64 *)&string);
      v20 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**(_QWORD **)(a1 + 432) + 80LL))(
              *(_QWORD *)(a1 + 432),
              v14,
              a3);
      v13 = v20;
      if ( v20 >= 0 )
      {
        wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v26,
          v21);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v26);
        WindowsDeleteString(v24);
        v24 = 0LL;
        WindowsDeleteString(v23);
        v23 = 0LL;
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B4,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v26);
        WindowsDeleteString(v24);
        v24 = 0LL;
        WindowsDeleteString(v23);
        v23 = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    }
    WindowsDeleteString(v14);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
