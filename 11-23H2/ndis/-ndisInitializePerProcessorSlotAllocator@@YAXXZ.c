/*
 * XREFs of ?ndisInitializePerProcessorSlotAllocator@@YAXXZ @ 0x1C0162A3C
 * Callers:
 *     NdisDllInitialize @ 0x1C0031B90 (NdisDllInitialize.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0032568 (ndisAllocatePerProcessorPageDescriptor.c)
 */

void ndisInitializePerProcessorSlotAllocator(void)
{
  _LIST_ENTRY *PerProcessorPageDescriptor; // rax
  _LIST_ENTRY *Flink; // rcx

  KeInitializeSpinLock(&ndisPerProcessorDescriptorLock);
  qword_1C00F5E40 = (__int64)&ndisPerProcessorDescriptorList;
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
