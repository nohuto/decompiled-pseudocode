/*
 * XREFs of ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x180361664
 * Callers:
 *     ?OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803615D0 (-OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180361620 (-OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180025640 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800732BC (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::PositionApplicationOnPrimaryMonitor(
        CTaskContinuityActivitiesExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v9; // eax
  __int64 v10; // rdx
  HWND WindowW; // rax
  HRESULT v12; // eax
  __int64 v13; // rdx
  void *ppvOut; // [rsp+30h] [rbp-30h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT v18; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( *((_QWORD *)this + 12) )
  {
    v17 = 0LL;
    v2 = *((_QWORD *)this + 36);
    v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    v4 = v3(v2, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &v17);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_22:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      return v5;
    }
    punk = 0LL;
    v6 = v17;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 88LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&punk);
    v9 = v7(v6, AddressOf);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 244LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_21;
    }
    v18 = 0LL;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      v12 = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              &ppvOut);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 251LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
LABEL_21:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
        goto LABEL_22;
      }
      v12 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v18);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 252LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v18);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 256LL;
        goto LABEL_20;
      }
    }
    v9 = CSingleViewShellExperience::SetPosition(
           (CTaskContinuityActivitiesExperienceManager *)((char *)this + 72),
           &v18);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 259LL;
      goto LABEL_20;
    }
    v9 = CSingleViewShellExperience::ShowBorder((__int64)this + 72, 0, 3LL, 0LL, 0);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 260LL;
      goto LABEL_20;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  }
  return 0LL;
}
