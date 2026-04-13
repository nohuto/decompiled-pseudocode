/*
 * XREFs of _std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Copy_::_1_::catch$1 @ 0x1800D904A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x18004F54C (--$_Allocate@G@std@@YAPEAG_KPEAG@Z.c)
 */

__int64 __fastcall std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 120) = v2;
  *(_QWORD *)(a2 + 136) = std::_Allocate<unsigned short>(v2 + 1);
  return 0LL;
}
