/*
 * XREFs of MincryptAlloc @ 0x140A71D7C
 * Callers:
 *     SymCryptCallbackAlloc @ 0x14067DA50 (SymCryptCallbackAlloc.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall MincryptAlloc(__int64 a1)
{
  return ExAllocatePool2(258LL, a1, 1919109443LL);
}
