/*
 * XREFs of ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x1403B6D9C
 * Callers:
 *     SmpKeyedStoreEntryGet @ 0x140344D74 (SmpKeyedStoreEntryGet.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SmAllocWrapper(__int64 a1, unsigned int *a2)
{
  return ExAllocatePool2(64LL, a1, *a2);
}
