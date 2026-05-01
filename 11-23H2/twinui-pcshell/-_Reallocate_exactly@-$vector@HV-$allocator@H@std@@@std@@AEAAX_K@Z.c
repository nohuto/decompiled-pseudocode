/*
 * XREFs of ?_Reallocate_exactly@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x18022B1DC
 * Callers:
 *     ?reserve@?$vector@HV?$allocator@H@std@@@std@@QEAAX_K@Z @ 0x18022B5F4 (-reserve@-$vector@HV-$allocator@H@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180093BA4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

__int64 __fastcall std::vector<int>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rax
  void *v7; // rsi
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  void *v10; // rdx
  __int64 v11; // rcx
  void *v13; // [rsp+40h] [rbp+8h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  size_of = std::_Get_size_of_n<4>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v13 = v6;
  try
  {
    memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v8 = a2;
    v9 = v4;
    v10 = v7;
    v11 = a1;
  }
  catch ( ... )
  {
    std::allocator<int>::deallocate(v11, v13, a2);
    throw;
  }
  return std::vector<int>::_Change_array(v11, v10, v9, v8);
}
