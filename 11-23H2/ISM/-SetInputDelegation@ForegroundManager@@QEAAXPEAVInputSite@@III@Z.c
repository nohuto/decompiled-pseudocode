/*
 * XREFs of ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800A3070
 * Callers:
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180142F90 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180143020 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 * Callees:
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180002718 (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001D9D0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x180022100 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180023B80 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIComponentSiteInputObjectProxy@@VBamoComponentSiteInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoComponentSiteInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A0368 (--$GetAttachedObject@UIComponentSiteInputObjectProxy@@VBamoComponentSiteInputObjectProxy@@@Input.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x1800A040C (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800A09E8 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A1520 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800A1D54 (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800A1E9C (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800A2288 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A2480 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1800A3E20 (-erase@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_compare@IU-$hash@I@s.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800A50B4 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800A50B4.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ForegroundManager::SetInputDelegation(
        ForegroundManager *this,
        struct InputSite *a2,
        int a3,
        const char *a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  struct InputSite *v6; // r15
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 WindowIdFromViewId; // r12
  unsigned int ThreadIdFromViewId; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  float *v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  char v21; // al
  struct InputSiteManager *InputSiteManager; // rax
  unsigned __int64 v23; // rsi
  const char *v24; // r9
  __int64 v25; // rcx
  const char *v26; // r9
  __int64 v27; // rax
  unsigned int v28; // [rsp+20h] [rbp-61h]
  unsigned int v29; // [rsp+30h] [rbp-51h]
  unsigned int ProcessIdFromViewId; // [rsp+34h] [rbp-4Dh]
  unsigned int ViewIdFromWindowId; // [rsp+38h] [rbp-49h]
  unsigned int v32; // [rsp+3Ch] [rbp-45h]
  __int64 v33; // [rsp+40h] [rbp-41h] BYREF
  __int64 v34; // [rsp+48h] [rbp-39h]
  unsigned int v35; // [rsp+50h] [rbp-31h]
  __int64 v36; // [rsp+58h] [rbp-29h] BYREF
  __int128 v37; // [rsp+60h] [rbp-21h]
  __int64 v38; // [rsp+70h] [rbp-11h]
  __int64 v39[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v40; // [rsp+88h] [rbp+7h] BYREF
  __int64 v41; // [rsp+90h] [rbp+Fh] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  unsigned int v44; // [rsp+E8h] [rbp+67h]

  v5 = (unsigned int)a4;
  v6 = a2;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x157,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  if ( !(_DWORD)a4 && !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x158,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  InputSite::GetAttachedObject<IComponentSiteInputObjectProxy,BamoComponentSiteInputObjectProxy>((__int64)v6, &v41);
  InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>((__int64)v6, &v40);
  v10 = v40;
  v11 = v41;
  if ( v41 )
  {
    ViewIdFromWindowId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v41 + 8) + 24LL))(v41 + 8);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
    v34 = WindowIdFromViewId;
  }
  else
  {
    if ( !v40 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x175,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        (const char *)0x8000FFFFLL,
        v28);
    WindowIdFromViewId = BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v40 + 8));
    v34 = WindowIdFromViewId;
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, WindowIdFromViewId);
  }
  ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v36, WindowIdFromViewId);
  if ( v36 )
  {
    ProcessIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v36 + 8) + 72LL))(v36 + 8);
    ThreadIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v36 + 8) + 88LL))(v36 + 8);
  }
  else
  {
    ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
    ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
  }
  v29 = ThreadIdFromViewId;
  v32 = *((_DWORD *)this + 56);
  v35 = *((_DWORD *)this + 57);
  v42 = *((_QWORD *)this + 27);
  v14 = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v42);
  v15 = v14;
  v44 = v14;
  if ( (a5 & 0x10) != 0 )
  {
    v16 = v5;
    if ( !v5 )
      v16 = a3;
    LODWORD(v33) = v16;
    v17 = 152LL;
    if ( !v5 )
      v17 = 88LL;
    v18 = (float *)((char *)this + v17);
    if ( (a5 & 0xE) != 0 && (a5 & 1) == 0 )
    {
      *(_QWORD *)&v37 = v34;
      *((_QWORD *)&v37 + 1) = __PAIR64__(v29, ProcessIdFromViewId);
      v38 = a5;
      v19 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                         v18,
                         (__int64)v39,
                         (unsigned __int8 *)&v33);
      *(_OWORD *)(v19 + 24) = v37;
      *(_QWORD *)(v19 + 40) = v38;
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::erase(
        v18,
        &v33);
    }
    v15 = v44;
  }
  if ( v5 )
  {
    if ( v5 != (_DWORD)v15 )
    {
      v20 = a3;
LABEL_28:
      if ( (a5 & 0x20) == 0 )
        goto LABEL_47;
      v21 = v5
          ? ForegroundManager::AreViewIdsInSameCompositeApp((ForegroundManager *)v15, ViewHierarchy, v15, v5)
          : ForegroundManager::IsProcessIDInSameCompositeAppAsView(this, ViewHierarchy, v15, v20);
      if ( !v21 )
        goto LABEL_47;
    }
  }
  else
  {
    v20 = a3;
    if ( a3 != v32 )
      goto LABEL_28;
  }
  if ( v11 )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    v23 = v34;
    v6 = *(struct InputSite **)InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v33, 1, v34);
    v25 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    if ( !v6 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        v24);
  }
  else
  {
    v23 = v34;
  }
  InputSite::GetAttachedObject<IDelegateInformationProvider>((__int64)v6, v39);
  if ( !v39[0] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1CA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      v26);
  v27 = *(_QWORD *)v39[0];
  if ( (a5 & 0xE) != 0 && (a5 & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v27 + 48))(v39[0], v44, v32, a5);
    ForegroundManager::UpdateForegroundTarget(this, v23, ViewIdFromWindowId, ProcessIdFromViewId, v29, 1);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v27 + 48))(v39[0], 0LL, 0LL, 1LL);
    ForegroundManager::UpdateForegroundTarget(this, v42, v44, v32, v35, 0);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v39);
LABEL_47:
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v36);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 16) + 8LL))(v10 + 16);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
}
