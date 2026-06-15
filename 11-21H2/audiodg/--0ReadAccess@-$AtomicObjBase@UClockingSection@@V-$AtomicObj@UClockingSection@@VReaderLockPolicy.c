/*
 * XREFs of ??0ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x140090B64
 * Callers:
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x140090F28 (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z @ 0x140067B0C (--0-$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x140090E64 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?_AcquireRead@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEBUClockingSection@@AEA_N@Z @ 0x14009332C (-_AcquireRead@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x1400934B4 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadAccess::ReadAccess(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  int v7; // edi
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  v2 = (_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = -2147467259;
  *(_BYTE *)(a1 + 28) = 0;
  v5 = std::shared_ptr<APO_NOTIFICATION>::shared_ptr<APO_NOTIFICATION>(v11, a2);
  v6 = v5;
  if ( *(_QWORD *)a1 )
  {
    v7 = -2147024891;
  }
  else
  {
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=(v2, v5);
    if ( *v2 )
    {
      v7 = util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireRead(
             *v2,
             a1,
             a1 + 28);
      if ( v7 < 0 )
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(v2);
    }
    else
    {
      v7 = -2147024809;
    }
  }
  *(_DWORD *)(a1 + 24) = v7;
  v8 = (std::_Ref_count_base *)v6[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a1;
}
