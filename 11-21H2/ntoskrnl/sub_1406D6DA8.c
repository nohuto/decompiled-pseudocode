/*
 * XREFs of sub_1406D6DA8 @ 0x1406D6DA8
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 * Callees:
 *     sub_14066D068 @ 0x14066D068 (sub_14066D068.c)
 */

__int64 __fastcall sub_1406D6DA8(__int64 a1, __int64 a2, char a3, char a4, unsigned __int8 a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( (a4 & 4) != 0
    && a3
    && (*(_DWORD *)(a2 + 4) & 0x800) == 0
    && (dword_140A38E04[3 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 2170) >> 4)] & 0x40) != 0
    && !sub_14066D068(a5, *(_BYTE *)(a1 + 2170)) )
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
