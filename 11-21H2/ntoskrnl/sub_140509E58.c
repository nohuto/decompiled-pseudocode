/*
 * XREFs of sub_140509E58 @ 0x140509E58
 * Callers:
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 */

char __fastcall sub_140509E58(__int64 *a1, _BYTE *a2)
{
  char result; // al
  __int64 v5; // r8

  result = sub_1403AAE50();
  v5 = *a1;
  if ( result == 1 )
  {
    if ( (v5 & 0x2000000000000000LL) == 0 )
    {
      if ( *((_BYTE *)a1 + 8) )
      {
        if ( (v5 & 0x100000000000LL) != 0 )
          a2[1] = 1;
      }
      goto LABEL_15;
    }
    if ( byte_140D016C4 && (v5 & 0x200000000000000LL) == 0 )
      goto LABEL_13;
  }
  else
  {
    if ( result != 2 )
    {
      if ( (v5 & 0x2000000000000000LL) != 0 )
        return result;
      goto LABEL_15;
    }
    if ( (v5 & 0x2000000000000000LL) == 0 )
    {
LABEL_15:
      *a2 = 1;
      return result;
    }
    if ( *((_BYTE *)a1 + 8) )
    {
      result = 0;
      if ( (v5 & 0x300000000000000LL) == 0 )
LABEL_13:
        *(_WORD *)a2 = 257;
    }
  }
  return result;
}
