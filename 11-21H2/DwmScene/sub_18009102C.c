/*
 * XREFs of sub_18009102C @ 0x18009102C
 * Callers:
 *     sub_18004A1EC @ 0x18004A1EC (sub_18004A1EC.c)
 *     sub_180090D2C @ 0x180090D2C (sub_180090D2C.c)
 * Callees:
 *     sub_18008F5A4 @ 0x18008F5A4 (sub_18008F5A4.c)
 */

__int64 __fastcall sub_18009102C(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r9

  result = sub_18008F5A4(a1, a2);
  for ( i = 0LL; i < 0x10; ++i )
    *(_DWORD *)(result + 4 * i) = *(_DWORD *)(a3 + 4 * i);
  return result;
}
