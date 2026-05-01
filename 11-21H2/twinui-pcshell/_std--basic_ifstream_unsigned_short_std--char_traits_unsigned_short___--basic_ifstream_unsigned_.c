/*
 * XREFs of _std::basic_ifstream_unsigned_short_std::char_traits_unsigned_short___::basic_ifstream_unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$0 @ 0x1805DD0FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_ifstream_unsigned_short_std::char_traits_unsigned_short___::basic_ifstream_unsigned_short_std::char_traits_unsigned_short____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(*(_QWORD *)(a2 + 64) + 176LL);
  }
  return result;
}
