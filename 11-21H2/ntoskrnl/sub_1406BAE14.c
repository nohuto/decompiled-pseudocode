/*
 * XREFs of sub_1406BAE14 @ 0x1406BAE14
 * Callers:
 *     sub_1406BA720 @ 0x1406BA720 (sub_1406BA720.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406BAE14(__int16 a1, int *a2)
{
  unsigned int v2; // r9d
  int v4; // ecx
  int v5; // eax
  int v6; // r10d

  v2 = 0;
  *a2 = 0;
  switch ( (unsigned __int8)a1 )
  {
    case 0x11u:
      *a2 = 17;
      v4 = 529;
      v5 = 273;
      break;
    case 0x12u:
      *a2 = 18;
      v4 = 530;
      v5 = 274;
      break;
    case 0x13u:
      *a2 = 19;
      v4 = 531;
      v5 = 275;
      break;
    case 0x14u:
      *a2 = 20;
      v4 = 532;
      v5 = 276;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  v6 = a1 & 0xFF00;
  if ( v6 )
  {
    if ( v6 == 256 )
    {
      *a2 = v5;
      return v2;
    }
    if ( v6 == 512 )
    {
      *a2 = v4;
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
