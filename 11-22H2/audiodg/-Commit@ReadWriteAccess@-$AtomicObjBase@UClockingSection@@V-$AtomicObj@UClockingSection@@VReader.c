/*
 * XREFs of ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAXXZ @ 0x14003B43C
 * Callers:
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14003B710 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z.c)
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x14003B840 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14003BA64 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(
        _QWORD *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rax
  volatile signed __int32 *v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v7; // [rsp+20h] [rbp-18h]
  __int16 v8; // [rsp+24h] [rbp-14h]

  v1 = a1 + 1;
  if ( *a1 )
  {
    v2 = *v1;
    *a1 = 0LL;
    v3 = *(volatile signed __int32 **)(v2 + 56);
    v4 = _InterlockedCompareExchange(v3, 0, 0);
    v7 = 33751041;
    v8 = 1029;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(v3, *((unsigned __int8 *)&v7 + (v4 & 0xFFFFFFF7)) | 8, v4);
    }
    while ( v5 != v4 );
  }
  return std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(v1);
}
