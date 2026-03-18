/*
 * XREFs of CMFAllocFn @ 0x140A018C0
 * Callers:
 *     XpressDecodeCreate @ 0x140679D68 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePool2(256LL, a2, 1668114000LL);
}
