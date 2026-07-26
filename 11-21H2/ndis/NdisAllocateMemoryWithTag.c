/*
 * XREFs of NdisAllocateMemoryWithTag @ 0x1C0025C40
 * Callers:
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00CB660 (Duplicate802_11AttachAttributesCommon.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateMemoryWithTag(PVOID *VirtualAddress, UINT Length, ULONG Tag)
{
  void *Pool2; // rax

  if ( !Tag )
    Tag = 1835091022;
  Pool2 = (void *)ExAllocatePool2(66LL, Length, Tag);
  *VirtualAddress = Pool2;
  return Pool2 == 0LL ? 0xC0000001 : 0;
}
