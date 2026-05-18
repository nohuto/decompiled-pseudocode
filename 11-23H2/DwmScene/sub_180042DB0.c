/*
 * XREFs of sub_180042DB0 @ 0x180042DB0
 * Callers:
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_1800DB8E0 @ 0x1800DB8E0 (sub_1800DB8E0.c)
 * Callees:
 *     sub_18003F230 @ 0x18003F230 (sub_18003F230.c)
 *     sub_18003F248 @ 0x18003F248 (sub_18003F248.c)
 */

_BYTE *__fastcall sub_180042DB0(__int64 a1, char a2)
{
  __int64 v2; // r8
  _BYTE *result; // rax
  char v4; // dl
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_18003F248((__int64)&v5);
  result = (_BYTE *)sub_18003F230(v2);
  *result = v4;
  return result;
}
