/*
 * XREFs of ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x18078AFAC
 * Callers:
 *     ??$?0AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@45@HAEAPEAUHWND__@@AEAPEAUHWND__@@AEAUISnapAssistCallback2@WindowSnapping@Shell@345@@?$_Ref_count_obj2@VSnapAssistState@@@std@@QEAA@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@1@AEBURect@Foundation@67@$$QEAHAEAPEAUHWND__@@4AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@Z @ 0x180768A04 (--$-0AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV-$vector.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x180223F44 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180224364 (-start@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 *     ?open@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA_NXZ @ 0x18022BA00 (-open@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA_NXZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803E2DC4 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 *     ??$_Construct_n@AEBQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@AEBQEAU123456@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_KAEBQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@1@Z @ 0x18078AB34 (--$_Construct_n@AEBQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@AEBQEAU1234.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall SnapAssistState::SnapAssistState(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _OWORD *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v11; // rsi
  __int64 v12; // rax
  _OWORD pExceptionObject[3]; // [rsp+20h] [rbp-38h] BYREF
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  v11 = a1 + 6;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Construct_n<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion * const &,winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion * const &>(
    a1 + 6,
    (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 5,
    (const void **)a3,
    (_QWORD *)(a3 + 8));
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  *((_OWORD *)a1 + 6) = *a4;
  *((_DWORD *)a1 + 28) = a5;
  v12 = a6;
  a1[15] = a6;
  a1[16] = v12;
  a1[17] = a7;
  a1[18] = 0LL;
  *((_BYTE *)a1 + 152) = 0;
  a1[20] = *a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 20));
  a1[21] = *a8;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 21));
  a1[22] = 0LL;
  a1[23] = 0LL;
  if ( *v11 == v11[1] )
  {
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_invalid_argument);
    throw (winrt::hresult_invalid_argument *)pExceptionObject;
  }
  if ( !tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::open((void **)a1 + 22) )
    tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::start(
      (volatile signed __int32 **)a1 + 22,
      pExceptionObject);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                (__int64)(a1 + 22),
                (__int64 *)&v15)
           + 282) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v15);
  return a1;
}
