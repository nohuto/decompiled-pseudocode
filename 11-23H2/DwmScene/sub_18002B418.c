/*
 * XREFs of sub_18002B418 @ 0x18002B418
 * Callers:
 *     sub_18002BFA0 @ 0x18002BFA0 (sub_18002BFA0.c)
 *     sub_18002E6B4 @ 0x18002E6B4 (sub_18002E6B4.c)
 *     sub_180035B90 @ 0x180035B90 (sub_180035B90.c)
 *     sub_1800445E8 @ 0x1800445E8 (sub_1800445E8.c)
 *     sub_18004AF90 @ 0x18004AF90 (sub_18004AF90.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_18005EE28 @ 0x18005EE28 (sub_18005EE28.c)
 *     sub_180072240 @ 0x180072240 (sub_180072240.c)
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002B418(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2[1] )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a1;
}
