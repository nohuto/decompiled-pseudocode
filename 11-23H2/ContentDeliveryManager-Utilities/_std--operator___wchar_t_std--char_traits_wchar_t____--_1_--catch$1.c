/*
 * XREFs of _std::operator___wchar_t_std::char_traits_wchar_t____::_1_::catch$1 @ 0x1800D975A
 * Callers:
 *     <none>
 * Callees:
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18006525C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 */

__int64 __fastcall std::operator___wchar_t_std::char_traits_wchar_t____::_1_::catch_1(__int64 a1, __int64 a2)
{
  std::basic_ios<unsigned short>::setstate(*(_QWORD *)(a2 + 96) + *(int *)(**(_QWORD **)(a2 + 96) + 4LL), 4, 1);
  return 0LL;
}
