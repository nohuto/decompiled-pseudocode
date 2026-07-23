/*
 * XREFs of sub_1406E47F0 @ 0x1406E47F0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E47F0(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ecx

  v4 = 0;
  *a4 = 0;
  if ( a3 < 0x28 )
  {
    v4 = -1073741789;
  }
  else
  {
    *a2 = dword_140C46D8C;
    a2[1] = dword_140C46D88;
    a2[2] = dword_140C46D84;
    a2[3] = dword_140C46D08;
    a2[4] = dword_140C46D04;
    a2[5] = dword_140C46D0C;
    a2[6] = dword_140C46D10;
    a2[7] = dword_140C46D64;
    a2[8] = dword_140C46D60;
    a2[9] = dword_140C46D68;
  }
  *a4 = 40;
  return v4;
}
