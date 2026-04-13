/*
 * XREFs of _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$1 @ 0x1800D6CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x18004F59C (--$_Allocate@G@std@@YAPEAG_KPEAG@Z.c)
 */

__int64 __fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 120) = v2;
  *(_QWORD *)(a2 + 136) = std::_Allocate<unsigned short>(v2 + 1);
  return 0LL;
}
