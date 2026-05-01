/*
 * XREFs of ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180477F4C
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18047045C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1804773C0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18011F150 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180157D9C (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016400C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ?close@?$test_data_control@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x18022F79C (-close@-$test_data_control@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18022FC80 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z @ 0x18045DCAC (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18046A010 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046EBEC (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046ECA4 (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@t.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046ED5C (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@det.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046EE14 (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@det.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x18047DAD0 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DC04 (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DC60 (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@AE.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DCBC (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@t.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DD18 (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@t.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v5; // esi
  __int64 *v6; // r15
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  KeyboardHosting::TabTipAdapterPolicy *v11; // rbx
  int ShellState; // eax
  __int64 v13; // rdx
  char ApplicationViewIdIfExists; // bl
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  unsigned __int8 IsViewShown; // al
  std::_Ref_count_base *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // ebx
  __int64 *v28; // rax
  volatile signed __int32 *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  std::_Ref_count_base *v33; // rdi
  __int64 *v34; // rax
  volatile signed __int32 *v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // ebx
  __int64 *v39; // rax
  volatile signed __int32 *v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rbx
  std::_Ref_count_base *v44; // rdi
  __int64 *v45; // rax
  volatile signed __int32 *v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // ebx
  __int64 *v50; // rax
  volatile signed __int32 *v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rcx
  std::_Ref_count_base *v54; // rdi
  __int64 *v55; // rax
  volatile signed __int32 *v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdi
  int v60; // ebx
  __int64 *v61; // rax
  volatile signed __int32 *v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rcx
  int v66; // [rsp+28h] [rbp-E0h]
  unsigned int v67[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v69; // [rsp+58h] [rbp-B0h] BYREF
  std::_Ref_count_base *v70; // [rsp+60h] [rbp-A8h]
  std::_Ref_count_base *v71; // [rsp+68h] [rbp-A0h]
  __int128 v72; // [rsp+70h] [rbp-98h] BYREF
  std::_Ref_count_base *v73[2]; // [rsp+80h] [rbp-88h] BYREF
  std::_Ref_count_base *v74[2]; // [rsp+90h] [rbp-78h] BYREF
  std::_Ref_count_base *v75[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-58h] BYREF
  std::_Ref_count_base *v77; // [rsp+B8h] [rbp-50h]
  __int64 v78; // [rsp+C0h] [rbp-48h] BYREF
  std::_Ref_count_base *v79; // [rsp+C8h] [rbp-40h]
  __int64 v80; // [rsp+D0h] [rbp-38h] BYREF
  std::_Ref_count_base *v81; // [rsp+D8h] [rbp-30h]
  int v82; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v83; // [rsp+E8h] [rbp-20h] BYREF
  std::_Ref_count_base *v84; // [rsp+F0h] [rbp-18h]
  _DWORD *v85; // [rsp+F8h] [rbp-10h] BYREF
  std::_Ref_count_base *v86; // [rsp+100h] [rbp-8h]
  __int64 v87; // [rsp+108h] [rbp+0h] BYREF
  std::_Ref_count_base *v88; // [rsp+110h] [rbp+8h]
  _DWORD *v89; // [rsp+118h] [rbp+10h] BYREF
  std::_Ref_count_base *v90; // [rsp+120h] [rbp+18h]
  __int64 v91; // [rsp+128h] [rbp+20h] BYREF
  std::_Ref_count_base *v92; // [rsp+130h] [rbp+28h]
  _DWORD *v93; // [rsp+138h] [rbp+30h] BYREF
  std::_Ref_count_base *v94; // [rsp+140h] [rbp+38h]
  __int64 v95; // [rsp+148h] [rbp+40h] BYREF
  std::_Ref_count_base *v96; // [rsp+150h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]
  char v98; // [rsp+198h] [rbp+90h] BYREF

  v5 = a3;
  v6 = (__int64 *)a2;
  if ( !(_DWORD)a3 )
  {
    v8 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP(this);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAF0,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
  }
  LOBYTE(a2) = 1;
  v9 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, a2, a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_96;
  }
  LOBYTE(v67[0]) = 0;
  v98 = 0;
  v68 = 0LL;
  v11 = (KeyboardHosting::TabTipAdapterPolicy *)*((_QWORD *)this + 14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v68);
  ShellState = KeyboardHosting::TabTipAdapterPolicy::GetShellState(v11, v5, v67, (__int64)&v98, &v82, &v68);
  v10 = ShellState;
  if ( ShellState < 0 )
  {
    v13 = 2810LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ShellState);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v68);
    goto LABEL_96;
  }
  v67[1] = 0;
  ApplicationViewIdIfExists = TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(
                                *((RTL_SRWLOCK **)this + 8),
                                v5,
                                &v67[1]);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v15,
    v16);
  if ( ApplicationViewIdIfExists )
  {
    IsViewShown = KeyboardHosting::TabTipAdapterPolicy::IsViewShown(
                    *((KeyboardHosting::TabTipAdapterPolicy **)this + 14),
                    v67[1]);
    TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference(
      *((TouchKeyboardExperienceManager **)this + 8),
      v67[1],
      IsViewShown);
  }
  LOBYTE(v66) = v98;
  LOBYTE(v17) = v67[0];
  ShellState = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**((_QWORD **)this + 3) + 544LL))(
                 *((_QWORD *)this + 3),
                 *v6,
                 a4,
                 v17,
                 v66,
                 1,
                 v5);
  v10 = ShellState;
  if ( ShellState < 0 )
  {
    v13 = 2844LL;
    goto LABEL_8;
  }
  v72 = 0LL;
  v19 = (std::_Ref_count_base *)operator new(0xD8uLL);
  v71 = v19;
  *(_OWORD *)v19 = 0LL;
  *((_DWORD *)v19 + 2) = 1;
  *((_DWORD *)v19 + 3) = 1;
  *(_QWORD *)v19 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
  tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>(
    (__int64)v19 + 16,
    0LL,
    0LL);
  v69 = (_DWORD *)((char *)v19 + 16);
  v70 = v19;
  std::shared_ptr<KBViewInfo>::operator=(&v72, (__int64 *)&v69);
  if ( v70 )
    std::_Ref_count_base::_Decref(v70);
  v22 = 48LL;
  if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)&v72) )
  {
    v23 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::ensure_data(&v72);
    v24 = (volatile signed __int32 *)v23[1];
    if ( v24 )
    {
      _InterlockedAdd(v24 + 2, 1u);
      v24 = (volatile signed __int32 *)v23[1];
    }
    v25 = *v23;
    v83 = v25;
    v84 = (std::_Ref_count_base *)v24;
    tip::details::test_common_data<1>::begin_update(v25 + 8);
    v26 = v25 + 192;
    if ( !v25 )
      v26 = 48LL;
    v27 = *(_DWORD *)v26;
    tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v83);
    if ( v84 )
      std::_Ref_count_base::_Decref(v84);
    if ( v27 == 6 )
    {
      v28 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::ensure_data(&v72);
      v29 = (volatile signed __int32 *)v28[1];
      if ( v29 )
      {
        _InterlockedAdd(v29 + 2, 1u);
        v29 = (volatile signed __int32 *)v28[1];
      }
      v30 = *v28;
      v76 = v30;
      v77 = (std::_Ref_count_base *)v29;
      tip::details::test_common_data<1>::begin_update(v30 + 8);
      v31 = v30 + 152;
      if ( !v30 )
        v31 = 8LL;
      *(_DWORD *)v31 = v67[1];
      if ( v30 )
        v32 = v30 + 192;
      else
        v32 = 48LL;
      *(_DWORD *)v32 = 7;
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v76);
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v76);
      if ( v77 )
        std::_Ref_count_base::_Decref(v77);
    }
  }
  if ( *((_QWORD *)&v72 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v72 + 1));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::GetImpl'::`2'::impl,
    1u,
    v20,
    v21);
  *(_OWORD *)v73 = 0LL;
  v33 = (std::_Ref_count_base *)operator new(0xD8uLL);
  v71 = v33;
  *(_OWORD *)v33 = 0LL;
  *((_DWORD *)v33 + 2) = 1;
  *((_DWORD *)v33 + 3) = 1;
  *(_QWORD *)v33 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
  tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>(
    (__int64)v33 + 16,
    0LL,
    0LL);
  v85 = (_DWORD *)((char *)v33 + 16);
  v86 = v33;
  std::shared_ptr<KBViewInfo>::operator=(v73, (__int64 *)&v85);
  if ( v86 )
    std::_Ref_count_base::_Decref(v86);
  if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v73) )
  {
    v34 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::ensure_data(v73);
    v35 = (volatile signed __int32 *)v34[1];
    if ( v35 )
    {
      _InterlockedAdd(v35 + 2, 1u);
      v35 = (volatile signed __int32 *)v34[1];
    }
    v36 = *v34;
    v87 = v36;
    v88 = (std::_Ref_count_base *)v35;
    tip::details::test_common_data<1>::begin_update(v36 + 8);
    v37 = v36 + 192;
    if ( !v36 )
      v37 = 48LL;
    v38 = *(_DWORD *)v37;
    tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v87);
    if ( v88 )
      std::_Ref_count_base::_Decref(v88);
    if ( v38 == 6 )
    {
      v39 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::ensure_data(v73);
      v40 = (volatile signed __int32 *)v39[1];
      if ( v40 )
      {
        _InterlockedAdd(v40 + 2, 1u);
        v40 = (volatile signed __int32 *)v39[1];
      }
      v41 = *v39;
      v78 = v41;
      v79 = (std::_Ref_count_base *)v40;
      tip::details::test_common_data<1>::begin_update(v41 + 8);
      v42 = v41 + 152;
      if ( !v41 )
        v42 = 8LL;
      *(_DWORD *)v42 = v67[1];
      if ( v41 )
        v43 = v41 + 192;
      else
        v43 = 48LL;
      *(_DWORD *)v43 = 7;
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v78);
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v78);
      if ( v79 )
        std::_Ref_count_base::_Decref(v79);
    }
  }
  if ( v73[1] )
    std::_Ref_count_base::_Decref(v73[1]);
  *(_OWORD *)v74 = 0LL;
  v44 = (std::_Ref_count_base *)operator new(0xD8uLL);
  v71 = v44;
  *(_OWORD *)v44 = 0LL;
  *((_DWORD *)v44 + 2) = 1;
  *((_DWORD *)v44 + 3) = 1;
  *(_QWORD *)v44 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
  tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>(
    (__int64)v44 + 16,
    0LL,
    0LL);
  v89 = (_DWORD *)((char *)v44 + 16);
  v90 = v44;
  std::shared_ptr<KBViewInfo>::operator=(v74, (__int64 *)&v89);
  if ( v90 )
    std::_Ref_count_base::_Decref(v90);
  if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v74) )
  {
    v45 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::ensure_data(v74);
    v46 = (volatile signed __int32 *)v45[1];
    if ( v46 )
    {
      _InterlockedAdd(v46 + 2, 1u);
      v46 = (volatile signed __int32 *)v45[1];
    }
    v47 = *v45;
    v91 = v47;
    v92 = (std::_Ref_count_base *)v46;
    tip::details::test_common_data<1>::begin_update(v47 + 8);
    v48 = v47 + 192;
    if ( !v47 )
      v48 = 48LL;
    v49 = *(_DWORD *)v48;
    tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v91);
    if ( v92 )
      std::_Ref_count_base::_Decref(v92);
    if ( v49 == 6 )
    {
      v50 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::ensure_data(v74);
      v51 = (volatile signed __int32 *)v50[1];
      if ( v51 )
      {
        _InterlockedAdd(v51 + 2, 1u);
        v51 = (volatile signed __int32 *)v50[1];
      }
      v52 = *v50;
      v80 = v52;
      v81 = (std::_Ref_count_base *)v51;
      tip::details::test_common_data<1>::begin_update(v52 + 8);
      v53 = v52 + 152;
      if ( !v52 )
        v53 = 8LL;
      *(_DWORD *)v53 = v67[1];
      if ( v52 )
        v22 = v52 + 192;
      *(_DWORD *)v22 = 7;
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v80);
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v80);
      if ( v81 )
        std::_Ref_count_base::_Decref(v81);
    }
  }
  if ( v74[1] )
    std::_Ref_count_base::_Decref(v74[1]);
  *(_OWORD *)v75 = 0LL;
  v54 = (std::_Ref_count_base *)operator new(0xD8uLL);
  v71 = v54;
  *(_OWORD *)v54 = 0LL;
  *((_DWORD *)v54 + 2) = 1;
  *((_DWORD *)v54 + 3) = 1;
  *(_QWORD *)v54 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
  tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>(
    (__int64)v54 + 16,
    0LL,
    0LL);
  v93 = (_DWORD *)((char *)v54 + 16);
  v94 = v54;
  std::shared_ptr<KBViewInfo>::operator=(v75, (__int64 *)&v93);
  if ( v94 )
    std::_Ref_count_base::_Decref(v94);
  if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v75) )
  {
    v55 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>::ensure_data(v75);
    v56 = (volatile signed __int32 *)v55[1];
    if ( v56 )
    {
      _InterlockedAdd(v56 + 2, 1u);
      v56 = (volatile signed __int32 *)v55[1];
    }
    v57 = *v55;
    v95 = v57;
    v96 = (std::_Ref_count_base *)v56;
    tip::details::test_common_data<1>::begin_update(v57 + 8);
    v58 = v57 + 196;
    v59 = 52LL;
    if ( !v57 )
      v58 = 52LL;
    v60 = *(_DWORD *)v58;
    tip::test_data_control<_tip_TouchGestureTest>::close(&v95);
    if ( v96 )
      std::_Ref_count_base::_Decref(v96);
    if ( !v60 )
    {
      v61 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>::ensure_data(v75);
      v62 = (volatile signed __int32 *)v61[1];
      if ( v62 )
      {
        _InterlockedAdd(v62 + 2, 1u);
        v62 = (volatile signed __int32 *)v61[1];
      }
      v63 = *v61;
      v69 = (_DWORD *)v63;
      v70 = (std::_Ref_count_base *)v62;
      tip::details::test_common_data<1>::begin_update(v63 + 8);
      v64 = v63 + 152;
      if ( !v63 )
        v64 = 8LL;
      *(_DWORD *)v64 = v67[1];
      if ( v63 )
        v59 = v63 + 196;
      *(_DWORD *)v59 = 7;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v69);
      tip::test_data_control<_tip_TouchGestureTest>::close(&v69);
      if ( v70 )
        std::_Ref_count_base::_Decref(v70);
    }
  }
  if ( v75[1] )
    std::_Ref_count_base::_Decref(v75[1]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v68);
  v10 = 0;
LABEL_96:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v6);
  return v10;
}
