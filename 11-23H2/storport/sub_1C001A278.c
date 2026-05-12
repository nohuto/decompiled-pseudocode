/*
 * XREFs of sub_1C001A278 @ 0x1C001A278
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 * Callees:
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 *     sub_1C000480C @ 0x1C000480C (sub_1C000480C.c)
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 */

char *__fastcall sub_1C001A278(__int64 a1)
{
  KIRQL v2; // di
  char *v3; // rbx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  sub_1C001A2F4(a1);
  v3 = sub_1C00042F0(a1, 0);
  sub_1C000480C(a1);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v2);
  return v3;
}
