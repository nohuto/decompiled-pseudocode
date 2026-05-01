/*
 * XREFs of ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801A168C
 * Callers:
 *     ?ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x18002D9A0 (-ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045B90 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?MinimizeToBoxMode@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18038EED0 (-MinimizeToBoxMode@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174 (-data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchFu.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?ensure_data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@XZ @ 0x1801A2634 (-ensure_data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1801A3350 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall UndockedSearchAppExperienceManager::StartFullActivationTest(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rdi
  _QWORD *v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v21; // r9
  struct _TP_TIMER *v22; // rcx
  volatile signed __int32 *v23; // [rsp+20h] [rbp-30h] BYREF
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-28h] BYREF
  __m128i v25; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v3 = (_QWORD *)(a1 + 728);
  if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)(a1 + 728)) )
  {
    v7 = tip::tip_test<_tip_SearchFullActivationTest>::data((__int64)v3, &v25);
    v8 = *v7 == 0LL;
    v9 = *v7 + 156LL;
    if ( v8 )
      v9 = 12LL;
    *(_DWORD *)v9 = a2;
    tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v25.m128i_i64);
  }
  if ( *v3 && tip::details::test_common_data<0>::has_ever_started(*v3 + 8LL) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(v3);
  v10 = (_QWORD *)tip::tip_test<_tip_SearchFullActivationTest>::ensure_data(v3);
  tip::details::test_common_data<0>::start(*v10 + 8LL, &v25);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
  {
    if ( *v3 )
      v25 = *(__m128i *)(*v3 + 88LL);
    else
      v25 = 0LL;
    v25.m128i_i64[1] = _mm_srli_si128(v25, 8).m128i_u64[0];
    v11 = (__int64 *)winrt::to_hstring(&v23, &v25);
    if ( (__int64 *)(a1 + 744) != v11 )
    {
      v15 = *v11;
      *v11 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 744), v12, v13, v14);
      *(_QWORD *)(a1 + 744) = v15;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v23, v12, v13, v14);
  }
  v16 = tip::tip_test<_tip_SearchFullActivationTest>::data((__int64)v3, &v25);
  v8 = *v16 == 0LL;
  v17 = *v16 + 152LL;
  if ( v8 )
    v17 = 8LL;
  *(_DWORD *)v17 = a2;
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v25.m128i_i64);
  v18 = tip::tip_test<_tip_SearchFullActivationTest>::data((__int64)v3, &v25);
  v8 = *v18 == 0LL;
  v19 = *v18 + 208LL;
  if ( v8 )
    v19 = 64LL;
  *(_DWORD *)v19 = a3;
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v25.m128i_i64);
  pftDueTime = (struct _FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_64ee20f144aecbc26ab1ec4daa8fb081_::_lambda_invoker_cdecl_,
                      (PVOID)a1,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)(a1 + 720),
    ThreadpoolTimer);
  v22 = *(struct _TP_TIMER **)(a1 + 720);
  if ( !v22 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0xC78,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v21);
  SetThreadpoolTimer(v22, &pftDueTime, 0, 0);
}
