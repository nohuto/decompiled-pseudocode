/*
 * XREFs of ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x18076F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18004048C (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18007C2F4 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Tidy@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1802D29C0 (-_Tidy@-$vector@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 *     ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18068782C (--$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA-.c)
 *     ?SnapAssistCompleted@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@3@U?$array_view@$$CB_K@3@@Z @ 0x180688624 (-SnapAssistCompleted@-$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnap.c)
 *     ?_Buy_nonzero@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1806888B0 (-_Buy_nonzero@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$al.c)
 *     ??$emplace_back@_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAA?A_T$$QEA_K@Z @ 0x180693524 (--$emplace_back@_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAA-A_T$$QEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall XamlSnapAssistViewHost::v_DismissView(XamlSnapAssistViewHost *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdx
  unsigned int *v7; // rsi
  unsigned int *v8; // rbx
  const void *v9; // rdx
  signed __int64 v10; // rbx
  std::_Ref_count_base *v11; // rcx
  __int64 v12; // rcx
  void *v13[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  LODWORD(v17) = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 87);
  if ( (__int64)(v5[1] - *v5) >> 3 )
    LODWORD(v17) = (v5[7] - v5[6] < 0x20uLL) + 1;
  v15 = 0LL;
  v16 = 0LL;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  v6 = (__int64)(v5[4] - v5[3]) >> 2;
  v7 = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Buy_nonzero(v13, v6);
    v9 = (const void *)v5[3];
    v10 = v5[4] - (_QWORD)v9;
    v7 = (unsigned int *)v13[0];
    memmove_0(v13[0], v9, v10);
    v8 = &v7[v10 >> 2];
    v13[1] = v8;
  }
  while ( v7 != v8 )
  {
    v19 = *v7;
    std::vector<unsigned __int64>::emplace_back<unsigned __int64>((__int64)&v15, &v19);
    ++v7;
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v13);
  wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(
    &v18,
    *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))this + 33));
  v13[0] = (void *)v15;
  LODWORD(v13[1]) = (__int64)(*((_QWORD *)&v15 + 1) - v15) >> 3;
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
    &v18,
    (unsigned int *)&v17,
    (__m128i *)v13);
  *((_QWORD *)this + 87) = 0LL;
  v11 = (std::_Ref_count_base *)*((_QWORD *)this + 88);
  *((_QWORD *)this + 88) = 0LL;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  std::vector<unsigned __int64>::_Tidy((__int64)&v15);
  v12 = *((_QWORD *)this + 78);
  if ( v12 && tip2::details::shared_data<0,0,0>::is_running(v12 + 8) )
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)this + 78);
  __abi_winrt_ptr_assign((_QWORD *)this + 29, 0LL);
  v17 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (XamlSnapAssistViewHost *)((char *)this + 288),
    (winrt::Windows::Foundation::IUnknown *)&v17);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  *((_BYTE *)this + 296) = 0;
}
