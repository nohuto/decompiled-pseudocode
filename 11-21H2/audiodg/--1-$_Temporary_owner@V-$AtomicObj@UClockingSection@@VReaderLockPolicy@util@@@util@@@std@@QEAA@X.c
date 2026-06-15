/*
 * XREFs of ??1?$_Temporary_owner@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@XZ @ 0x140090D7C
 * Callers:
 *     ??$reset@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@Z @ 0x140090AD0 (--$reset@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@-$shared_ptr@V-$AtomicOb.c)
 *     _std::shared_ptr_util::AtomicObj_ClockingSection_util::ReaderLockPolicy___::reset_util::AtomicObj_ClockingSection_util::ReaderLockPolicy____::_1_::dtor$1 @ 0x140090B51 (_std--shared_ptr_util--AtomicObj_ClockingSection_util--ReaderLockPolicy___--reset_util--AtomicOb.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Temporary_owner<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::~_Temporary_owner<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
