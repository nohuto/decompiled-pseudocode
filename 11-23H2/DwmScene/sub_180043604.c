/*
 * XREFs of sub_180043604 @ 0x180043604
 * Callers:
 *     sub_1800444F4 @ 0x1800444F4 (sub_1800444F4.c)
 *     sub_180044B58 @ 0x180044B58 (sub_180044B58.c)
 * Callees:
 *     sub_180043690 @ 0x180043690 (sub_180043690.c)
 */

__int64 __fastcall sub_180043604(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _WORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_180043690(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_WORD *)(v6 + 28) )
    return *(_QWORD *)v2;
  return result;
}
