/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803496E0
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803494A4 (--$_Resize@U_Value_init_tag@std@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureIn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180348AEC (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180349908 (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ?_Calculate_growth@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEBA_K_K@Z @ 0x180350B58 (-_Calculate_growth@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@.c)
 */

__int64 __fastcall std::vector<wil::StoredFailureInfo>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  char *v7; // r12
  char *v8; // rbx
  bool i; // zf
  unsigned __int64 v10; // rsi
  __int64 v12; // [rsp+80h] [rbp+18h]
  unsigned __int64 v13; // [rsp+88h] [rbp+20h]

  if ( a2 > 0x186186186186186LL )
    std::_Xlength_error("vector too long");
  v4 = 0xCF3CF3CF3CF3CF3DuLL * ((__int64)(a1[1] - *a1) >> 3);
  v5 = std::vector<wil::StoredFailureInfo>::_Calculate_growth();
  v13 = v5;
  if ( v5 > v6 )
    std::_Throw_bad_array_new_length();
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(168 * v5);
  v8 = &v7[168 * v4];
  try
  {
    v10 = a2 - v4;
    for ( i = a2 == v4; ; i = v10 == 0 )
    {
      v12 = (__int64)v8;
      if ( i )
        break;
      *((_QWORD *)v8 + 19) = 0LL;
      *((_QWORD *)v8 + 20) = 0LL;
      memset_0(v8, 0, 0x98uLL);
      v8 += 168;
      --v10;
    }
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>((__int64)v8, (__int64)v8);
    std::_Uninitialized_move<wil::StoredFailureInfo *>(*a1, a1[1], v7);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>((__int64)&v7[168 * v4], v12);
    std::_Deallocate<16,0>(v7, 168 * v13);
    throw;
  }
  return std::vector<wil::StoredFailureInfo>::_Change_array();
}
