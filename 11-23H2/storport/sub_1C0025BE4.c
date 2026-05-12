/*
 * XREFs of sub_1C0025BE4 @ 0x1C0025BE4
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C003AB20 @ 0x1C003AB20 (sub_1C003AB20.c)
 *     Callback @ 0x1C003D660 (Callback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0025BE4(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
