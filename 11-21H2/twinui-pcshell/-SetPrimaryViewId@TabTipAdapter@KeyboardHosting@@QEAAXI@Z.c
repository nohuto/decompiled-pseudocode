/*
 * XREFs of ?SetPrimaryViewId@TabTipAdapter@KeyboardHosting@@QEAAXI@Z @ 0x180479BC8
 * Callers:
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x18022F1C6 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016400C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ?close@?$test_data_control@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x18022F79C (-close@-$test_data_control@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046EBEC (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046ECA4 (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@t.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046ED5C (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@det.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046EE14 (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@det.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x18047DAD0 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DC04 (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DC60 (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@AE.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DCBC (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@t.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DD18 (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@t.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall KeyboardHosting::TabTipAdapter::SetPrimaryViewId(KeyboardHosting::TabTipAdapter *this, int a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  _DWORD *v21; // [rsp+20h] [rbp-79h] BYREF
  std::_Ref_count_base *v22; // [rsp+28h] [rbp-71h]
  std::_Ref_count_base *v23[2]; // [rsp+30h] [rbp-69h] BYREF
  std::_Ref_count_base *v24[2]; // [rsp+40h] [rbp-59h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+50h] [rbp-49h] BYREF
  std::_Ref_count_base *v26[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v27; // [rsp+70h] [rbp-29h] BYREF
  std::_Ref_count_base *v28; // [rsp+78h] [rbp-21h]
  _DWORD *v29; // [rsp+80h] [rbp-19h] BYREF
  std::_Ref_count_base *v30; // [rsp+88h] [rbp-11h]
  __int64 v31; // [rsp+90h] [rbp-9h] BYREF
  std::_Ref_count_base *v32; // [rsp+98h] [rbp-1h]
  _DWORD *v33; // [rsp+A0h] [rbp+7h] BYREF
  std::_Ref_count_base *v34; // [rsp+A8h] [rbp+Fh]
  __int64 v35; // [rsp+B0h] [rbp+17h] BYREF
  std::_Ref_count_base *v36; // [rsp+B8h] [rbp+1Fh]
  _DWORD *v37; // [rsp+C0h] [rbp+27h] BYREF
  std::_Ref_count_base *v38; // [rsp+C8h] [rbp+2Fh]
  std::_Ref_count_base *v39; // [rsp+100h] [rbp+67h]
  std::_Ref_count_base *v40; // [rsp+100h] [rbp+67h]
  std::_Ref_count_base *v41; // [rsp+100h] [rbp+67h]
  std::_Ref_count_base *v42; // [rsp+100h] [rbp+67h]

  if ( *((_DWORD *)this + 132) != a2 )
  {
    *((_DWORD *)this + 132) = a2;
    *(_DWORD *)(*((_QWORD *)this + 14) + 612LL) = a2;
    *(_OWORD *)v23 = 0LL;
    v39 = (std::_Ref_count_base *)operator new(0xD8uLL);
    *(_OWORD *)v39 = 0LL;
    *((_DWORD *)v39 + 2) = 1;
    *((_DWORD *)v39 + 3) = 1;
    *(_QWORD *)v39 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
    tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>(
      (__int64)v39 + 16,
      0LL,
      0LL);
    v21 = (_DWORD *)((char *)v39 + 16);
    v22 = v39;
    std::shared_ptr<KBViewInfo>::operator=(v23, (__int64 *)&v21);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v23) )
    {
      v5 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::ensure_data(v23);
      v6 = (volatile signed __int32 *)v5[1];
      if ( v6 )
      {
        _InterlockedAdd(v6 + 2, 1u);
        v6 = (volatile signed __int32 *)v5[1];
      }
      v7 = *v5;
      v27 = v7;
      v28 = (std::_Ref_count_base *)v6;
      tip::details::test_common_data<1>::begin_update(v7 + 8);
      v8 = v7 + 152;
      if ( !v7 )
        v8 = 8LL;
      *(_DWORD *)v8 = a2;
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v27);
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
    }
    if ( v23[1] )
      std::_Ref_count_base::_Decref(v23[1]);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::GetImpl'::`2'::impl,
      1u,
      v3,
      v4);
    *(_OWORD *)v24 = 0LL;
    v40 = (std::_Ref_count_base *)operator new(0xD8uLL);
    *(_OWORD *)v40 = 0LL;
    *((_DWORD *)v40 + 2) = 1;
    *((_DWORD *)v40 + 3) = 1;
    *(_QWORD *)v40 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
    tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>(
      (__int64)v40 + 16,
      0LL,
      0LL);
    v29 = (_DWORD *)((char *)v40 + 16);
    v30 = v40;
    std::shared_ptr<KBViewInfo>::operator=(v24, (__int64 *)&v29);
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v24) )
    {
      v9 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::ensure_data(v24);
      v10 = (volatile signed __int32 *)v9[1];
      if ( v10 )
      {
        _InterlockedAdd(v10 + 2, 1u);
        v10 = (volatile signed __int32 *)v9[1];
      }
      v11 = *v9;
      v31 = v11;
      v32 = (std::_Ref_count_base *)v10;
      tip::details::test_common_data<1>::begin_update(v11 + 8);
      v12 = v11 + 152;
      if ( !v11 )
        v12 = 8LL;
      *(_DWORD *)v12 = a2;
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v31);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
    }
    if ( v24[1] )
      std::_Ref_count_base::_Decref(v24[1]);
    *(_OWORD *)v25 = 0LL;
    v41 = (std::_Ref_count_base *)operator new(0xD8uLL);
    *(_OWORD *)v41 = 0LL;
    *((_DWORD *)v41 + 2) = 1;
    *((_DWORD *)v41 + 3) = 1;
    *(_QWORD *)v41 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
    tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>(
      (__int64)v41 + 16,
      0LL,
      0LL);
    v33 = (_DWORD *)((char *)v41 + 16);
    v34 = v41;
    std::shared_ptr<KBViewInfo>::operator=(v25, (__int64 *)&v33);
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v25) )
    {
      v13 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::ensure_data(v25);
      v14 = (volatile signed __int32 *)v13[1];
      if ( v14 )
      {
        _InterlockedAdd(v14 + 2, 1u);
        v14 = (volatile signed __int32 *)v13[1];
      }
      v15 = *v13;
      v35 = v15;
      v36 = (std::_Ref_count_base *)v14;
      tip::details::test_common_data<1>::begin_update(v15 + 8);
      v16 = v15 + 152;
      if ( !v15 )
        v16 = 8LL;
      *(_DWORD *)v16 = a2;
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v35);
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
    }
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
    *(_OWORD *)v26 = 0LL;
    v42 = (std::_Ref_count_base *)operator new(0xD8uLL);
    *(_OWORD *)v42 = 0LL;
    *((_DWORD *)v42 + 2) = 1;
    *((_DWORD *)v42 + 3) = 1;
    *(_QWORD *)v42 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
    tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>(
      (__int64)v42 + 16,
      0LL,
      0LL);
    v37 = (_DWORD *)((char *)v42 + 16);
    v38 = v42;
    std::shared_ptr<KBViewInfo>::operator=(v26, (__int64 *)&v37);
    if ( v38 )
      std::_Ref_count_base::_Decref(v38);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v26) )
    {
      v17 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>::ensure_data(v26);
      v18 = (volatile signed __int32 *)v17[1];
      if ( v18 )
      {
        _InterlockedAdd(v18 + 2, 1u);
        v18 = (volatile signed __int32 *)v17[1];
      }
      v19 = *v17;
      v21 = (_DWORD *)v19;
      v22 = (std::_Ref_count_base *)v18;
      tip::details::test_common_data<1>::begin_update(v19 + 8);
      v20 = v19 + 152;
      if ( !v19 )
        v20 = 8LL;
      *(_DWORD *)v20 = a2;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v21);
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
    }
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
  }
}
