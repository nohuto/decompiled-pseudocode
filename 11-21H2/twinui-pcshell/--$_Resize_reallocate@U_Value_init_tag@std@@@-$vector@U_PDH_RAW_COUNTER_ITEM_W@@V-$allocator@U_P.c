/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803291B4
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180329118 (--$_Resize@U_Value_init_tag@std@@@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_PDH_RAW_COUN.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1801093CC (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

__int64 __fastcall std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t size_of; // rax
  char *v9; // r15

  v4 = 0x555555555555555LL;
  if ( a2 > 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4);
  v7 = v6 >> 1;
  if ( v6 <= 0x555555555555555LL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<48>(v4);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    if ( a2 != v5 )
      memset_0(&v9[48 * v5], 0, 48 * (a2 - v5));
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v9, 48 * v4);
    throw;
  }
  return std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Change_array();
}
