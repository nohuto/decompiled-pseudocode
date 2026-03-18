/*
 * XREFs of ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800CEA90
 * Callers:
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1800CEA58 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Reallocate_exactly(
        __int64 a1,
        SIZE_T a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rdi
  void *v8; // rbx

  v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v8 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
  memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned char>::_Change_array(a1, v8, v6, a2, a5);
}
