/*
 * XREFs of sub_14051C1B8 @ 0x14051C1B8
 * Callers:
 *     sub_14051C090 @ 0x14051C090 (sub_14051C090.c)
 * Callees:
 *     sub_14051C2D8 @ 0x14051C2D8 (sub_14051C2D8.c)
 */

__int64 __fastcall sub_14051C1B8(__int64 *a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  char v4; // r8
  __int64 v5; // rcx

  v2 = -1073741637;
  if ( a1 )
  {
    v3 = *a1;
    if ( (*a1 & 2) != 0 && (v3 & 0x4000) != 0 )
    {
      v4 = *((_BYTE *)a1 + 9);
      if ( v4 == 4 || v4 == 26 )
      {
        v5 = a1[2];
        if ( (v3 & 4) != 0 )
          v5 &= a1[3];
        return (unsigned int)sub_14051C2D8(v5, 0, 0, 0, 61184, 0, 1, 0);
      }
    }
  }
  return v2;
}
