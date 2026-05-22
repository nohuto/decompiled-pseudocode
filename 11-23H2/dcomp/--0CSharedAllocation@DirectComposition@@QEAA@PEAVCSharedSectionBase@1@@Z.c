/*
 * XREFs of ??0CSharedAllocation@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z @ 0x1800FB190
 * Callers:
 *     ?AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800EDA14 (-AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCShar.c)
 * Callees:
 *     ??0CSharedAllocationBase@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z @ 0x1800FB210 (--0CSharedAllocationBase@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z.c)
 */

DirectComposition::CSharedAllocation *__fastcall DirectComposition::CSharedAllocation::CSharedAllocation(
        DirectComposition::CSharedAllocation *this,
        struct DirectComposition::CSharedSectionBase *a2)
{
  DirectComposition::CSharedAllocationBase::CSharedAllocationBase(this, a2);
  *(_QWORD *)this = &DirectComposition::CSharedAllocation::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 2) = &DirectComposition::CSharedAllocation::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
  return this;
}
