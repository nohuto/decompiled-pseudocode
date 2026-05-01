/*
 * XREFs of ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800132EC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000DB58 (--$_Emplace_reallocate@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x18001AA6C (-_Reallocate_exactly@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001CBAC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 * Callees:
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x1800132C4 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AD04 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Allocate<16,std::_Default_allocate_traits,0>(size_t a1)
{
  void *v1; // rax
  __int64 v2; // rdx
  void *v3; // rcx
  _QWORD *result; // rax

  if ( a1 >= 0x1000 )
  {
    if ( a1 + 39 < a1 )
      __scrt_throw_std_bad_array_new_length();
    v1 = operator new(a1 + 39);
    v3 = v1;
    if ( v1 )
    {
      result = (_QWORD *)(((unsigned __int64)v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(result - 1) = v3;
      return result;
    }
    _o__invalid_parameter_noinfo_noreturn(0LL, v2);
    __debugbreak();
  }
  if ( a1 )
    return operator new(a1);
  else
    return 0LL;
}
