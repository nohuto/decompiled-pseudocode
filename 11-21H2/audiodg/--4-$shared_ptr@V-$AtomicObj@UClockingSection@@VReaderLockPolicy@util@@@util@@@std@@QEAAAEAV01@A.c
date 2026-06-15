/*
 * XREFs of ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x140090E64
 * Callers:
 *     ??0ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x140090B64 (--0ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 *     ??0ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x140090C38 (--0ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x1400922C8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x140092A3C (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z @ 0x140067B0C (--0-$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<APO_NOTIFICATION>::shared_ptr<APO_NOTIFICATION>(v9, a2);
  v4 = *v3;
  *v3 = *a1;
  v5 = a1[1];
  *a1 = v4;
  v6 = v3[1];
  v3[1] = v5;
  v7 = v9[1];
  a1[1] = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
