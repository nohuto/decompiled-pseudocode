/*
 * XREFs of ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180348AEC
 * Callers:
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x18011EDCC (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x18011F994 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803494A4 (--$_Resize@U_Value_init_tag@std@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureIn.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803496E0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 *     _std::vector_wil::StoredFailureInfo_std::allocator_wil::StoredFailureInfo___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$1 @ 0x1803497E9 (_std--vector_wil--StoredFailureInfo_std--allocator_wil--StoredFailureInfo___--_Resize_reallocate.c)
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180349908 (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ?_Change_array@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAXQEAVStoredFailureInfo@wil@@_K1@Z @ 0x180350CA4 (-_Change_array@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 *     _std::vector_wil::StoredFailureInfo_std::allocator_wil::StoredFailureInfo___::_Emplace_reallocate_wil::FailureInfo_const_&__::_1_::catch$1 @ 0x18038D6AC (_std--vector_wil--StoredFailureInfo_std--allocator_wil--StoredFailureInfo___--_Emplace_reallocat.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::details::shared_buffer::reset((volatile signed __int32 **)(v3 + 152));
      v3 += 168LL;
    }
    while ( v3 != a2 );
  }
}
