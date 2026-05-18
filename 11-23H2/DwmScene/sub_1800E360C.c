/*
 * XREFs of sub_1800E360C @ 0x1800E360C
 * Callers:
 *     sub_1800E20F0 @ 0x1800E20F0 (sub_1800E20F0.c)
 *     sub_1800E2460 @ 0x1800E2460 (sub_1800E2460.c)
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 * Callees:
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 */

char __fastcall sub_1800E360C(unsigned int a1, const char *a2)
{
  if ( a1 > 0x4000000 )
  {
    sub_18001DB68(&stru_1801C8648, 3, "%s cannot process more than %u vertices (requested: %u)", a2, 0x4000000, a1);
    return 0;
  }
  if ( !a1 )
  {
    sub_18001DB68(&stru_1801C8648, 3, "%s cannot process zero vertices", a2);
    return 0;
  }
  return 1;
}
