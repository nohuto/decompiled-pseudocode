/*
 * XREFs of sub_1C0037E2C @ 0x1C0037E2C
 * Callers:
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_1C0037E2C(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KTIMER *v4; // rcx

  v4 = (struct _KTIMER *)(a1 + 1520);
  if ( !a3 )
    return KeCancelTimer(v4);
  *(_QWORD *)(a1 + 1776) = a2;
  return KeSetCoalescableTimer(v4, (LARGE_INTEGER)(-10LL * a3), 0, 0, (PKDPC)(a1 + 1456));
}
