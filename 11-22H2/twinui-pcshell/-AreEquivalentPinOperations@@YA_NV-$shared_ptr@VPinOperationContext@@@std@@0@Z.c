/*
 * XREFs of ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x18069F680
 * Callers:
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____________lambda_ef8a17c265bb0005e522c2850a8986c4___ @ 0x18069C918 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--pair_std--shared_ptr.c)
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1806A3964 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEAA_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@@Z @ 0x1806A8F60 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU-$pair@V-$shar.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?8GU?$char_traits@G@std@@@std@@YA_NV?$basic_string_view@GU?$char_traits@G@std@@@0@0@Z @ 0x18038BDBC (--$-8GU-$char_traits@G@std@@@std@@YA_NV-$basic_string_view@GU-$char_traits@G@std@@@0@0@Z.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x18069F790 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 *     ?TargetSecondaryId@PinOperationContext@@QEBA?BV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A71FC (-TargetSecondaryId@PinOperationContext@@QEBA-BV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 */

char __fastcall AreEquivalentPinOperations(_QWORD **a1, _QWORD **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // bl
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  __m128i v14; // [rsp+20h] [rbp-40h] BYREF
  __m128i v15; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-10h] BYREF

  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v15,
    *a2);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v14,
    *a1);
  if ( !(unsigned __int8)AreEquivalentPinSources(&v14, &v15) )
    goto LABEL_9;
  v4 = (__int64)*a2;
  v5 = (__int64)(*a2 + 3);
  if ( (*a2)[6] >= 8uLL )
    v5 = *(_QWORD *)(v4 + 24);
  v6 = (__int64)*a1;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = (__int64)(*a1 + 3);
  if ( (*a1)[6] >= 8uLL )
    v8 = *(_QWORD *)(v6 + 24);
  v9 = *(_QWORD *)(v6 + 40);
  v14.m128i_i64[0] = v5;
  v15.m128i_i64[0] = v8;
  v15.m128i_i64[1] = v9;
  v14.m128i_i64[1] = v7;
  if ( std::operator==<unsigned short,std::char_traits<unsigned short>>(v15.m128i_i64, &v14)
    && (v15 = *(__m128i *)PinOperationContext::TargetSecondaryId(v4, v16),
        v14 = *(__m128i *)PinOperationContext::TargetSecondaryId(v6, v17),
        std::operator==<unsigned short,std::char_traits<unsigned short>>(v14.m128i_i64, &v15)) )
  {
    v10 = 1;
  }
  else
  {
LABEL_9:
    v10 = 0;
  }
  v11 = (std::_Ref_count_base *)a1[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = (std::_Ref_count_base *)a2[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return v10;
}
