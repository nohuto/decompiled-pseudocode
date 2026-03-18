/*
 * XREFs of ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x180095874
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180201F70 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A6AA0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<72>(unsigned __int64 a1)
{
  if ( a1 > 0x38E38E38E38E38ELL )
    std::_Throw_bad_array_new_length();
  return 72 * a1;
}
