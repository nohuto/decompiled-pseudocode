/*
 * XREFs of sub_140578414 @ 0x140578414
 * Callers:
 *     sub_140578254 @ 0x140578254 (sub_140578254.c)
 * Callees:
 *     sub_1402FE1C4 @ 0x1402FE1C4 (sub_1402FE1C4.c)
 */

__int64 __fastcall sub_140578414(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_WORD *)(a2 + 8);
  *(_QWORD *)&v4 = *(_QWORD *)a2 & *(_QWORD *)(a1 + 64);
  *((_QWORD *)&v4 + 1) = v2;
  if ( (_QWORD)v4 )
    return sub_1402FE1C4(&v4);
  else
    return 0xFFFFFFFFLL;
}
