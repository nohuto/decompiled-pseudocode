/*
 * XREFs of ??_ECCrossContainerHostReadOnlySharedAllocation@DirectComposition@@UEAAPEAXI@Z @ 0x1800EC8B0
 * Callers:
 *     ??_ECCrossContainerHostReadOnlySharedAllocation@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1800A8310 (--_ECCrossContainerHostReadOnlySharedAllocation@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::CCrossContainerHostReadOnlySharedAllocation *__fastcall DirectComposition::CCrossContainerHostReadOnlySharedAllocation::`vector deleting destructor'(
        DirectComposition::CCrossContainerHostReadOnlySharedAllocation *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedAllocationBase::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 2) = &DirectComposition::CCompositorSynchronizedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
