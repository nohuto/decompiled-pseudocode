/*
 * XREFs of ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1806501E0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationCompletedEventArgs___lambda_b6ea5fa9d7f8330af75e8a61a2f4c6ef___::Invoke @ 0x180650A50 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180650A50.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18064FCBC (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x180650CE0 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGETest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180651C78 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGETest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?TouchSwipeFinished@TouchGestureTelemetry@@SAXXZ @ 0x1806522E0 (-TouchSwipeFinished@TouchGestureTelemetry@@SAXXZ.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x1806523E8 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x180652498 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureProcessor::FinishSwipe(
        TouchGestureProcessor *this,
        const struct winrt::Windows::Foundation::Point *a2)
{
  __int64 v4; // rcx
  int v5; // r14d
  std::_Ref_count_base *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  std::_Ref_count_base *v18; // [rsp+20h] [rbp-49h]
  std::_Ref_count_base *v19[2]; // [rsp+28h] [rbp-41h] BYREF
  std::_Ref_count_base *v20[2]; // [rsp+38h] [rbp-31h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-21h] BYREF
  std::_Ref_count_base *v22; // [rsp+50h] [rbp-19h]
  __int64 v23; // [rsp+58h] [rbp-11h] BYREF
  std::_Ref_count_base *v24; // [rsp+60h] [rbp-9h]
  _DWORD *v25; // [rsp+68h] [rbp-1h] BYREF
  std::_Ref_count_base *v26; // [rsp+70h] [rbp+7h]
  _DWORD v27[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v28; // [rsp+80h] [rbp+17h]
  __int16 v29; // [rsp+90h] [rbp+27h]
  std::_Ref_count_base *v30; // [rsp+D0h] [rbp+67h] BYREF
  char v31; // [rsp+E0h] [rbp+77h] BYREF
  char v32; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)this )
  {
    v27[0] = 0;
    v27[1] = 0;
    v28 = 0LL;
    v29 = 1;
    DWORD2(v28) = *(_DWORD *)TouchGestureProcessor::PixelToHimetric(this, &v31, a2);
    HIDWORD(v28) = *(_DWORD *)(TouchGestureProcessor::PixelToHimetric(v4, &v32, a2) + 4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, v27);
    *(_OWORD *)v19 = 0LL;
    v6 = (std::_Ref_count_base *)operator new(0xF0uLL);
    v30 = v6;
    *(_OWORD *)v6 = 0LL;
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v6 + 16,
      0,
      0);
    v21 = (_DWORD *)((char *)v6 + 16);
    v22 = v6;
    std::shared_ptr<KBViewInfo>::operator=(v19, (__int64 *)&v21);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v19) )
    {
      v7 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v19);
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v9 = *(_QWORD *)v7;
      v23 = v9;
      v24 = *(std::_Ref_count_base **)(v7 + 8);
      tip::details::test_common_data<1>::begin_update(v9 + 8);
      v10 = v9 + 212;
      if ( !v9 )
        v10 = 36LL;
      *(_DWORD *)v10 = v5;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v23);
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
    }
    if ( v19[1] )
      std::_Ref_count_base::_Decref(v19[1]);
    v30 = 0LL;
    winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)this, (__int64 *)&v30);
    if ( v30 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v30);
    *(_OWORD *)v20 = 0LL;
    v18 = (std::_Ref_count_base *)operator new(0xF0uLL);
    *(_OWORD *)v18 = 0LL;
    *((_DWORD *)v18 + 2) = 1;
    *((_DWORD *)v18 + 3) = 1;
    *(_QWORD *)v18 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v18 + 16,
      0,
      0);
    v25 = (_DWORD *)((char *)v18 + 16);
    v26 = v18;
    std::shared_ptr<KBViewInfo>::operator=(v20, (__int64 *)&v25);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v20) )
    {
      v12 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v20);
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v14 = *(_QWORD *)v12;
      v21 = (_DWORD *)v14;
      v22 = *(std::_Ref_count_base **)(v12 + 8);
      tip::details::test_common_data<1>::begin_update(v14 + 8);
      v15 = v14 + 194;
      if ( !v14 )
        v15 = 18LL;
      *(_BYTE *)v15 = 1;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v21);
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
    }
    if ( v20[1] )
      std::_Ref_count_base::_Decref(v20[1]);
    LOBYTE(v11) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGETest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GTGETest>::GetImpl'::`2'::impl,
      v11,
      0LL);
    LOBYTE(v16) = 1;
    LOBYTE(v17) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGETest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GTGETest>::GetImpl'::`2'::impl,
      v17,
      v16);
    TouchGestureTelemetry::TouchSwipeFinished();
  }
}
