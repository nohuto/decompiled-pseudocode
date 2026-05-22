/*
 * XREFs of ??_ECSharedAllocationBase@DirectComposition@@MEAAPEAXI@Z @ 0x1800FB1D0
 * Callers:
 *     ??_ECSharedAllocation@DirectComposition@@GBA@EAAPEAXI@Z @ 0x1800A9110 (--_ECSharedAllocation@DirectComposition@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::CSharedAllocationBase *__fastcall DirectComposition::CSharedAllocationBase::`vector deleting destructor'(
        DirectComposition::CSharedAllocationBase *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedAllocationBase::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 2) = &DirectComposition::CCompositorSynchronizedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
