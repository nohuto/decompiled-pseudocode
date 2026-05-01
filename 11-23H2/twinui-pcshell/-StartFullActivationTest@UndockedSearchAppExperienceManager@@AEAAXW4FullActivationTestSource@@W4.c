/*
 * XREFs of ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045AFC
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18003DA50 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800459D0 (-ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocu.c)
 *     ?MinimizeToBoxMode@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1804691C0 (-MinimizeToBoxMode@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800130A4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returnc.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800130C8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18001319C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x180045DE4 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180045EC4 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?config_set_identity@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAAXIPEBD@Z @ 0x180046030 (-config_set_identity@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180085A44 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B68FC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1800B724C (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800B8618 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 */

void __fastcall UndockedSearchAppExperienceManager::StartFullActivationTest(RTL_SRWLOCK *a1, int a2, int a3)
{
  void **p_Ptr; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i *v9; // rax
  __m128i v10; // xmm1
  __int16 epi16; // ax
  RTL_SRWLOCK *v12; // rax
  PVOID Ptr; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v17; // r9
  struct _TP_TIMER *v18; // rcx
  __int64 v19; // rsi
  int v20; // [rsp+20h] [rbp-39h] BYREF
  __int16 v21; // [rsp+24h] [rbp-35h]
  __int16 v22; // [rsp+26h] [rbp-33h]
  char v23; // [rsp+28h] [rbp-31h]
  char v24; // [rsp+29h] [rbp-30h]
  char v25; // [rsp+2Ah] [rbp-2Fh]
  char v26; // [rsp+2Bh] [rbp-2Eh]
  char v27; // [rsp+2Ch] [rbp-2Dh]
  char v28; // [rsp+2Dh] [rbp-2Ch]
  char v29; // [rsp+2Eh] [rbp-2Bh]
  char v30; // [rsp+2Fh] [rbp-2Ah]
  LPVOID pv; // [rsp+30h] [rbp-29h] BYREF
  LPVOID v32; // [rsp+38h] [rbp-21h] BYREF
  LPVOID v33; // [rsp+40h] [rbp-19h] BYREF
  char v34[8]; // [rsp+48h] [rbp-11h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp-9h] BYREF
  char v36[16]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v37; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v38; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  p_Ptr = &a1[103].Ptr;
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(&a1[103]) )
  {
    v19 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(p_Ptr);
    pv = (LPVOID)v19;
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 336));
    tip2::details::shared_data<1,0,0>::begin_update(v19 + 8);
    *(_DWORD *)(v19 + 268) = a2;
    tip2::details::shared_data<1,0,0>::end_update(v19 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(&pv);
    if ( pv )
      tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(pv);
    tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete(p_Ptr);
  }
  AcquireSRWLockExclusive(a1 + 104);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(p_Ptr);
  if ( a2 == 2 )
    tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::config_set_identity(
      p_Ptr,
      34926546LL,
      "SearchFullActivationTestShowWithStart");
  if ( *p_Ptr && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started((char *)*p_Ptr + 8) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(p_Ptr);
  v7 = tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(p_Ptr);
  *(_DWORD *)(*(_QWORD *)v7 + 72LL) |= 0x800u;
  tip2::details::shared_data<1,0,0>::start(*(_QWORD *)v7 + 8LL, v36);
  if ( a1 != (RTL_SRWLOCK *)-832LL )
    ReleaseSRWLockExclusive(a1 + 104);
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    v8);
  if ( *p_Ptr )
  {
    v9 = (__m128i *)&v37;
    v37 = *(_OWORD *)((char *)*p_Ptr + 152);
  }
  else
  {
    v9 = (__m128i *)&v38;
    v38 = 0LL;
  }
  v10 = *v9;
  epi16 = _mm_extract_epi16(*v9, 2);
  v20 = _mm_cvtsi128_si32(v10);
  v21 = epi16;
  v22 = _mm_extract_epi16(v10, 3);
  v23 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
  v24 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 9));
  v25 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 10));
  v26 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 11));
  v27 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 12));
  v28 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 13));
  v29 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 14));
  v30 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 15));
  v12 = (RTL_SRWLOCK *)winrt::to_hstring(v34, &v20);
  if ( &a1[105] != v12 )
  {
    Ptr = v12->Ptr;
    v12->Ptr = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&a1[105]);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&a1[105]);
    a1[105].Ptr = Ptr;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(v34);
  v14 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(p_Ptr);
  v32 = (LPVOID)v14;
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 336));
  tip2::details::shared_data<1,0,0>::begin_update(v14 + 8);
  *(_DWORD *)(v14 + 264) = a2;
  tip2::details::shared_data<1,0,0>::end_update(v14 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(&v32);
  if ( v32 )
    tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(v32);
  v15 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(p_Ptr);
  v33 = (LPVOID)v15;
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 336));
  tip2::details::shared_data<1,0,0>::begin_update(v15 + 8);
  *(_DWORD *)(v15 + 320) = a3;
  tip2::details::shared_data<1,0,0>::end_update(v15 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(&v33);
  if ( v33 )
    tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(v33);
  pftDueTime = (struct _FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_64ee20f144aecbc26ab1ec4daa8fb081_::_lambda_invoker_cdecl_, a1, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    &a1[102],
    ThreadpoolTimer);
  v18 = (struct _TP_TIMER *)a1[102].Ptr;
  if ( !v18 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x1039,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v17);
  SetThreadpoolTimer(v18, &pftDueTime, 0, 0);
}
