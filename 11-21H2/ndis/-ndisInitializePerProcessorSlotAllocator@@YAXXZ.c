/*
 * XREFs of ?ndisInitializePerProcessorSlotAllocator@@YAXXZ @ 0x1C0154D98
 * Callers:
 *     NdisDllInitialize @ 0x1C0031100 (NdisDllInitialize.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00311B4 (ndisAllocatePerProcessorPageDescriptor.c)
 */

void ndisInitializePerProcessorSlotAllocator(void)
{
  _LIST_ENTRY *PerProcessorPageDescriptor; // rax
  _LIST_ENTRY *Flink; // rcx

  KeInitializeSpinLock(&ndisPerProcessorDescriptorLock);
  qword_1C00ECE38 = (__int64)&ndisPerProcessorDescriptorList;
  ndisPerProcessorDescriptorList.Flink = &ndisPerProcessorDescriptorList;
  PerProcessorPageDescriptor = (_LIST_ENTRY *)ndisAllocatePerProcessorPageDescriptor();
  if ( PerProcessorPageDescriptor )
  {
    Flink = ndisPerProcessorDescriptorList.Flink;
    if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
      __fastfail(3u);
    PerProcessorPageDescriptor->Flink = ndisPerProcessorDescriptorList.Flink;
    PerProcessorPageDescriptor->Blink = &ndisPerProcessorDescriptorList;
    Flink->Blink = PerProcessorPageDescriptor;
    ndisPerProcessorDescriptorList.Flink = PerProcessorPageDescriptor;
  }
}
