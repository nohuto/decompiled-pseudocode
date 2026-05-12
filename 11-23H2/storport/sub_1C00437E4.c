/*
 * XREFs of sub_1C00437E4 @ 0x1C00437E4
 * Callers:
 *     sub_1C0008ED0 @ 0x1C0008ED0 (sub_1C0008ED0.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C000A850 @ 0x1C000A850 (sub_1C000A850.c)
 *     sub_1C003DD30 @ 0x1C003DD30 (sub_1C003DD30.c)
 * Callees:
 *     sub_1C0010160 @ 0x1C0010160 (sub_1C0010160.c)
 *     sub_1C004123C @ 0x1C004123C (sub_1C004123C.c)
 */

void __fastcall sub_1C00437E4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (*(_BYTE *)(a1 + 128) & 2) != 0 )
  {
    v6 = 0;
    if ( sub_1C0010160(a1, a2, a3, &v6) )
    {
      RtlInterlockedClearBitRun(a1 + 3360, v6, 1LL);
      sub_1C004123C(a1 + 656, a2, a3);
    }
  }
}
