/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18006DCF0
 * Callers:
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x18006ED90 (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x1800390AC (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x1800606E4 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x18006DE3C (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t size_of; // rax
  char *v9; // r15
  __int64 v10; // rcx

  v4 = 0x38E38E38E38E38ELL;
  if ( a2 > 0x38E38E38E38E38ELL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v5 = 0x8E38E38E38E38E39uLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v6 = 0x8E38E38E38E38E39uLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v7 = v6 >> 1;
  if ( v6 <= 0x38E38E38E38E38ELL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<72>(v4);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(&v9[72 * v5], a2 - v5);
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v10 = a1;
  }
  catch ( ... )
  {
    std::allocator<DISPLAYCONFIG_PATH_INFO>::deallocate(v10, v9, v4);
    throw;
  }
  return std::vector<DISPLAYCONFIG_PATH_INFO>::_Change_array();
}
