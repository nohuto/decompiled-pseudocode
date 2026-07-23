/*
 * XREFs of sub_14039DA34 @ 0x14039DA34
 * Callers:
 *     sub_1402171FC @ 0x1402171FC (sub_1402171FC.c)
 *     sub_14039D960 @ 0x14039D960 (sub_14039D960.c)
 *     sub_1403AD034 @ 0x1403AD034 (sub_1403AD034.c)
 * Callees:
 *     sub_14039DA74 @ 0x14039DA74 (sub_14039DA74.c)
 *     sub_14039DECC @ 0x14039DECC (sub_14039DECC.c)
 *     sub_14054CB14 @ 0x14054CB14 (sub_14054CB14.c)
 *     sub_14054CE04 @ 0x14054CE04 (sub_14054CE04.c)
 *     sub_14054CEAC @ 0x14054CEAC (sub_14054CEAC.c)
 */

__int64 __fastcall sub_14039DA34(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a1;
  if ( a2 && (unsigned __int8)sub_14039DECC(a1, a2, a3, a1) )
  {
    if ( ((dword_140D0688C >> 8) & 0xF) + 5 > 0xE || (dword_140D0689C & 0x80u) == 0 )
      return sub_14054CEAC(v3);
    else
      return sub_14054CB14(v3);
  }
  else if ( (dword_140D0689C & 0x80u) == 0 )
  {
    return sub_14054CE04(v3);
  }
  else
  {
    return sub_14039DA74(v3);
  }
}
