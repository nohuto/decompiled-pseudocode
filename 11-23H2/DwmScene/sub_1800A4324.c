/*
 * XREFs of sub_1800A4324 @ 0x1800A4324
 * Callers:
 *     sub_1800A4164 @ 0x1800A4164 (sub_1800A4164.c)
 * Callees:
 *     sub_18003ADB0 @ 0x18003ADB0 (sub_18003ADB0.c)
 *     sub_1800A4554 @ 0x1800A4554 (sub_1800A4554.c)
 */

__int64 __fastcall sub_1800A4324(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r11

  if ( (unsigned __int8)sub_1800A4554(a1, a2, a1) )
    sub_18003ADB0();
  result = sub_1800A4554(v4, a3, v5);
  if ( (_BYTE)result )
  {
    sub_18003ADB0();
    result = sub_1800A4554(v8, v7, v9);
    if ( (_BYTE)result )
      return sub_18003ADB0();
  }
  return result;
}
