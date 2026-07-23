/*
 * XREFs of sub_140359140 @ 0x140359140
 * Callers:
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_140359020 @ 0x140359020 (sub_140359020.c)
 * Callees:
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 */

_QWORD *__fastcall sub_140359140(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  volatile signed __int16 *v7; // rbp
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF

  for ( result = (_QWORD *)*a1; *a1; result = (_QWORD *)*a1 )
  {
    v7 = (volatile signed __int16 *)(result - 101);
    *a1 = *result;
    *result = 1LL;
    _InterlockedOr(v8, 0);
    if ( *((_BYTE *)result - 15) )
      sub_1403591D8((_DWORD)result - 808, 0, 1, 0, a3, (__int64)a1, a2);
    _InterlockedDecrement16(v7 + 434);
  }
  return result;
}
