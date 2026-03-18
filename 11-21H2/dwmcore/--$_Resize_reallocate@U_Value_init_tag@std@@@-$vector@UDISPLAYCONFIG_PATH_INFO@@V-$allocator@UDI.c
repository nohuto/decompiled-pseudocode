/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E9090
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E8E80 (--$_Resize@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG.c)
 * Callees:
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x180065038 (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  char *v10; // r15

  v2 = 0x38E38E38E38E38ELL;
  if ( a2 > 0x38E38E38E38E38ELL )
    std::_Xlength_error("vector too long");
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = 0x8E38E38E38E38E39uLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v7 = 0x8E38E38E38E38E39uLL * (v5 >> 3);
  v8 = v6 >> 1;
  if ( v6 <= 0x38E38E38E38E38ELL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<72>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  if ( a2 != v7 )
    memset_0(&v10[72 * v7], 0, 72 * (a2 - v7));
  memmove_0(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<DISPLAYCONFIG_PATH_INFO>::_Change_array(a1, v10, a2, v2);
}
