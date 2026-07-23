/*
 * XREFs of sub_1405CBF94 @ 0x1405CBF94
 * Callers:
 *     sub_1403B1020 @ 0x1403B1020 (sub_1403B1020.c)
 *     sub_1403B5584 @ 0x1403B5584 (sub_1403B5584.c)
 *     PoFxCompleteDirectedPowerDown @ 0x1405CA710 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CBD34 @ 0x1405CBD34 (sub_1405CBD34.c)
 */

LONG __fastcall sub_1405CBF94(ULONG_PTR BugCheckParameter3, char a2)
{
  LONG result; // eax

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 824), 0, 0) & 0x20) == 0 )
    sub_1405CAE6C(0x910uLL, 1uLL, BugCheckParameter3, 0LL);
  result = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 1160));
  if ( !result )
    return sub_1405CBD34(BugCheckParameter3, a2);
  if ( result < 0 )
    sub_1405CAE6C(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  return result;
}
