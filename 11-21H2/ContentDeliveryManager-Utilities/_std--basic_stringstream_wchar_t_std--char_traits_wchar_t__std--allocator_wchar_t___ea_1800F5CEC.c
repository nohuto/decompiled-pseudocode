/*
 * XREFs of _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800F5CEC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180057BEC (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

void __fastcall std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>((struct std::ios_base *)(*(_QWORD *)(a2 + 64) + 152LL));
  }
}
