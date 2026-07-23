/*
 * XREFs of sub_1403B78C4 @ 0x1403B78C4
 * Callers:
 *     sub_1403B770C @ 0x1403B770C (sub_1403B770C.c)
 *     sub_1403B790C @ 0x1403B790C (sub_1403B790C.c)
 *     sub_1405827E0 @ 0x1405827E0 (sub_1405827E0.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_140AF5478 @ 0x140AF5478 (sub_140AF5478.c)
 * Callees:
 *     sub_14023073C @ 0x14023073C (sub_14023073C.c)
 */

__int64 __fastcall sub_1403B78C4(int a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // ecx

  v2 = 0;
  if ( !a1 )
  {
    if ( (unsigned int)sub_14023073C(a2) )
    {
      return 1;
    }
    else
    {
      v4 = v3;
      if ( (dword_140D0689C & 0x200000) != 0 )
        return 1;
      return v4;
    }
  }
  return v2;
}
