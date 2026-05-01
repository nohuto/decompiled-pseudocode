/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x18007398C
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18000C880 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800336F0 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800728C4 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x18036FA80 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18036FF80 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CStartExperienceManager::GetMonitorInformation(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4,
        bool *a5,
        HMONITOR *a6)
{
  int v8; // eax
  HRESULT v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  int v13; // eax
  HWND WindowW; // rax
  LANGID ThreadUILanguage; // ax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-50h]
  IUnknown *punk; // [rsp+30h] [rbp-40h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-38h] BYREF
  int v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  HMONITOR v23; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v24; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  *a3 = 0LL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v22 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 66) + 24LL))(
         *((_QWORD *)this + 66),
         &SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         &v22);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x395,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v18);
    goto LABEL_16;
  }
  punk = 0LL;
  v10 = v22;
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 88LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&punk);
  v9 = v11(v10, AddressOf);
  if ( v9 >= 0 )
  {
    v23 = 0LL;
    if ( !a6 || (v9 = ((__int64 (__fastcall *)(IUnknown *, HMONITOR *))punk->lpVtbl[1].Release)(punk, &v23), v9 >= 0) )
    {
      ppvOut = 0LL;
      v9 = IUnknown_QueryService(
             punk,
             (const GUID *const)&SID_EdgeUi,
             &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
             &ppvOut);
      if ( v9 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v21);
        v9 = v13;
        if ( v13 < 0 )
        {
          v17 = 934LL;
        }
        else
        {
          WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
          if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
          {
            v13 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v24);
            v9 = v13;
            if ( v13 >= 0 )
              goto LABEL_11;
            v17 = 941LL;
          }
          else
          {
            v13 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v24);
            v9 = v13;
            if ( v13 >= 0 )
            {
LABEL_11:
              *a3 = v24;
              *(_DWORD *)a4 = v21;
              ThreadUILanguage = GetThreadUILanguage();
              *a5 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
              if ( a6 )
                *a6 = v23;
              v9 = 0;
              goto LABEL_14;
            }
            v17 = 945LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v13,
          v18);
      }
LABEL_14:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return (unsigned int)v9;
}
