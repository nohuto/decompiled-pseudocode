/*
 * XREFs of sub_14068EF5C @ 0x14068EF5C
 * Callers:
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 * Callees:
 *     sub_140689BB8 @ 0x140689BB8 (sub_140689BB8.c)
 */

unsigned __int64 __fastcall sub_14068EF5C(unsigned int *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  int v5; // r11d
  unsigned __int64 v6; // r8
  char v7; // si

  v4 = a3;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( v4 == a4 )
    return a4;
  if ( a2 )
  {
    if ( (unsigned int)(a2 - 4) <= 1 || a2 == 1 )
      v6 = (unsigned int)sub_140689BB8(a1);
  }
  else
  {
    v6 = 0x40000LL;
    if ( (a1[1028] & 0x80u) != 0 || !v4 && a4 <= 0x40000 )
      v7 = 1;
    v5 = v7 != 0 ? 4096 : 0x40000;
  }
  if ( !v4 || a4 > v6 || v4 >= a4 || v7 )
  {
    v4 = a4;
  }
  else
  {
    if ( !a2 )
      v5 = 4096;
    while ( 1 )
    {
      v4 *= 2LL;
      if ( v4 > v6 )
        break;
      if ( v4 >= a4 )
        goto LABEL_15;
    }
    v4 = v6;
  }
LABEL_15:
  if ( v5 )
    return -v5 & (unsigned int)(v5 + v4 - 1);
  return v4;
}
