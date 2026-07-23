/*
 * XREFs of sub_140652C28 @ 0x140652C28
 * Callers:
 *     sub_140652FB8 @ 0x140652FB8 (sub_140652FB8.c)
 *     sub_140653104 @ 0x140653104 (sub_140653104.c)
 *     sub_140653374 @ 0x140653374 (sub_140653374.c)
 *     sub_14065355C @ 0x14065355C (sub_14065355C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_140652C28(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140C10CB0) )
    return __inbyte(xmmword_140C10D00 + a2 * BYTE8(xmmword_140C10CA0));
  else
    return *(_BYTE *)(xmmword_140C10D00 + BYTE8(xmmword_140C10CA0) * (unsigned int)a2);
}
