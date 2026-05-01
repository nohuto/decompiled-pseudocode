/*
 * XREFs of ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18035B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801343F8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803558A8 (--$As@VICortanaExperienceView@Cortana@TwinUI@@@-$ComPtr@UIShellExperiencePositioner@Experience@S.c)
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x180355CBC (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x180355D1C (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803571E4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180357BD4 (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x18035BE98 (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18035D170 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18035D4C4 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18035DB30 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ecx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **); // rbx
  int v14; // eax
  CortanaSharedExperienceManager *v15; // rcx
  int v16; // eax
  HSTRING v17; // rbx
  unsigned __int16 *StringRawBuffer; // rdi
  CortanaSharedExperienceManager *v19; // rcx
  int CortanaEntryPointAndArgs; // eax
  const unsigned __int16 *v21; // rsi
  const unsigned __int16 *v22; // rdi
  int v23; // edi
  __int64 v24; // rdx
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v27; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v28; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v29; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  RTL_SRWLOCK v32[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  LODWORD(string) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 496) + 64LL))(*(_QWORD *)(a1 + 496), &string);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = (int)string;
  LODWORD(string) = v7;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>((int *)&string);
  CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((CortanaSharedExperienceManager *)a1);
  v8 = *(__int64 **)(a1 + 424);
  v9 = *v8;
  if ( !*(_BYTE *)(a1 + 537) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HSTRING))(v9 + 24))(v8, *(_QWORD *)(a1 + 504), a2);
    if ( v10 < 0 )
    {
      v11 = 430LL;
      goto LABEL_6;
    }
LABEL_9:
    v29 = 0LL;
    v12 = *(_QWORD *)(a1 + 424);
    v13 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(*(_QWORD *)v12 + 8LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
    v14 = v13(v12, &v29);
    v10 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_22:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
      return (unsigned int)v10;
    }
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(v15, a2, v29, &string);
    v10 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      WindowsDeleteString(string);
      goto LABEL_22;
    }
    length = 0;
    v17 = string;
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, &length);
    string = (HSTRING)StringRawBuffer;
    v27 = 0LL;
    WindowsDeleteString(0LL);
    v28 = 0LL;
    WindowsDeleteString(v27);
    CortanaEntryPointAndArgs = CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
                                 v19,
                                 StringRawBuffer,
                                 length,
                                 &v27,
                                 &v28);
    if ( CortanaEntryPointAndArgs < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)CortanaEntryPointAndArgs);
    v21 = WindowsGetStringRawBuffer(v28, 0LL);
    v22 = WindowsGetStringRawBuffer(v27, 0LL);
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v32,
      (__int64)"CortanaExperienceManager_ShowDocked");
    v32[0].Ptr = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(
      (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v32,
      v22,
      v21);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
      (__int64)v32,
      (__int64 *)&string);
    v31 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v29,
                &v31) < 0 )
    {
      v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, _QWORD, HSTRING, _QWORD))(*(_QWORD *)v29 + 80LL))(
              v29,
              *(_QWORD *)(a1 + 504),
              v17,
              0LL);
      if ( v23 < 0 )
      {
        v24 = 456LL;
        goto LABEL_18;
      }
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v31 + 80LL))(v31, v17, a3);
      if ( v23 < 0 )
      {
        v24 = 452LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v32);
        WindowsDeleteString(v28);
        v28 = 0LL;
        WindowsDeleteString(v27);
        v27 = 0LL;
        WindowsDeleteString(v17);
        v10 = v23;
        goto LABEL_22;
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v32);
    WindowsDeleteString(v28);
    v28 = 0LL;
    WindowsDeleteString(v27);
    v27 = 0LL;
    WindowsDeleteString(v17);
    v10 = 0;
    goto LABEL_22;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 32))(v8, 1LL, *(_QWORD *)(a1 + 504));
  if ( v10 >= 0 )
    goto LABEL_9;
  v11 = 426LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
