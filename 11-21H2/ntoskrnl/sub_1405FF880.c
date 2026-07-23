/*
 * XREFs of sub_1405FF880 @ 0x1405FF880
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_1406423A4 @ 0x1406423A4 (sub_1406423A4.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A90A7C @ 0x140A90A7C (sub_140A90A7C.c)
 */

__int64 __fastcall sub_1405FF880(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !byte_140C1A964 )
    sub_140A8C924(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return sub_140A90A7C(BugCheckParameter2, BugCheckParameter3);
}
