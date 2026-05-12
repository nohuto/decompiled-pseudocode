/*
 * XREFs of sub_1C0039708 @ 0x1C0039708
 * Callers:
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 *     sub_1C003576C @ 0x1C003576C (sub_1C003576C.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 * Callees:
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 */

BOOLEAN __fastcall sub_1C0039708(__int64 a1, struct _KTIMER *a2, struct _KDPC *Dpc, unsigned int a4)
{
  BOOLEAN v5; // di

  v5 = KeSetCoalescableTimer(a2, (LARGE_INTEGER)(-10000000LL * a4), 0, 0, Dpc);
  if ( v5 && !(unsigned int)sub_1C0019D54(a1) )
    sub_1C0019ED0(a1, 0LL);
  return v5;
}
