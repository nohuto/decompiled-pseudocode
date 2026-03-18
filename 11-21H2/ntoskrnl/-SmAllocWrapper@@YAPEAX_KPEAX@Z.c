/*
 * XREFs of ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x1403DF64C
 * Callers:
 *     SmpKeyedStoreEntryGet @ 0x1402A1124 (SmpKeyedStoreEntryGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAllocWrapper(SIZE_T NumberOfBytes, ULONG *a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, *a2);
}
