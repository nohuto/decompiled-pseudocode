/*
 * XREFs of ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1804141C8
 * Callers:
 *     ??$emplace_back@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAA?A_TAEBUFailureInfo@wil@@@Z @ 0x180414A50 (--$emplace_back@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailu.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEBA_K_K@Z @ 0x1802D3DB4 (-_Calculate_growth@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1803920F4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180414960 (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ?_Change_array@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAXQEAVStoredFailureInfo@wil@@_K1@Z @ 0x18041A790 (-_Change_array@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 */

char *__fastcall std::vector<wil::StoredFailureInfo>::_Emplace_reallocate<wil::FailureInfo const &>(
        __int64 *a1,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r10
  wil::StoredFailureInfo *v11; // rax
  wil::StoredFailureInfo *v12; // rbx
  char *v13; // rdi
  __int64 v14; // rdx
  wil::StoredFailureInfo *v15; // r8
  __int64 v16; // rcx
  char *result; // rax
  wil::StoredFailureInfo *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  wil::StoredFailureInfo *v20; // [rsp+70h] [rbp+8h]
  unsigned __int64 v22; // [rsp+88h] [rbp+20h]

  v5 = (a2 - *a1) / 168;
  v6 = 0xCF3CF3CF3CF3CF3DuLL * ((a1[1] - *a1) >> 3);
  if ( v6 == 0x186186186186186LL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = std::vector<wil::StoredFailureInfo>::_Calculate_growth(a1, v6 + 1);
  v9 = v8;
  v22 = v8;
  if ( v8 > v10 )
    std::_Throw_bad_array_new_length();
  v11 = (wil::StoredFailureInfo *)std::_Allocate<16,std::_Default_allocate_traits,0>(168 * v8);
  v12 = v11;
  v18 = v11;
  v13 = (char *)v11 + 168 * v5;
  try
  {
    *((_QWORD *)v13 + 19) = 0LL;
    *((_QWORD *)v13 + 20) = 0LL;
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)v13, a3);
    v20 = (wil::StoredFailureInfo *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<wil::StoredFailureInfo *>(v16, a2, v12);
      v20 = v12;
      v15 = (wil::StoredFailureInfo *)(v13 + 168);
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<wil::StoredFailureInfo *>(v16, v14, v15);
    std::vector<wil::StoredFailureInfo>::_Change_array(a1, v12, v7, v9, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v20, (wil::StoredFailureInfo *)(v13 + 168));
    std::_Deallocate<16,0>(v19, 168 * v22);
    throw;
  }
  return result;
}
