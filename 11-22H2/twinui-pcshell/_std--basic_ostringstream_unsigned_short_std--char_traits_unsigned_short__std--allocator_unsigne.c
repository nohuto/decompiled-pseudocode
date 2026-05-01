/*
 * XREFs of _std::basic_ostringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_ostringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x18075173D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_ostringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_ostringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(*(_QWORD *)(a2 + 48) + 136LL);
  }
  return result;
}
