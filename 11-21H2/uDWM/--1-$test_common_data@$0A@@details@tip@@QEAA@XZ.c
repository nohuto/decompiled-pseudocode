/*
 * XREFs of ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180013500
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@EEAAXXZ @ 0x180014380 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transit.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180013570 (--1-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$integr.c)
 *     TestQueryData @ 0x180013850 (TestQueryData.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x180013CB4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180042334 (-update_from_test_info@-$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x18004462C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1800F1CAC (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800F1D04 (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::details::test_common_data<0>::~test_common_data<0>(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct TestInfo *v8; // rdx
  __int64 v9; // rcx
  _OWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]

  v2 = (_QWORD *)(a1 + 120);
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 4LL) & 1) == 0 )
  {
    memset(v10, 0, sizeof(v10));
    v11 = 0LL;
    v7 = *(unsigned int *)(a1 + 128);
    *v2 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *))TestQueryData)(v3, 4LL, v7, v10) )
    {
      tip::details::test_common_data<0>::update_from_test_info(a1, v10);
      tip::details::test_common_data<0>::evaluate_and_report(v9, v11);
    }
    tip::details::TestInfoDelete((tip::details *)v10, v8);
  }
  result = wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>(v2);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::string>>(v5, *(_QWORD *)(a1 + 64));
    result = std::_Deallocate<16,0>(
               *(void **)(a1 + 56),
               (*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v6, *(_QWORD *)(a1 + 40));
    result = std::_Deallocate<16,0>(
               *(void **)(a1 + 32),
               8 * ((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) >> 3));
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
