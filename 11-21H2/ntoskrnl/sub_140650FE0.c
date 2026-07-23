/*
 * XREFs of sub_140650FE0 @ 0x140650FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140652250 @ 0x140652250 (sub_140652250.c)
 */

__int64 __fastcall sub_140650FE0(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  *a3 = 0;
  if ( a2 > 14 )
  {
    switch ( a2 )
    {
      case 21:
        *a3 = 24;
        return v3;
      case 57:
        *a3 = 264;
        return v3;
      case 58:
        *a3 = 36;
        return v3;
      case 60:
        *a3 = 48;
        return v3;
      case 65:
        *a3 = 16;
        return v3;
    }
    return (unsigned int)sub_140652250(a1);
  }
  switch ( a2 )
  {
    case 14:
      *a3 = 32;
      return v3;
    case 4:
    case 6:
      *a3 = 28;
      return v3;
    case 7:
    case 8:
      *a3 = 12;
      return v3;
  }
  if ( a2 != 11 )
    return (unsigned int)sub_140652250(a1);
  *a3 = 40;
  return v3;
}
