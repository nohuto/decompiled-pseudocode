/*
 * XREFs of sub_1409D08CC @ 0x1409D08CC
 * Callers:
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D23E8 @ 0x1409D23E8 (sub_1409D23E8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409D08CC(unsigned __int16 a1, _BYTE *a2)
{
  char v2; // cl

  if ( (unsigned __int16)(a1 - 48) <= 9u )
  {
    v2 = a1 - 48;
LABEL_3:
    *a2 = v2;
    return 1;
  }
  if ( (unsigned __int16)(a1 - 65) <= 5u )
  {
    v2 = a1 - 55;
    goto LABEL_3;
  }
  if ( a1 < 0x61u )
  {
    if ( a1 == 35 )
    {
      *a2 = 0;
      return 1;
    }
  }
  else if ( a1 <= 0x66u )
  {
    v2 = a1 - 87;
    goto LABEL_3;
  }
  return 0;
}
