/*
 * XREFs of ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1800F1E50
 * Callers:
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F62A8 (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180095DFC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009BC6C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800F25A0 (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ?_Calculate_growth@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEBA_K_K@Z @ 0x1800F5CD8 (-_Calculate_growth@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@.c)
 *     ?_Change_array@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAXQEAVStoredFailureInfo@wil@@_K1@Z @ 0x1800F5E24 (-_Change_array@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180107A14 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

wil::StoredFailureInfo *__fastcall std::vector<wil::StoredFailureInfo>::_Emplace_reallocate<wil::FailureInfo const &>(
        __int64 *a1,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  __int64 v3; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r10
  __int64 v12; // rdi
  wil::StoredFailureInfo *v13; // r14
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx

  v3 = *a1;
  v6 = 0xCF3CF3CF3CF3CF3DuLL * ((a1[1] - *a1) >> 3);
  if ( v6 == 0x186186186186186LL )
    std::_Dwm_Xlength_error((const char *)0xCF3CF3CF3CF3CF3DLL);
  v8 = v6 + 1;
  v9 = std::vector<wil::StoredFailureInfo>::_Calculate_growth(a1, v6 + 1);
  v10 = v9;
  if ( v9 > v11 )
    std::_Throw_bad_array_new_length();
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(168 * v9);
  v13 = (wil::StoredFailureInfo *)(v12 + 168 * ((a2 - v3) / 168 + a2 - v3));
  *((_QWORD *)v13 + 19) = 0LL;
  *((_QWORD *)v13 + 20) = 0LL;
  wil::StoredFailureInfo::SetFailureInfo(v13, a3);
  v14 = a1[1];
  v15 = (_QWORD *)v12;
  v16 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<wil::StoredFailureInfo *>(v16, a2, v12);
    v14 = a1[1];
    v15 = (_QWORD *)((char *)v13 + 168);
    v16 = a2;
  }
  std::_Uninitialized_move<wil::StoredFailureInfo *>(v16, v14, v15);
  std::vector<wil::StoredFailureInfo>::_Change_array(a1, v12, v8, v10);
  return v13;
}
