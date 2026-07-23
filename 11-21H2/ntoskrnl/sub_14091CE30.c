/*
 * XREFs of sub_14091CE30 @ 0x14091CE30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_14069E21C @ 0x14069E21C (sub_14069E21C.c)
 */

__int64 __fastcall sub_14091CE30(ULONG_PTR a1, __int64 a2, unsigned int *a3)
{
  sub_14069E21C(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    sub_14067EDC0(a1, a2);
    sub_14067EE40(a1, *a3, a2, 1);
    sub_14067EB68(a1);
  }
  return 0LL;
}
