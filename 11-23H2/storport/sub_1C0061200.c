/*
 * XREFs of sub_1C0061200 @ 0x1C0061200
 * Callers:
 *     sub_1C0036F7C @ 0x1C0036F7C (sub_1C0036F7C.c)
 *     sub_1C0040D18 @ 0x1C0040D18 (sub_1C0040D18.c)
 * Callees:
 *     sub_1C0012FC0 @ 0x1C0012FC0 (sub_1C0012FC0.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 */

void __fastcall sub_1C0061200(__int64 a1, unsigned int a2)
{
  if ( KeSetCoalescableTimer((PKTIMER)(a1 + 1112), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 1176)) )
  {
    if ( (unsigned int)sub_1C0012FC0(a1) )
      sub_1C001A194(a1, 0);
  }
}
