/*
 * XREFs of sub_18003194C @ 0x18003194C
 * Callers:
 *     sub_18002E4C4 @ 0x18002E4C4 (sub_18002E4C4.c)
 * Callees:
 *     sub_180031B70 @ 0x180031B70 (sub_180031B70.c)
 */

__int64 __fastcall sub_18003194C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180031B70(v2 + 32);
  return sub_180031770(a1);
}
