/*
 * XREFs of sub_1409A371C @ 0x1409A371C
 * Callers:
 *     sub_1409A4AE0 @ 0x1409A4AE0 (sub_1409A4AE0.c)
 * Callees:
 *     sub_1409A3648 @ 0x1409A3648 (sub_1409A3648.c)
 *     sub_1409A39F8 @ 0x1409A39F8 (sub_1409A39F8.c)
 *     sub_1409A3A54 @ 0x1409A3A54 (sub_1409A3A54.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A371C(__int64 a1, unsigned int *a2, unsigned int a3, int a4)
{
  char v5; // r8
  unsigned int v6; // ebx
  int v7; // r9d

  v5 = 0;
  v6 = 0;
  if ( !a4 )
  {
    if ( a3 == 22 )
    {
      sub_1409A39F8();
      return v6;
    }
    goto LABEL_7;
  }
  v7 = a4 - 1;
  if ( !v7 )
  {
    if ( a3 == 22 )
    {
      sub_1409A3A54(a1, a2, 0LL);
      return v6;
    }
LABEL_6:
    v5 = 1;
LABEL_7:
    sub_1409A3648(a1, a2, v5, a3, 0x434D6553u);
    return v6;
  }
  if ( v7 == 1 )
  {
    if ( a2[69] - 2 <= 1 )
      return 255;
    goto LABEL_6;
  }
  v6 = -1073741811;
  sub_1409A8628("TtmiTerminalMonitorControl", 1497LL, 0xFFFFFFFFLL, 3221225485LL);
  return v6;
}
