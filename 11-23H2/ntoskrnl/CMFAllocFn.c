/*
 * XREFs of CMFAllocFn @ 0x140A01B50
 * Callers:
 *     XpressDecodeCreate @ 0x14067A2B8 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePool2(256LL, a2, 1668114000LL);
}
