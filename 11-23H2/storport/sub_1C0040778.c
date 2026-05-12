/*
 * XREFs of sub_1C0040778 @ 0x1C0040778
 * Callers:
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C001FFFC @ 0x1C001FFFC (sub_1C001FFFC.c)
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 * Callees:
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 *     sub_1C00414AC @ 0x1C00414AC (sub_1C00414AC.c)
 */

void __fastcall sub_1C0040778(__int64 a1, unsigned int a2)
{
  KIRQL v4; // bl

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  sub_1C001A2F4((struct _EX_RUNDOWN_REF *)a1);
  sub_1C00414AC(a1, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
