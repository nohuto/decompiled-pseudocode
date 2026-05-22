/*
 * XREFs of ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001D9D0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180021750 (std--_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x1800A1A90 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x1800A23B0 (-HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800A3070 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180002718 (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180023B80 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180048354 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     CoInitializeEx_0 @ 0x1800581A9 (CoInitializeEx_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A78C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800A09E8 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A147C (-AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A1520 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ForegroundManager::UpdateForegroundTarget(
        ForegroundManager *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        bool a6)
{
  unsigned int v6; // esi
  unsigned int ViewIdFromWindowId; // r15d
  unsigned int v10; // edx
  struct ViewHierarchyWithWindowManager *v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 **v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *i; // rbx
  __int64 **v19; // rbx
  __int64 *j; // rdi
  _QWORD *v21; // rbx
  unsigned int v22; // edi
  unsigned int v23; // edi
  HRESULT v24; // eax
  struct InputSiteManager *InputSiteManager; // rax
  const char *v26; // r9
  __int64 v27; // rbx
  const char *v28; // r9
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int v30[2]; // [rsp+30h] [rbp-40h] BYREF
  ViewHierarchyWithWindowManager *v31; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v32[16]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v33[2]; // [rsp+58h] [rbp-18h]
  __int64 v34; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v36; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a4;
  ViewIdFromWindowId = a3;
  if ( *((_QWORD *)this + 2) )
  {
    if ( !a4 || a6 )
      goto LABEL_16;
    v10 = a4;
    v30[0] = a4;
    LODWORD(v36) = a3;
    v11 = ISMStatics::s_viewHierarchy;
    if ( !ISMStatics::s_viewHierarchy )
    {
      v24 = CoInitializeEx_0(0LL, 0);
      if ( v24 < 0 )
        winrt::throw_hresult((unsigned int)v24);
      v31 = (ViewHierarchyWithWindowManager *)operator new(0x100uLL);
      v11 = ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager(v31);
      ISMStatics::s_viewHierarchy = v11;
      v10 = v30[0];
      a3 = v36;
    }
    v12 = *((_QWORD *)this + 22);
    v13 = *(_QWORD *)(v12
                    + 16
                    * ((0x100000001B3LL
                      * (BYTE3(v36) ^ (0x100000001B3LL
                                     * (BYTE2(v36) ^ (0x100000001B3LL
                                                    * (BYTE1(v36) ^ (0x100000001B3LL
                                                                   * ((unsigned __int8)a3 ^ 0xCBF29CE484222325uLL)))))))) & *((_QWORD *)this + 25))
                    + 8);
    v14 = (__int64 **)*((_QWORD *)this + 20);
    v15 = 0LL;
    if ( (__int64 **)v13 == v14 )
    {
LABEL_6:
      v13 = 0LL;
    }
    else
    {
      while ( a3 != *(_DWORD *)(v13 + 16) )
      {
        if ( v13 == *(_QWORD *)(v12
                              + 16
                              * ((0x100000001B3LL
                                * (BYTE3(v36) ^ (0x100000001B3LL
                                               * (BYTE2(v36) ^ (0x100000001B3LL
                                                              * (BYTE1(v36) ^ (0x100000001B3LL
                                                                             * ((unsigned __int8)a3 ^ 0xCBF29CE484222325uLL)))))))) & *((_QWORD *)this + 25))) )
          goto LABEL_6;
        v13 = *(_QWORD *)(v13 + 8);
      }
    }
    if ( v13 )
    {
      i = *(__int64 **)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                         (char *)this + 152,
                         &v31,
                         &v36,
                         0LL);
LABEL_26:
      v21 = i + 3;
    }
    else
    {
      v16 = *((_QWORD *)this + 14);
      v17 = *(_QWORD *)(v16
                      + 16
                      * ((0x100000001B3LL
                        * (HIBYTE(v30[0]) ^ (0x100000001B3LL
                                           * (BYTE2(v30[0]) ^ (0x100000001B3LL
                                                             * (BYTE1(v30[0]) ^ (0x100000001B3LL
                                                                               * ((unsigned __int8)v10 ^ 0xCBF29CE484222325uLL)))))))) & *((_QWORD *)this + 17))
                      + 8);
      if ( v17 != *((_QWORD *)this + 12) )
      {
        while ( v10 != *(_DWORD *)(v17 + 16) )
        {
          if ( v17 == *(_QWORD *)(v16
                                + 16
                                * ((0x100000001B3LL
                                  * (HIBYTE(v30[0]) ^ (0x100000001B3LL
                                                     * (BYTE2(v30[0]) ^ (0x100000001B3LL
                                                                       * (BYTE1(v30[0]) ^ (0x100000001B3LL
                                                                                         * ((unsigned __int8)v10 ^ 0xCBF29CE484222325uLL)))))))) & *((_QWORD *)this + 17))) )
            goto LABEL_9;
          v17 = *(_QWORD *)(v17 + 8);
        }
        v15 = v17;
      }
LABEL_9:
      if ( v15 )
      {
        v21 = (_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                                      (char *)this + 88,
                                      v32,
                                      v30,
                                      v15)
                       + 24LL);
      }
      else
      {
        for ( i = *v14; i != (__int64 *)v14; i = (__int64 *)*i )
        {
          if ( (i[5] & 0x20) != 0 )
          {
            if ( ForegroundManager::AreViewIdsInSameCompositeApp((ForegroundManager *)v17, v11, a3, *((_DWORD *)i + 4)) )
              goto LABEL_26;
            a3 = v36;
          }
        }
        v19 = (__int64 **)*((_QWORD *)this + 12);
        for ( j = *v19; ; j = (__int64 *)*j )
        {
          if ( j == (__int64 *)v19 )
          {
            v21 = &ForegroundManager::TargetingInfo::EmptyTarget;
            goto LABEL_15;
          }
          if ( (j[5] & 0x20) != 0
            && ForegroundManager::AreProcessIdsInSameCompositeApp(this, v11, v30[0], *((_DWORD *)j + 4)) )
          {
            break;
          }
        }
        v21 = j + 3;
      }
    }
LABEL_15:
    *(_OWORD *)v33 = *(_OWORD *)v21;
    v34 = v21[2];
    v22 = v34;
    if ( (v34 & 0xE) == 0 || (v34 & 1) != 0 )
    {
LABEL_16:
      v23 = a5;
    }
    else
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      a2 = v33[0];
      InputSiteManager::GetInputSiteFromId(InputSiteManager, v30, 1LL, v33[0]);
      v27 = *(_QWORD *)v30;
      if ( !*(_QWORD *)v30 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v26);
      InputSite::GetAttachedObject<IDelegateInformationProvider>(*(__int64 *)v30, &v36);
      if ( !v36 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v28);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v36 + 48LL))(
        v36,
        ViewIdFromWindowId,
        v6,
        v22);
      v6 = v33[1];
      v23 = HIDWORD(v33[1]);
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, a2);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v36);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, unsigned int))(**((_QWORD **)this + 2) + 24LL))(
      *((_QWORD *)this + 2),
      a2,
      ViewIdFromWindowId,
      v6,
      v23);
  }
}
