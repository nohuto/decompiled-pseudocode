/*
 * XREFs of sub_180011C00 @ 0x180011C00
 * Callers:
 *     sub_180010794 @ 0x180010794 (sub_180010794.c)
 *     sub_180015F5C @ 0x180015F5C (sub_180015F5C.c)
 *     sub_1800247C8 @ 0x1800247C8 (sub_1800247C8.c)
 *     sub_1800249DC @ 0x1800249DC (sub_1800249DC.c)
 *     sub_1800541A8 @ 0x1800541A8 (sub_1800541A8.c)
 *     sub_18006EED4 @ 0x18006EED4 (sub_18006EED4.c)
 *     sub_180083D68 @ 0x180083D68 (sub_180083D68.c)
 *     sub_180085FFC @ 0x180085FFC (sub_180085FFC.c)
 *     sub_180087FDC @ 0x180087FDC (sub_180087FDC.c)
 *     sub_18008912C @ 0x18008912C (sub_18008912C.c)
 *     sub_1800899E4 @ 0x1800899E4 (sub_1800899E4.c)
 *     sub_180089C74 @ 0x180089C74 (sub_180089C74.c)
 *     sub_180089DB4 @ 0x180089DB4 (sub_180089DB4.c)
 *     sub_180089EF4 @ 0x180089EF4 (sub_180089EF4.c)
 *     sub_18008A034 @ 0x18008A034 (sub_18008A034.c)
 *     sub_18008A174 @ 0x18008A174 (sub_18008A174.c)
 *     sub_18008BA00 @ 0x18008BA00 (sub_18008BA00.c)
 * Callees:
 *     sub_180010AF8 @ 0x180010AF8 (sub_180010AF8.c)
 */

__int64 *__fastcall sub_180011C00(__int64 *a1, __int64 a2, unsigned __int64 *a3)
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
