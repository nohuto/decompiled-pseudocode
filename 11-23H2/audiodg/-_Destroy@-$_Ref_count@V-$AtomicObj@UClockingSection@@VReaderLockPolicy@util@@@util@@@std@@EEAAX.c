/*
 * XREFs of ?_Destroy@?$_Ref_count@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@EEAAXXZ @ 0x14009ED70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::_Destroy(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 16);
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
