/*
 * XREFs of sub_140299240 @ 0x140299240
 * Callers:
 *     sub_140299150 @ 0x140299150 (sub_140299150.c)
 *     sub_140299FBC @ 0x140299FBC (sub_140299FBC.c)
 * Callees:
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 */

char __fastcall sub_140299240(__int64 a1)
{
  unsigned int v2; // ebx
  char result; // al

  v2 = 0;
  while ( 1 )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
    if ( (++v2 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && (unsigned __int8)sub_14039EA10() )
      sub_14039D930(v2);
    else
      _mm_pause();
  }
  return result;
}
