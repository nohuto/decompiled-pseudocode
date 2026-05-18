/*
 * XREFs of sub_180085F38 @ 0x180085F38
 * Callers:
 *     sub_180084D80 @ 0x180084D80 (sub_180084D80.c)
 *     sub_18008C164 @ 0x18008C164 (sub_18008C164.c)
 *     sub_18008C3B4 @ 0x18008C3B4 (sub_18008C3B4.c)
 *     sub_1800D0508 @ 0x1800D0508 (sub_1800D0508.c)
 * Callees:
 *     sub_180043640 @ 0x180043640 (sub_180043640.c)
 */

__int64 *__fastcall sub_180085F38(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_180043640(a1, (__int64)v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_DWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
