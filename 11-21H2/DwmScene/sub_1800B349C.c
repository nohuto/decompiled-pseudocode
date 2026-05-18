/*
 * XREFs of sub_1800B349C @ 0x1800B349C
 * Callers:
 *     sub_18002F3B0 @ 0x18002F3B0 (sub_18002F3B0.c)
 * Callees:
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 */

_BYTE *__fastcall sub_1800B349C(__int64 a1, char a2)
{
  __int64 v2; // r8
  _BYTE *result; // rax
  char v4; // dl
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_1800441E4((__int64)&v5);
  result = (_BYTE *)sub_1800441CC(v2 + 184);
  *result = v4;
  return result;
}
