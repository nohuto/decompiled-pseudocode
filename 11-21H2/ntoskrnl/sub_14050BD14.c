/*
 * XREFs of sub_14050BD14 @ 0x14050BD14
 * Callers:
 *     sub_1403A54E0 @ 0x1403A54E0 (sub_1403A54E0.c)
 * Callees:
 *     sub_14050BD94 @ 0x14050BD94 (sub_14050BD94.c)
 */

__int64 __fastcall sub_14050BD14(int a1, unsigned __int16 a2)
{
  int v3; // esi
  unsigned int v4; // edi
  int v5; // ebx

  v3 = a2;
  v4 = (unsigned __int8)sub_14050BD94(a2);
  if ( a1 > 0 )
  {
    v4 |= (unsigned __int8)sub_14050BD94((unsigned int)(v3 + 1)) << 8;
    if ( a1 > 1 )
    {
      v5 = (unsigned __int8)sub_14050BD94((unsigned int)(v3 + 3)) << 8;
      v4 |= (v5 | (unsigned __int8)sub_14050BD94((unsigned int)(v3 + 2))) << 16;
    }
  }
  return v4;
}
