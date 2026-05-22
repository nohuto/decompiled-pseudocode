/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800A0968
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x18009DF08 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800F0680 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008AC3C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008AD84 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z @ 0x18008BDE8 (-SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x18009D960 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x18009F020 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MPCHolographicInputManager::RequestForegroundChange(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        bool a7)
{
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  __int64 v11; // rbx
  struct IMPCFocusTarget *FocusedTarget; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  int v16; // r15d
  struct IMPCFocusTarget *v17; // rax
  __int64 v18; // rcx
  bool IsEnabled; // al
  __int64 v20; // rcx
  bool v21; // si
  ISMTracing *v22; // rcx
  unsigned int Ancestor; // eax
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v25)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v26; // rbx
  void (__fastcall *v27)(__int64, unsigned __int64, _QWORD, _QWORD, int); // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int ThreadIdFromViewId; // edi
  struct ViewHierarchyWithWindowManager *v30; // rax
  unsigned int ProcessIdFromViewId; // eax
  ForegroundManager *ForegroundManager; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v35; // [rsp+60h] [rbp+8h] BYREF

  v7 = (unsigned int)a4;
  v8 = a3;
  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1352LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v11 = 0LL;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, a2, a3, a4);
  if ( FocusedTarget )
    v11 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
  v16 = 0;
  v17 = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, v13, v14, v15);
  if ( v17 )
    v16 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v17 + 80LL))(v17);
  IsEnabled = ISMTracing::IsEnabled(v18);
  v21 = a7;
  if ( IsEnabled )
  {
    wil::details::static_lazy<ISMTracing>::get(v20, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(v22, a2, v11, v8, v7, v21);
  }
  LOBYTE(Ancestor) = IsEdition(8778LL);
  if ( (_BYTE)Ancestor )
  {
    if ( a2 )
    {
      Ancestor = (unsigned int)GetAncestor((HWND)(int)v11, 2u);
      if ( v11 != a2 && (!v8 || v16 != v8) && Ancestor != a2 )
      {
        SetForegroundWindow((HWND)(int)a2);
        v35 = 0LL;
        if ( v21 )
        {
          if ( v8 )
          {
            v24 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 3280);
            v25 = **v24;
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
            if ( v25(v24, &GUID_9ea1391d_b072_488c_9579_08639d61cf31, &v35) >= 0 )
            {
              v26 = v35;
              v27 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, int))(*(_QWORD *)v35 + 24LL);
              ViewHierarchy = ISMStatics::GetViewHierarchy();
              ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, v8);
              v30 = ISMStatics::GetViewHierarchy();
              ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v30, v8);
              v27(v26, a2, v8, ProcessIdFromViewId, ThreadIdFromViewId);
            }
          }
        }
        LOBYTE(Ancestor) = Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
      }
    }
  }
  else
  {
    ForegroundManager = ISMStatics::GetForegroundManager();
    LOBYTE(Ancestor) = ForegroundManager::SetForegroundActivatableEntity(ForegroundManager, a2);
  }
  return Ancestor;
}
