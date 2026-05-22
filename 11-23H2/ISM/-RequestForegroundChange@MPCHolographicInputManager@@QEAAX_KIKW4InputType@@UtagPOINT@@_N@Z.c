/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800B8060
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800B5128 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1801098A0 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180026B3C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800A1D54 (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800A1E9C (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z @ 0x1800A2ED0 (-SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z.c)
 *     ??$MPCHolographicInputManager_RequestForegroundChange@AEA_KAEA_KAEAIAEAKAEA_N@ISMTracing@@SAXAEA_K0AEAIAEAKAEA_N@Z @ 0x1800B3434 (--$MPCHolographicInputManager_RequestForegroundChange@AEA_KAEA_KAEAIAEAKAEA_N@ISMTracing@@SAXAEA.c)
 *     ?Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ @ 0x1800B4B40 (-Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x1800B4B80 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
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
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  unsigned int Ancestor; // eax
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, unsigned __int64, _QWORD, _QWORD, int); // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int ThreadIdFromViewId; // edi
  struct ViewHierarchyWithWindowManager *v23; // rax
  unsigned int ProcessIdFromViewId; // eax
  ForegroundManager *ForegroundManager; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  __int64 v28; // [rsp+70h] [rbp+38h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+88h] [rbp+50h] BYREF

  v31 = (unsigned int)a4;
  v30 = a3;
  v29 = a2;
  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x53B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v10 = MPCHolographicInputManager::Get3DFocusedWindowId((MPCHolographicInputManager *)a1);
  v28 = v10;
  v11 = 0;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, v12, v13, v14);
  if ( FocusedTarget )
    v11 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 80LL))(FocusedTarget);
  ISMTracing::MPCHolographicInputManager_RequestForegroundChange<unsigned __int64 &,unsigned __int64 &,unsigned int &,unsigned long &,bool &>(
    &v29,
    (unsigned __int64 *)&v28,
    &v30,
    &v31,
    &a7);
  LOBYTE(Ancestor) = IsEdition(8778LL);
  if ( (_BYTE)Ancestor )
  {
    if ( a2 )
    {
      Ancestor = (unsigned int)GetAncestor((HWND)(int)v10, 2u);
      if ( v10 != a2 && (!a3 || v11 != a3) && Ancestor != a2 )
      {
        SetForegroundWindow((HWND)(int)a2);
        v28 = 0LL;
        if ( a7 )
        {
          if ( a3 )
          {
            v17 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 3280);
            v18 = **v17;
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v28);
            if ( v18(v17, &GUID_9ea1391d_b072_488c_9579_08639d61cf31, &v28) >= 0 )
            {
              v19 = v28;
              v20 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, int))(*(_QWORD *)v28 + 24LL);
              ViewHierarchy = ISMStatics::GetViewHierarchy();
              ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, a3);
              v23 = ISMStatics::GetViewHierarchy();
              ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v23, a3);
              v20(v19, a2, a3, ProcessIdFromViewId, ThreadIdFromViewId);
            }
          }
        }
        LOBYTE(Ancestor) = Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v28);
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
