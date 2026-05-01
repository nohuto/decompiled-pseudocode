/*
 * XREFs of sub_180002A90 @ 0x180002A90
 * Callers:
 *     sub_18000BD28 @ 0x18000BD28 (sub_18000BD28.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

NTSTATUS sub_180002A90()
{
  if ( qword_180032A18 )
    (**(void (__fastcall ***)(__int64, __int64))qword_180032A18)(qword_180032A18, 1LL);
  qword_180032A18 = 0LL;
  return RtlDeleteCriticalSection(&CriticalSection);
}
