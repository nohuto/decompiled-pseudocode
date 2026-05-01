/*
 * XREFs of ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x18038D56C
 * Callers:
 *     ??$emplace_back@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAAEAVStoredFailureInfo@wil@@AEBUFailureInfo@3@@Z @ 0x18038D9A4 (--$emplace_back@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailu.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180090D90 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180349908 (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ?_Calculate_growth@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEBA_K_K@Z @ 0x180350B58 (-_Calculate_growth@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@.c)
 *     ?_Change_array@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAXQEAVStoredFailureInfo@wil@@_K1@Z @ 0x180350CA4 (-_Change_array@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 */

wil::StoredFailureInfo *__fastcall std::vector<wil::StoredFailureInfo>::_Emplace_reallocate<wil::FailureInfo const &>(
        __int64 *a1,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // r10
  char *v11; // rax
  __int64 v12; // rbx
  wil::StoredFailureInfo *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  wil::StoredFailureInfo *result; // rax
  void *v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp+8h]
  unsigned __int64 v21; // [rsp+88h] [rbp+20h]

  v5 = (a2 - *a1) / 168;
  v6 = 0xCF3CF3CF3CF3CF3DuLL * ((a1[1] - *a1) >> 3);
  if ( v6 == 0x186186186186186LL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = std::vector<wil::StoredFailureInfo>::_Calculate_growth(a1, v6 + 1);
  v9 = v8;
  v21 = v8;
  if ( v8 > v10 )
    std::_Throw_bad_array_new_length();
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(168 * v8);
  v12 = (__int64)v11;
  v18 = v11;
  v13 = (wil::StoredFailureInfo *)&v11[168 * v5];
  try
  {
    *((_QWORD *)v13 + 19) = 0LL;
    *((_QWORD *)v13 + 20) = 0LL;
    wil::StoredFailureInfo::SetFailureInfo(v13, a3);
    v19 = (__int64)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<wil::StoredFailureInfo *>(v16, a2, v12);
      v19 = v12;
      v15 = (__int64)v13 + 168;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<wil::StoredFailureInfo *>(v16, v14, v15);
    std::vector<wil::StoredFailureInfo>::_Change_array((__int64)a1, v12, v7, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v19, (__int64)v13 + 168);
    std::_Deallocate<16,0>(v18, 168 * v21);
    throw;
  }
  return result;
}
