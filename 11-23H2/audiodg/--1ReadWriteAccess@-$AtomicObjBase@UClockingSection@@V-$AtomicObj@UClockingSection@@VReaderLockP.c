/*
 * XREFs of ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x14003B2BE
 * Callers:
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14003B6D0 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z.c)
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x14003B800 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14003BA24 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 */

void __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(
        _QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  if ( *a1 )
  {
    *a1 = 0LL;
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(a1 + 1);
  }
  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
