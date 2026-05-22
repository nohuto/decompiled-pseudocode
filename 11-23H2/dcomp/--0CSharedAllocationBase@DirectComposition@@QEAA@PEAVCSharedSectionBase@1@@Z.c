/*
 * XREFs of ??0CSharedAllocationBase@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z @ 0x1800FB210
 * Callers:
 *     ?Allocate@CCrossContainerHostReadOnlySharedSection@DirectComposition@@QEAAJ_KPEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EC9AC (-Allocate@CCrossContainerHostReadOnlySharedSection@DirectComposition@@QEAAJ_KPEAPEAVCCrossContai.c)
 *     ??0CSharedAllocation@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z @ 0x1800FB190 (--0CSharedAllocation@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z.c)
 * Callees:
 *     ?OnBeforeSynchronizationStateUpdated@CCompositorSynchronizedObject@DirectComposition@@EEAAXW4State@12@@Z @ 0x18008EA00 (-OnBeforeSynchronizationStateUpdated@CCompositorSynchronizedObject@DirectComposition@@EEAAXW4Sta.c)
 */

DirectComposition::CSharedAllocationBase *__fastcall DirectComposition::CSharedAllocationBase::CSharedAllocationBase(
        DirectComposition::CSharedAllocationBase *this,
        struct DirectComposition::CSharedSectionBase *a2)
{
  DirectComposition::CSharedAllocationBase *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DirectComposition::CSharedAllocationBase::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 2) = &DirectComposition::CSharedAllocation::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
  DirectComposition::CCompositorSynchronizedObject::OnBeforeSynchronizationStateUpdated();
  result = this;
  *((_DWORD *)this + 6) = 2;
  return result;
}
