/*
 * XREFs of ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x18004F54C
 * Callers:
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180060338 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x180061AAC (-_Init@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z.c)
 *     ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180064990 (-overflow@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@MEAAGG@Z.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x1800966D8 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$1 @ 0x1800D6C60 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_1800D6C60.c)
 *     _std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Copy_::_1_::catch$1 @ 0x1800D904A (_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Co_ea_1800D904A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 */

void *__fastcall std::_Allocate<unsigned short>(unsigned __int64 a1)
{
  void *result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a1 > 0x7FFFFFFFFFFFFFFFLL || (result = operator new(2 * a1)) == 0LL )
      std::_Xbad_alloc();
  }
  return result;
}
