/*
 * XREFs of sub_140652C64 @ 0x140652C64
 * Callers:
 *     sub_140652FB8 @ 0x140652FB8 (sub_140652FB8.c)
 *     sub_140653104 @ 0x140653104 (sub_140653104.c)
 *     sub_140653374 @ 0x140653374 (sub_140653374.c)
 *     sub_1406536F0 @ 0x1406536F0 (sub_1406536F0.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_140652C64(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 result; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( BYTE8(xmmword_140C10CB0) )
  {
    result = a3;
    __outbyte(xmmword_140C10D00 + a2 * BYTE8(xmmword_140C10CA0), a3);
  }
  else
  {
    result = xmmword_140C10D00;
    *(_BYTE *)(BYTE8(xmmword_140C10CA0) * (unsigned int)a2 + (_QWORD)xmmword_140C10D00) = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
