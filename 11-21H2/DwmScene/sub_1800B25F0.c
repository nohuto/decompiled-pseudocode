/*
 * XREFs of sub_1800B25F0 @ 0x1800B25F0
 * Callers:
 *     sub_180034AD8 @ 0x180034AD8 (sub_180034AD8.c)
 * Callees:
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 */

_BYTE *__fastcall sub_1800B25F0(__int64 a1, char a2)
{
  __int64 v2; // r8
  _BYTE *result; // rax
  char v4; // dl
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_1800441E4((__int64)&v5);
  result = (_BYTE *)sub_1800441CC(v2 + 8);
  *result = v4;
  return result;
}
