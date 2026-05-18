/*
 * XREFs of sub_180058640 @ 0x180058640
 * Callers:
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 * Callees:
 *     sub_18002F09C @ 0x18002F09C (sub_18002F09C.c)
 */

__int64 *__fastcall sub_180058640(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_18002F09C(a1, (__int64)v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *(_QWORD *)(a3 + 8) < *(_QWORD *)(v9 + 40) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
