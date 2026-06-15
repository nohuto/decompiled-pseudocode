/*
 * XREFs of ??_E?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@UEAAPEAXI@Z @ 0x14009CEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@UEAA@XZ @ 0x14009CDDC (--1-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@uti.c)
 */

void *__fastcall util::AtomicObj<ClockingSection,util::ReaderLockPolicy>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::~AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
