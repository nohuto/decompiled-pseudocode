/*
 * XREFs of ?_AcquireRead@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEBUClockingSection@@AEA_N@Z @ 0x14009ED4C
 * Callers:
 *     ??0ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14009CCE0 (--0ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 * Callees:
 *     ?GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z @ 0x14009DDB0 (-GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireRead(
        __int64 a1,
        _QWORD *a2,
        bool *a3)
{
  unsigned int Index; // eax
  __int64 v7; // r11

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  Index = util::AtomicObjState::GetReadIndex(
            (util::AtomicObjState *)(a1 + 48),
            *(struct util::AtomicObjState::atomicStorage **)(a1 + 56),
            a3);
  *a2 = 100LL * Index + v7 + 4;
  return 0LL;
}
