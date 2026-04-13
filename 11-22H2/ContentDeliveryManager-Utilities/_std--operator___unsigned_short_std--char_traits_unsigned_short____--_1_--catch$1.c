/*
 * XREFs of _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::catch$1 @ 0x1800D6E99
 * Callers:
 *     <none>
 * Callees:
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x1800652AC (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 */

__int64 __fastcall std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::basic_ios<unsigned short>::setstate(*(_QWORD *)(a2 + 96) + *(int *)(**(_QWORD **)(a2 + 96) + 4LL), 4, 1);
  return 0LL;
}
