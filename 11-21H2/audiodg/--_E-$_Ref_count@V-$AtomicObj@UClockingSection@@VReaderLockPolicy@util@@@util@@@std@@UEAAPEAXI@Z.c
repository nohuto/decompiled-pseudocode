/*
 * XREFs of ??_E?$_Ref_count@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@UEAAPEAXI@Z @ 0x140090F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
