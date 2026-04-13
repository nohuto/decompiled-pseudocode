/*
 * XREFs of _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getcat_::_1_::dtor$1 @ 0x1800F0123
 * Callers:
 *     <none>
 * Callees:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18005838C (--1_Locinfo@std@@QEAA@XZ.c)
 */

void __fastcall std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getcat_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    std::_Locinfo::~_Locinfo((std::_Locinfo *)(a2 + 32));
  }
}
