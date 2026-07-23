/*
 * XREFs of sub_1406FFEFC @ 0x1406FFEFC
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_140687654 @ 0x140687654 (sub_140687654.c)
 *     sub_140692980 @ 0x140692980 (sub_140692980.c)
 *     sub_1406FF7C4 @ 0x1406FF7C4 (sub_1406FF7C4.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 *     sub_1406FFF24 @ 0x1406FFF24 (sub_1406FFF24.c)
 *     sub_1409ABC00 @ 0x1409ABC00 (sub_1409ABC00.c)
 *     sub_1409B0400 @ 0x1409B0400 (sub_1409B0400.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall sub_1406FFEFC(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
