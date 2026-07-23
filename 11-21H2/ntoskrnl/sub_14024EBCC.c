/*
 * XREFs of sub_14024EBCC @ 0x14024EBCC
 * Callers:
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 *     sub_14053D400 @ 0x14053D400 (sub_14053D400.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14024EBCC(_BYTE *a1, unsigned int a2)
{
  char result; // al
  bool v3; // zf

  result = 0;
  if ( a2 )
  {
    if ( a2 > 2 )
    {
      if ( a2 == 4 )
      {
LABEL_4:
        if ( a1[68] )
          return 1;
        v3 = a1[67] == 0;
LABEL_6:
        if ( v3 )
          return result;
        return 1;
      }
      if ( a2 == 8 )
        return a1[67];
      if ( a2 != 16 )
      {
        if ( a2 != 32 )
          return result;
        goto LABEL_4;
      }
    }
    if ( a1[69] || a1[70] )
      return 1;
    v3 = a1[71] == 0;
    goto LABEL_6;
  }
  return result;
}
