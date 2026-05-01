/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UIPinnedList@@@winrt@@AEAAXXZ @ 0x180289548
 * Callers:
 *     ??1?$com_ptr@UIPinnedList@@@winrt@@QEAA@XZ @ 0x1802875EC (--1-$com_ptr@UIPinnedList@@@winrt@@QEAA@XZ.c)
 *     ??4?$com_ptr@UIPinnedList@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180287728 (--4-$com_ptr@UIPinnedList@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<IPinnedList>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
