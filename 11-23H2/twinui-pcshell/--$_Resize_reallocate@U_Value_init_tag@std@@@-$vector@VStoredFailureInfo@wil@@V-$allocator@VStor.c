/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1804147EC
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1801B2110 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEBA_K_K@Z @ 0x1802D3DB4 (-_Calculate_growth@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1803920F4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180414960 (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@PEAV12@_KAEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1804149EC (--$_Uninitialized_value_construct_n@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStore.c)
 */

__int64 __fastcall std::vector<wil::StoredFailureInfo>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r10
  char *v11; // r14
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  char *v14; // rdx
  _QWORD *v15; // rcx
  wil::StoredFailureInfo *v17; // [rsp+70h] [rbp+18h]
  unsigned __int64 v18; // [rsp+78h] [rbp+20h]

  if ( a2 > 0x186186186186186LL )
    std::_Xlength_error("vector too long");
  v7 = 0xCF3CF3CF3CF3CF3DuLL * ((__int64)(a1[1] - *a1) >> 3);
  v8 = std::vector<wil::StoredFailureInfo>::_Calculate_growth(a1, a2);
  v9 = v8;
  v18 = v8;
  if ( v8 > v10 )
    std::_Throw_bad_array_new_length();
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(168 * v8);
  try
  {
    v17 = (wil::StoredFailureInfo *)std::_Uninitialized_value_construct_n<std::allocator<wil::StoredFailureInfo>>((wil::StoredFailureInfo *)&v11[168 * v7]);
    std::_Uninitialized_move<wil::StoredFailureInfo *>(*a1, a1[1], v11);
    v12 = v9;
    v13 = a2;
    v14 = v11;
    v15 = a1;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>((wil::StoredFailureInfo *)&v11[168 * v7], v17);
    std::_Deallocate<16,0>(v11, 168 * v18);
    throw;
  }
  return std::vector<wil::StoredFailureInfo>::_Change_array(v15, v14, v13, v12, a5);
}
