/*
 * XREFs of ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0
 * Callers:
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180151170 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180151260 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 * Callees:
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180002E9C (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DelegationOn@@YA_NI@Z @ 0x1800031C8 (-DelegationOn@@YA_NI@Z.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18000F5C0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x1800231A0 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x1800233A8 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180024A90 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIFocusInputTarget@@XZ @ 0x18005AA54 (--B-$ComPtrRef@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAU.c)
 *     ?InputAppDelegation@@YA_NI@Z @ 0x18005EB80 (-InputAppDelegation@@YA_NI@Z.c)
 *     ?IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@IIIII@Z @ 0x18005EB90 (-IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@III.c)
 *     ?SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z @ 0x18005FE54 (-SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z.c)
 *     ?SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z @ 0x18005FF6C (-SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_25385272@@@details@wil@@QEAA_NXZ @ 0x18005FFF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_25385272@@@details@wil@@QE.c)
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180068090 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800A49A0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??1?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ADE0C (--1-$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$GetAttachedObject@UIComponentSiteInputObjectProxy@@VBamoComponentSiteInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoComponentSiteInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800B28B8 (--$GetAttachedObject@UIComponentSiteInputObjectProxy@@VBamoComponentSiteInputObjectProxy@@@Input.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x1800B295C (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800B3010 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ??1?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B34B8 (--1-$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800B3B50 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B438C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B44D4 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B48C0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800B4AB8 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1800B68C0 (-erase@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_compare@IU-$hash@I@s.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B7B54 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800B7B54.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ForegroundManager::SetInputDelegation(
        ForegroundManager *this,
        struct InputSite *a2,
        unsigned int a3,
        const char *a4,
        unsigned int a5)
{
  unsigned int v5; // r14d
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // r12
  __int64 v11; // rbx
  __int64 WindowIdFromViewId; // rdi
  char IsEnabled; // al
  unsigned int v14; // r15d
  unsigned int ThreadIdFromViewId; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  float *v18; // r9
  __int64 v19; // rcx
  ForegroundManager *v20; // rcx
  __int64 v21; // rax
  int (__fastcall *v22)(_QWORD, __int64 *); // rdi
  __int64 *v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool IsDelegationSourceInForeground; // di
  __int64 v28; // rsi
  int (__fastcall *v29)(__int64, __int64 *); // rdi
  __int64 *v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  char IsProcessIDInSameCompositeAppAsView; // al
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v38; // rbx
  const char *v39; // r9
  __int64 v40; // rcx
  const char *v41; // r9
  __int64 v42; // r11
  unsigned int v43; // eax
  unsigned int v44; // [rsp+28h] [rbp-91h]
  unsigned int v45; // [rsp+28h] [rbp-91h]
  unsigned int v46; // [rsp+28h] [rbp-91h]
  bool v47; // [rsp+49h] [rbp-70h]
  DWORD dwProcessId; // [rsp+4Ch] [rbp-6Dh] BYREF
  unsigned int v49; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-65h] BYREF
  unsigned int ViewIdFromWindowId; // [rsp+58h] [rbp-61h]
  unsigned int WindowThreadProcessId; // [rsp+5Ch] [rbp-5Dh]
  unsigned int v53; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v54; // [rsp+68h] [rbp-51h] BYREF
  __int64 v55; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v56; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v57[2]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v58; // [rsp+88h] [rbp-31h] BYREF
  __int64 v59; // [rsp+90h] [rbp-29h] BYREF
  __int64 v60; // [rsp+98h] [rbp-21h] BYREF
  __int64 v61[2]; // [rsp+A0h] [rbp-19h] BYREF
  unsigned __int64 v62; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-1h]
  __int64 v64; // [rsp+C8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]
  struct InputSite *v66; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v67; // [rsp+128h] [rbp+6Fh]

  v67 = a3;
  v66 = a2;
  v5 = (unsigned int)a4;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  if ( !(_DWORD)a4 && !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  InputSite::GetAttachedObject<IComponentSiteInputObjectProxy,BamoComponentSiteInputObjectProxy>((__int64)a2, &v60);
  InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>((__int64)a2, &v59);
  v11 = v60;
  if ( v60 )
  {
    ViewIdFromWindowId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v60 + 8) + 24LL))(v60 + 8);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
    v55 = WindowIdFromViewId;
    goto LABEL_11;
  }
  if ( v59 )
  {
    WindowIdFromViewId = BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v59 + 8));
    v55 = WindowIdFromViewId;
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, WindowIdFromViewId);
LABEL_11:
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_25385272>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Bugfix_25385272>::GetImpl'::`2'::impl);
    v14 = a5;
    if ( IsEnabled )
      InputTraceLogging::ForegroundManagerServer::SetInputDelegation(a3, v5, WindowIdFromViewId, ViewIdFromWindowId, a5);
    dwProcessId = 0;
    WindowThreadProcessId = 0;
    ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v58, WindowIdFromViewId);
    if ( v58 )
    {
      dwProcessId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v58 + 8) + 72LL))(v58 + 8);
      ThreadIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v58 + 8) + 88LL))(v58 + 8);
    }
    else
    {
      if ( IsEdition(8778LL) )
      {
        if ( !ViewIdFromWindowId )
        {
          if ( WindowIdFromViewId )
          {
            dwProcessId = 0;
            WindowThreadProcessId = GetWindowThreadProcessId((HWND)(int)WindowIdFromViewId, &dwProcessId);
          }
LABEL_23:
          v49 = *((_DWORD *)this + 56);
          v56 = *((_DWORD *)this + 57);
          v62 = *((_QWORD *)this + 27);
          v50 = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v62);
          if ( (v14 & 0x10) != 0 && !InputAppDelegation(v14) )
          {
            v17 = v5;
            if ( !v5 )
              v17 = a3;
            v53 = v17;
            if ( DelegationOn(v14) )
            {
              *(_QWORD *)&v63 = WindowIdFromViewId;
              *((_QWORD *)&v63 + 1) = __PAIR64__(WindowThreadProcessId, dwProcessId);
              v64 = v14;
              v19 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                                 v18,
                                 (__int64)v61,
                                 (unsigned __int8 *)&v53);
              *(_OWORD *)(v19 + 24) = v63;
              *(_QWORD *)(v19 + 40) = v64;
            }
            else
            {
              std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::erase(
                v18,
                &v53);
            }
          }
          v47 = 0;
          if ( IsEdition(8778LL) )
          {
            if ( ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, a3, v5, v49, v50, v14) )
            {
LABEL_64:
              WindowIdFromViewId = v55;
              goto LABEL_65;
            }
            if ( !InputAppDelegation(v14) && DelegationOn(v14) )
            {
LABEL_78:
              wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v58);
              goto LABEL_81;
            }
            v61[0] = 0LL;
            v21 = *((_QWORD *)this + 2);
            *(_QWORD *)v57 = v21;
            if ( !v21 )
              goto LABEL_52;
            v22 = *(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v21 + 32LL);
            v54 = v61;
            v23 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IFocusInputTarget>>::operator IFocusInputTarget * *(&v54);
            if ( v22(*(_QWORD *)v57, v23) < 0 )
              goto LABEL_52;
            v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v61[0] + 80LL))(v61[0], &v53);
            if ( v24 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x1E5,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                (const char *)(unsigned int)v24,
                v45);
            if ( DelegationOn(v53) )
            {
              if ( DelegationOn(v14) )
              {
                v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v61[0] + 32LL))(v61[0], &v49);
                if ( v25 < 0 )
                  wil::details::in1diag3::FailFast_Hr(
                    retaddr,
                    (void *)0x1EA,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                    (const char *)(unsigned int)v25,
                    v45);
                v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v61[0] + 48LL))(v61[0], &v50);
                if ( v26 < 0 )
                  wil::details::in1diag3::FailFast_Hr(
                    retaddr,
                    (void *)0x1EB,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                    (const char *)(unsigned int)v26,
                    v45);
                IsDelegationSourceInForeground = ForegroundManager::IsDelegationSourceInForeground(
                                                   this,
                                                   ViewHierarchy,
                                                   a3,
                                                   v5,
                                                   v49,
                                                   v50,
                                                   v53);
              }
              else
              {
                v54 = 0LL;
                v28 = *((_QWORD *)this + 2);
                v29 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 40LL);
                *(_QWORD *)v57 = &v54;
                v30 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IFocusInputTarget>>::operator IFocusInputTarget * *((__int64 **)v57);
                if ( v29(v28, v30) < 0 )
                {
                  IsDelegationSourceInForeground = 0;
                }
                else
                {
                  v31 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v54 + 80))(v54, v57);
                  if ( v31 < 0 )
                    wil::details::in1diag3::FailFast_Hr(
                      retaddr,
                      (void *)0x1F5,
                      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                      (const char *)(unsigned int)v31,
                      v45);
                  v32 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v54 + 32))(v54, &v49);
                  if ( v32 < 0 )
                    wil::details::in1diag3::FailFast_Hr(
                      retaddr,
                      (void *)0x1F6,
                      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                      (const char *)(unsigned int)v32,
                      v45);
                  v33 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v54 + 48))(v54, &v50);
                  if ( v33 < 0 )
                    wil::details::in1diag3::FailFast_Hr(
                      retaddr,
                      (void *)0x1F7,
                      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                      (const char *)(unsigned int)v33,
                      v45);
                  IsDelegationSourceInForeground = ForegroundManager::IsDelegationSourceInForeground(
                                                     this,
                                                     ViewHierarchy,
                                                     v67,
                                                     v5,
                                                     v49,
                                                     v50,
                                                     v57[0]);
                  if ( IsDelegationSourceInForeground )
                  {
                    v34 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v54 + 40))(v54, &v56);
                    if ( v34 < 0 )
                      wil::details::in1diag3::FailFast_Hr(
                        retaddr,
                        (void *)0x1FE,
                        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                        (const char *)(unsigned int)v34,
                        v46);
                    v35 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *))(*v54 + 64))(v54, &v62);
                    if ( v35 < 0 )
                      wil::details::in1diag3::FailFast_Hr(
                        retaddr,
                        (void *)0x1FF,
                        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                        (const char *)(unsigned int)v35,
                        v46);
                    v47 = 1;
                  }
                }
                Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>((__int64 *)&v54);
              }
            }
            else
            {
LABEL_52:
              IsDelegationSourceInForeground = 0;
            }
            Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(v61);
          }
          else
          {
            if ( v5 )
            {
              if ( v5 == v50 )
                goto LABEL_65;
            }
            else if ( a3 == v49 )
            {
LABEL_65:
              if ( v11 )
              {
                InputSiteManager = ISMStatics::GetInputSiteManager();
                v38 = *(_QWORD *)InputSiteManager::GetInputSiteFromId(
                                   (__int64)InputSiteManager,
                                   (__int64)&v55,
                                   1,
                                   WindowIdFromViewId);
                v40 = v55;
                if ( v55 )
                {
                  v55 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                }
                if ( !v38 )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x221,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                    v39);
              }
              else
              {
                v38 = (__int64)v66;
              }
              InputSite::GetAttachedObject<IDelegateInformationProvider>(v38, (__int64 *)&v66);
              if ( !v66 )
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x225,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                  v41);
              if ( DelegationOn(v14) )
              {
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v42 + 48LL))(v42, v50, v49, v14);
                ForegroundManager::UpdateForegroundTarget(
                  this,
                  WindowIdFromViewId,
                  ViewIdFromWindowId,
                  dwProcessId,
                  WindowThreadProcessId,
                  1);
              }
              else
              {
                if ( !IsEdition(8778LL) )
                  (*(void (__fastcall **)(struct InputSite *, _QWORD, _QWORD, __int64))(*(_QWORD *)v66 + 48LL))(
                    v66,
                    0LL,
                    0LL,
                    1LL);
                ForegroundManager::UpdateForegroundTarget(this, v62, v50, v49, v56, v47);
              }
              Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v66);
              goto LABEL_78;
            }
            if ( (v14 & 0x20) == 0 )
              goto LABEL_78;
            if ( v5 )
              IsProcessIDInSameCompositeAppAsView = ForegroundManager::AreViewIdsInSameCompositeApp(
                                                      v20,
                                                      ViewHierarchy,
                                                      v50,
                                                      v5);
            else
              IsProcessIDInSameCompositeAppAsView = ForegroundManager::IsProcessIDInSameCompositeAppAsView(
                                                      this,
                                                      ViewHierarchy,
                                                      v50,
                                                      a3);
            IsDelegationSourceInForeground = IsProcessIDInSameCompositeAppAsView;
          }
          if ( IsDelegationSourceInForeground )
            goto LABEL_64;
          goto LABEL_78;
        }
        v16 = ViewIdFromWindowId;
      }
      else
      {
        v16 = ViewIdFromWindowId;
      }
      dwProcessId = ViewHelper::GetProcessIdFromViewId(ViewHierarchy, v16);
      ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
    }
    WindowThreadProcessId = ThreadIdFromViewId;
    goto LABEL_23;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_25385272>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Bugfix_25385272>::GetImpl'::`2'::impl) )
  {
    v43 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x182,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)v43,
      v44);
  }
  InputTraceLogging::ForegroundManagerServer::SetInputDelegationRejected(a3, v5, a5);
LABEL_81:
  Microsoft::WRL::ComPtr<VirtualTouchpadControllerProxy>::~ComPtr<VirtualTouchpadControllerProxy>(&v59);
  Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>(&v60);
}
