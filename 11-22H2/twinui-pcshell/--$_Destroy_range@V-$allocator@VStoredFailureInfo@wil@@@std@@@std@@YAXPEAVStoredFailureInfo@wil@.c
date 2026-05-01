/*
 * XREFs of ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x18041418C
 * Callers:
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x180093D4C (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180183458 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1801B2110 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 *     _std::vector_wil::StoredFailureInfo_std::allocator_wil::StoredFailureInfo___::_Emplace_reallocate_wil::FailureInfo_const_&__::_1_::catch$1 @ 0x180414308 (_std--vector_wil--StoredFailureInfo_std--allocator_wil--StoredFailureInfo___--_Emplace_reallocat.c)
 *     _std::vector_wil::StoredFailureInfo_std::allocator_wil::StoredFailureInfo___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x1804148B5 (_std--vector_wil--StoredFailureInfo_std--allocator_wil--StoredFailureInfo___--_Resize_reallocate.c)
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180414960 (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@PEAV12@_KAEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1804149EC (--$_Uninitialized_value_construct_n@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStore.c)
 *     ?_Change_array@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAXQEAVStoredFailureInfo@wil@@_K1@Z @ 0x18041A790 (-_Change_array@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 * Callees:
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x180417BEC (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(
        wil::StoredFailureInfo *this,
        wil::StoredFailureInfo *a2)
{
  wil::StoredFailureInfo *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = wil::StoredFailureInfo::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (wil::StoredFailureInfo *)((char *)v3 + 168);
    }
    while ( v3 != a2 );
  }
  return result;
}
