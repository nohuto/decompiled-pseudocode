/*
 * XREFs of sub_180070198 @ 0x180070198
 * Callers:
 *     sub_180070348 @ 0x180070348 (sub_180070348.c)
 *     sub_1800DF688 @ 0x1800DF688 (sub_1800DF688.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 */

__int64 __fastcall sub_180070198(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)sub_18001C7FC(a1));
}
