/*
 * XREFs of ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18038A920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801343F8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x180355CBC (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x180355D1C (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803571E4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180357BD4 (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x18035BE98 (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18038AFD0 (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18038B328 (-_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18038B7A8 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
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
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v22; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v23; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 length; // [rsp+48h] [rbp-B8h] BYREF
  RTL_SRWLOCK v25[40]; // [rsp+50h] [rbp-B0h] BYREF
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
      v22 = 0LL;
      WindowsDeleteString(0LL);
      v23 = 0LL;
      WindowsDeleteString(v22);
      CortanaEntryPointAndArgs = SearchAppExperienceManager::_GetCortanaEntryPointAndArgs(
                                   v16,
                                   StringRawBuffer,
                                   length,
                                   &v22,
                                   &v23);
      if ( CortanaEntryPointAndArgs < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1AC,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)CortanaEntryPointAndArgs);
      v18 = WindowsGetStringRawBuffer(v23, 0LL);
      v19 = WindowsGetStringRawBuffer(v22, 0LL);
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v25,
        (__int64)"CortanaExperienceManager_ShowDocked");
      v25[0].Ptr = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
      CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(
        (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v25,
        v19,
        v18);
      CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
        (__int64)v25,
        (__int64 *)&string);
      v20 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**(_QWORD **)(a1 + 432) + 80LL))(
              *(_QWORD *)(a1 + 432),
              v14,
              a3);
      v13 = v20;
      if ( v20 >= 0 )
      {
        wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v25);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v25);
        WindowsDeleteString(v23);
        v23 = 0LL;
        WindowsDeleteString(v22);
        v22 = 0LL;
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B1,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v25);
        WindowsDeleteString(v23);
        v23 = 0LL;
        WindowsDeleteString(v22);
        v22 = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    }
    WindowsDeleteString(v14);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
