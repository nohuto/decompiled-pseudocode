/*
 * XREFs of sub_1C0034B20 @ 0x1C0034B20
 * Callers:
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 *     sub_1C00353FC @ 0x1C00353FC (sub_1C00353FC.c)
 * Callees:
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 */

BOOLEAN __fastcall sub_1C0034B20(__int64 a1, struct _KTIMER *a2)
{
  BOOLEAN v3; // bl

  v3 = KeCancelTimer(a2);
  if ( v3 && !(unsigned int)sub_1C0019D54(a1) )
    sub_1C0019ED0(a1, 0LL);
  return v3;
}
