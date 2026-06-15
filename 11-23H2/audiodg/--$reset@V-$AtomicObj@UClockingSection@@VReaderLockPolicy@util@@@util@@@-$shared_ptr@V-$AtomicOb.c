/*
 * XREFs of ??$reset@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@Z @ 0x14009CBFC
 * Callers:
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14009CA08 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Temporary_owner@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@XZ @ 0x14009CDDC (--1-$_Temporary_owner@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rbx
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  v4 = operator new(0x18uLL);
  *(_OWORD *)v4 = 0LL;
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::`vftable';
  *((_QWORD *)v4 + 2) = a2;
  v6 = 0LL;
  std::_Temporary_owner<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::~_Temporary_owner<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(&v6);
  *a1 = a2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
