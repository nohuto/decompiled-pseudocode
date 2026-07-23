/*
 * XREFs of sub_14023EE1C @ 0x14023EE1C
 * Callers:
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023EE1C(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = *(_DWORD *)(a1 + 80);
  v3 = 0;
  if ( (v2 & 0x2000000) != 0 && !*(_BYTE *)(a2 + 65) )
    return (*(_DWORD *)(a2 + 48) & 0xC0000000) != 0x80000000;
  return v3;
}
