/*
 * XREFs of ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEBV12@@Z @ 0x18009D7BC
 * Callers:
 *     ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18009D714 (--$_Range_construct_or_tidy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 */

void __fastcall std::wstring::_Construct_lv_contents(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v5; // rsi
  size_t size_of; // rax
  void *v7; // rax

  v2 = (_OWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  v5 = 7LL;
  if ( v3 < 8 )
  {
    *(_OWORD *)a1 = *v2;
  }
  else
  {
    v5 = v3 | 7;
    if ( (v3 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    size_of = std::_Get_size_of_n<2>(v5 + 1);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)a1 = v7;
    memcpy_0(v7, v2, 2 * v3 + 2);
  }
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = v5;
}
