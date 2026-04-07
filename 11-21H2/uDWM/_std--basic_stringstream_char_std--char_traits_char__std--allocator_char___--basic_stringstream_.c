/*
 * XREFs of _std::basic_stringstream_char_std::char_traits_char__std::allocator_char___::basic_stringstream_char_std::char_traits_char__std::allocator_char____::_1_::dtor$0 @ 0x180065974
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_stringstream_char_std::char_traits_char__std::allocator_char___::basic_stringstream_char_std::char_traits_char__std::allocator_char____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return std::ios::~ios<char,std::char_traits<char>>(*(_QWORD *)(a2 + 48) + 152LL);
  }
  return result;
}
