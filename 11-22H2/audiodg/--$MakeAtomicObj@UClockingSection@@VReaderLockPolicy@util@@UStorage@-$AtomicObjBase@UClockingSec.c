/*
 * XREFs of ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14009CA58
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14009DF4C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14009E6C8 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400068BC (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140038380 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$reset@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@Z @ 0x14009CC4C (--$reset@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@-$shared_ptr@V-$AtomicOb.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
        __int64 *a1,
        __int64 a2)
{
  char *v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rdx
  std::_Ref_count_base *v11; // rcx
  volatile signed __int32 *v13; // [rsp+30h] [rbp-28h]

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2 )
  {
    v4 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      *(_QWORD *)v4 = &util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::`vftable';
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 8));
      *((_DWORD *)v4 + 12) = 0;
      *((_DWORD *)v4 + 13) = 0;
      *((_QWORD *)v4 + 7) = a2;
      *((_QWORD *)v4 + 8) = 0LL;
      *((_QWORD *)v4 + 9) = 0LL;
      *(_QWORD *)v4 = &util::AtomicObj<ClockingSection,util::ReaderLockPolicy>::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
      a1,
      v4);
    v5 = *a1;
    if ( *a1 )
    {
      v6 = 0LL;
      v13 = 0LL;
      v7 = a1[1];
      v8 = 0LL;
      if ( v7 )
      {
        v13 = (volatile signed __int32 *)a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
        v8 = v5;
        v6 = v13;
      }
      v9 = 0LL;
      v10 = 0LL;
      if ( v6 )
      {
        _InterlockedIncrement(v6 + 3);
        v9 = v8;
        v6 = v13;
        v10 = v13;
      }
      *(_QWORD *)(v5 + 64) = v9;
      v11 = *(std::_Ref_count_base **)(v5 + 72);
      *(_QWORD *)(v5 + 72) = v10;
      if ( v11 )
        std::_Ref_count_base::_Decwref(v11);
      if ( v6 )
        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
    }
  }
  return a1;
}
