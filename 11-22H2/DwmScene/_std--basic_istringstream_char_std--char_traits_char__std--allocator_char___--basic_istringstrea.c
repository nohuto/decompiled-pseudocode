/*
 * XREFs of _std::basic_istringstream_char_std::char_traits_char__std::allocator_char___::basic_istringstream_char_std::char_traits_char__std::allocator_char____::_1_::dtor$0 @ 0x1800E740C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_istringstream_char_std::char_traits_char__std::allocator_char___::basic_istringstream_char_std::char_traits_char__std::allocator_char____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return std::ios::~ios<char,std::char_traits<char>>(*(_QWORD *)(a2 + 64) + 144LL);
  }
  return result;
}
