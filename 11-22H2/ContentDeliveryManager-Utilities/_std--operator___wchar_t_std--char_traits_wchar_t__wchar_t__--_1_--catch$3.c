/*
 * XREFs of _std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::catch$3 @ 0x1800DD515
 * Callers:
 *     <none>
 * Callees:
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x1800652AC (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 */

__int64 __fastcall std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::catch_3(__int64 a1, __int64 a2)
{
  std::basic_ios<unsigned short>::setstate(*(_QWORD *)(a2 + 176) + *(int *)(**(_QWORD **)(a2 + 176) + 4LL), 4, 1);
  return 0LL;
}
