/*
 * XREFs of sub_180070704 @ 0x180070704
 * Callers:
 *     sub_1800702D0 @ 0x1800702D0 (sub_1800702D0.c)
 *     sub_180070348 @ 0x180070348 (sub_180070348.c)
 * Callees:
 *     sub_180010AF8 @ 0x180010AF8 (sub_180010AF8.c)
 */

__int64 *__fastcall sub_180070704(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_180010AF8(a1, (__int64)v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
