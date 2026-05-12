/*
 * XREFs of sub_1C0023A9C @ 0x1C0023A9C
 * Callers:
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0010160 @ 0x1C0010160 (sub_1C0010160.c)
 *     sub_1C0040FA8 @ 0x1C0040FA8 (sub_1C0040FA8.c)
 *     sub_1C004123C @ 0x1C004123C (sub_1C004123C.c)
 * Callees:
 *     sub_1C00239D4 @ 0x1C00239D4 (sub_1C00239D4.c)
 *     sub_1C0023CD0 @ 0x1C0023CD0 (sub_1C0023CD0.c)
 */

unsigned __int64 __fastcall sub_1C0023A9C(__int64 a1, ULONG_PTR a2)
{
  char v4; // al
  int v5; // r8d
  char v6; // al

  if ( a2 > *(_QWORD *)(a1 + 3376) )
  {
    v4 = sub_1C00239D4(a1);
    ++*(_DWORD *)(a1 + 3388);
    v6 = v4 - 1;
    if ( byte_1C0093BE8 )
    {
      if ( (byte_1C0093A04 & 4) != 0 )
        sub_1C0023CD0(
          a1 + 186,
          a1 + 169,
          v5,
          a1 + 160,
          a1 + 169,
          a1 + 186,
          a2,
          *(_QWORD *)(a1 + 3376),
          *(_DWORD *)(a1 + 868),
          *(_QWORD *)(a1 + 3328),
          *(_DWORD *)(a1 + 3384),
          v6);
    }
    KeBugCheckEx(0x2Cu, 0x141BuLL, a2, *(_QWORD *)(a1 + 3376), 0LL);
  }
  return a2 * *(unsigned int *)(a1 + 868) / *(_QWORD *)(a1 + 3328);
}
