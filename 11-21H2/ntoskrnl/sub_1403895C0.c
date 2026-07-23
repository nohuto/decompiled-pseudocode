/*
 * XREFs of sub_1403895C0 @ 0x1403895C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403895EC @ 0x1403895EC (sub_1403895EC.c)
 */

char __fastcall sub_1403895C0(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  v4 = sub_1403895EC();
  if ( *a3 >= 0 && v4 < 0 )
    *a3 = v4;
  return 1;
}
