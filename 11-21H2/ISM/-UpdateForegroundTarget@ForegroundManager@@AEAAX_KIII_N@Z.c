/*
 * XREFs of ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001A1A0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180019FC0 (std--_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x18008A930 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x18008B288 (-HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x18008BF88 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001ADC0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputComponentUIHierarchy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002DFF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputComponentUIHierarchy@@@details@wil@@.c)
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18003F0E0 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     CoInitializeEx_0 @ 0x18004C295 (CoInitializeEx_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x18008910C (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180089780 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x18008A37C (-AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x18008A420 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ForegroundManager::UpdateForegroundTarget(
        ForegroundManager *this,
        unsigned __int64 a2,
        unsigned int ViewIdFromWindowId,
        unsigned int a4,
        unsigned int a5,
        bool a6)
{
  unsigned __int64 v8; // rsi
  unsigned int v10; // r11d
  unsigned int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 i; // r9
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 **v22; // rbx
  __int64 *j; // rdi
  __int64 **v24; // rbx
  _QWORD *v25; // rdi
  unsigned int v26; // edi
  unsigned int v27; // edi
  HRESULT v28; // eax
  ViewHierarchyWithWindowManager *v29; // rax
  struct InputSiteManager *InputSiteManager; // rax
  const char *v31; // r9
  struct ViewHierarchyWithWindowManager *v32; // rbx
  const char *v33; // r9
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int v35[2]; // [rsp+30h] [rbp-50h] BYREF
  struct ViewHierarchyWithWindowManager *v36; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v37[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v38[16]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v39[2]; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v42; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v43; // [rsp+C8h] [rbp+48h]

  v43 = a2;
  v8 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputComponentUIHierarchy>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputComponentUIHierarchy>::GetImpl'::`2'::impl,
    0LL);
  if ( *((_QWORD *)this + 2) )
  {
    if ( !a4 || a6 )
      goto LABEL_17;
    v10 = a4;
    v35[0] = a4;
    v11 = ViewIdFromWindowId;
    LODWORD(v42) = ViewIdFromWindowId;
    v36 = ISMStatics::s_viewHierarchy;
    if ( !ISMStatics::s_viewHierarchy )
    {
      v28 = CoInitializeEx_0(0LL, 0);
      if ( v28 < 0 )
        winrt::throw_hresult((unsigned int)v28);
      v29 = (ViewHierarchyWithWindowManager *)operator new(0x100uLL);
      v36 = ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager(v29);
      ISMStatics::s_viewHierarchy = v36;
      v10 = v35[0];
      v11 = v42;
    }
    v12 = 0xCBF29CE484222325uLL;
    v13 = 0xCBF29CE484222325uLL;
    v14 = 0LL;
    for ( i = 0LL; i < 4; v13 = 0x100000001B3LL * (*((unsigned __int8 *)&v42 + i++) ^ (unsigned __int64)v13) )
      ;
    v16 = v13 & *((_QWORD *)this + 25);
    v17 = *((_QWORD *)this + 22);
    v18 = *(_QWORD *)(v17 + 16 * v16 + 8);
    if ( v18 == *((_QWORD *)this + 20) )
      goto LABEL_49;
    while ( v11 != *(_DWORD *)(v18 + 16) )
    {
      if ( v18 == *(_QWORD *)(v17 + 16 * v16) )
        goto LABEL_8;
      v18 = *(_QWORD *)(v18 + 8);
    }
    if ( !v18 )
    {
LABEL_49:
      do
LABEL_8:
        v12 = 0x100000001B3LL * (*((unsigned __int8 *)v35 + v14++) ^ (unsigned __int64)v12);
      while ( v14 < 4 );
      v19 = v12 & *((_QWORD *)this + 17);
      v20 = *((_QWORD *)this + 14);
      v21 = *(_QWORD *)(v20 + 16 * v19 + 8);
      if ( v21 == *((_QWORD *)this + 12) )
        goto LABEL_10;
      while ( v10 != *(_DWORD *)(v21 + 16) )
      {
        if ( v21 == *(_QWORD *)(v20 + 16 * v19) )
          goto LABEL_10;
        v21 = *(_QWORD *)(v21 + 8);
      }
      if ( !v21 )
      {
LABEL_10:
        v22 = (__int64 **)*((_QWORD *)this + 20);
        for ( j = *v22; j != (__int64 *)v22; j = (__int64 *)*j )
        {
          if ( (j[5] & 0x20) != 0 )
          {
            if ( ForegroundManager::AreViewIdsInSameCompositeApp((ForegroundManager *)v21, v36, v11, *((_DWORD *)j + 4)) )
              goto LABEL_33;
            v11 = v42;
          }
        }
        v24 = (__int64 **)*((_QWORD *)this + 12);
        for ( j = *v24; j != (__int64 *)v24; j = (__int64 *)*j )
        {
          if ( (j[5] & 0x20) != 0
            && ForegroundManager::AreProcessIdsInSameCompositeApp(this, v36, v35[0], *((_DWORD *)j + 4)) )
          {
            goto LABEL_33;
          }
        }
        v25 = &ForegroundManager::TargetingInfo::EmptyTarget;
      }
      else
      {
        j = *(__int64 **)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                           (char *)this + 88,
                           v38,
                           v35);
LABEL_33:
        v25 = j + 3;
      }
      v8 = v43;
    }
    else
    {
      v25 = (_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                                    (char *)this + 152,
                                    v37,
                                    &v42)
                     + 24LL);
    }
    *(_OWORD *)v39 = *(_OWORD *)v25;
    v40 = v25[2];
    v26 = v40;
    if ( (v40 & 0xE) == 0 || (v40 & 1) != 0 )
    {
LABEL_17:
      v27 = a5;
    }
    else
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v8 = v39[0];
      InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64 *)&v36, 1, v39[0]);
      v32 = v36;
      if ( !v36 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v31);
      InputSite::GetAttachedObject<IDelegateInformationProvider>(v36, &v42);
      if ( !v42 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v33);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v42 + 48LL))(
        v42,
        ViewIdFromWindowId,
        a4,
        v26);
      a4 = v39[1];
      v27 = HIDWORD(v39[1]);
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v8);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v42);
      (*(void (__fastcall **)(struct ViewHierarchyWithWindowManager *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, unsigned int))(**((_QWORD **)this + 2) + 24LL))(
      *((_QWORD *)this + 2),
      v8,
      ViewIdFromWindowId,
      a4,
      v27);
  }
}
