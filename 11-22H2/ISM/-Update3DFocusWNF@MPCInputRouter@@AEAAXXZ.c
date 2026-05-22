/*
 * XREFs of ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801195FC
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180118F6C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x18011940C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180056318 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B48C0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z @ 0x180116404 (--$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1801171F4 (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x180117C60 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Update3DFocusWNF(MPCInputRouter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  struct ViewHierarchyWithWindowManager *v4; // rax
  ViewHierarchyWithWindowManager *v5; // rax
  unsigned int ProxyWindow; // eax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rbx
  struct ViewHierarchyWithWindowManager *v9; // rax
  int v10; // ebx
  struct ViewHierarchyWithWindowManager *v11; // rax
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h]
  unsigned int v15[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 Ancestor; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned int ViewIdFromWindowId; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *((_QWORD *)this + 100);
  if ( v2 )
  {
    *(_QWORD *)v15 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 72LL))(*((_QWORD *)this + 100));
    ViewIdFromWindowId = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 80LL))(*((_QWORD *)this + 100));
    *(_QWORD *)v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 56LL))(*((_QWORD *)this + 100));
    Ancestor = *(_QWORD *)v15;
    if ( *((_BYTE *)this + 896) )
      v3 = *((_DWORD *)this + 225);
    else
      v3 = v17;
    v20 = v3;
    if ( ViewIdFromWindowId
      || (v4 = ISMStatics::GetViewHierarchy(), (ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v4, v15[0])) != 0) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
      v9 = ISMStatics::GetViewHierarchy();
      ViewHierarchyWithWindowManager::GetAllAncestors((unsigned __int64)v9, &v13, ViewIdFromWindowId);
      if ( v13 != v14 )
      {
        v10 = *(_DWORD *)(v14 - 4);
        v11 = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v11, v10);
      }
      Ancestor = WindowIdFromViewId;
      std::vector<Windows::UI::Color>::_Tidy((__int64)&v13);
    }
    else if ( IsEdition(1024LL) )
    {
      v5 = ISMStatics::GetViewHierarchy();
      ProxyWindow = ViewHierarchyWithWindowManager::GetProxyWindow(v5, v15[0]);
      if ( ProxyWindow )
        Ancestor = ProxyWindow;
    }
    if ( IsEdition(8778LL) )
      Ancestor = (unsigned __int64)GetAncestor((HWND)(int)Ancestor, 3u);
    v12 = RtlPublishWnfStateData(WNF_HOLO_INPUT_FOCUS_CHANGE, 0LL, v15, 32LL) | 0x10000000;
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x37A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v12,
        0);
    ISMTracing::MPCInputRouter_Update3DFocusWNF<unsigned __int64 &,unsigned __int64 &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
      (unsigned __int64 *)v15,
      &Ancestor,
      &v17,
      &v18,
      &ViewIdFromWindowId,
      &v20);
  }
}
