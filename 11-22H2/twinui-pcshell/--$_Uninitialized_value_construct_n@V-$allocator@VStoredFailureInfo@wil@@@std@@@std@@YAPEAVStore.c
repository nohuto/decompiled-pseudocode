/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@PEAV12@_KAEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1804149EC
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1801B2110 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1804147EC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x18041418C (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 */

wil::StoredFailureInfo *__fastcall std::_Uninitialized_value_construct_n<std::allocator<wil::StoredFailureInfo>>(
        wil::StoredFailureInfo *this,
        __int64 a2)
{
  __int64 i; // rdi

  for ( i = a2; i; --i )
  {
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    memset_0(this, 0, 0x98uLL);
    this = (wil::StoredFailureInfo *)((char *)this + 168);
  }
  std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(this, this);
  return this;
}
