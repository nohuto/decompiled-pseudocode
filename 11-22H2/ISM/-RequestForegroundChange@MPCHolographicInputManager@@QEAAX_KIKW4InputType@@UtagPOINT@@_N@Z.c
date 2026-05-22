/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800C9178
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800C6838 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180117F10 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18001D79C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B438C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B44D4 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z @ 0x1800B5510 (-SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z.c)
 *     ?Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ @ 0x1800C6250 (-Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x1800C6290 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800C7960 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MPCHolographicInputManager::RequestForegroundChange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        bool a7)
{
  unsigned int v7; // r12d
  __int64 v11; // rbx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  __int64 v17; // rcx
  bool IsEnabled; // al
  __int64 v19; // rcx
  bool v20; // si
  ISMTracing *v21; // rcx
  unsigned int Ancestor; // eax
  int (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v24)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v25; // rbx
  void (__fastcall *v26)(__int64, unsigned __int64, _QWORD, _QWORD, int); // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int ThreadIdFromViewId; // edi
  struct ViewHierarchyWithWindowManager *v29; // rax
  unsigned int ProcessIdFromViewId; // eax
  ForegroundManager *ForegroundManager; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v34; // [rsp+60h] [rbp+8h] BYREF

  v7 = (unsigned int)a4;
  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x53B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v11 = MPCHolographicInputManager::Get3DFocusedWindowId((MPCHolographicInputManager *)a1);
  v12 = 0;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, v13, v14, v15);
  if ( FocusedTarget )
    v12 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 80LL))(FocusedTarget);
  IsEnabled = ISMTracing::IsEnabled(v17);
  v20 = a7;
  if ( IsEnabled )
  {
    wil::details::static_lazy<ISMTracing>::get(v19, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(v21, a2, v11, a3, v7, v20);
  }
  LOBYTE(Ancestor) = IsEdition(8778LL);
  if ( (_BYTE)Ancestor )
  {
    if ( a2 )
    {
      Ancestor = (unsigned int)GetAncestor((HWND)(int)v11, 2u);
      if ( v11 != a2 && (!a3 || v12 != a3) && Ancestor != a2 )
      {
        SetForegroundWindow((HWND)(int)a2);
        v34 = 0LL;
        if ( v20 )
        {
          if ( a3 )
          {
            v23 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 3280);
            v24 = **v23;
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v34);
            if ( v24(v23, &GUID_9ea1391d_b072_488c_9579_08639d61cf31, &v34) >= 0 )
            {
              v25 = v34;
              v26 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, int))(*(_QWORD *)v34 + 24LL);
              ViewHierarchy = ISMStatics::GetViewHierarchy();
              ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, a3);
              v29 = ISMStatics::GetViewHierarchy();
              ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v29, a3);
              v26(v25, a2, a3, ProcessIdFromViewId, ThreadIdFromViewId);
            }
          }
        }
        LOBYTE(Ancestor) = Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v34);
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
