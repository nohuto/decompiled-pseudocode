/*
 * XREFs of sub_14051AC2C @ 0x14051AC2C
 * Callers:
 *     sub_1403BB820 @ 0x1403BB820 (sub_1403BB820.c)
 *     sub_1405284B0 @ 0x1405284B0 (sub_1405284B0.c)
 *     sub_1405286D0 @ 0x1405286D0 (sub_1405286D0.c)
 *     sub_1405287F0 @ 0x1405287F0 (sub_1405287F0.c)
 *     sub_140528B30 @ 0x140528B30 (sub_140528B30.c)
 * Callees:
 *     sub_140527A68 @ 0x140527A68 (sub_140527A68.c)
 *     sub_140529F08 @ 0x140529F08 (sub_140529F08.c)
 */

__int64 __fastcall sub_14051AC2C(ULONG_PTR a1, int a2, int a3, __int64 a4, ULONG_PTR a5)
{
  if ( !byte_140C4BCBC || *(_BYTE *)(a1 + 52) )
    return sub_140529F08(0, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return sub_140527A68(a1, a5);
}
