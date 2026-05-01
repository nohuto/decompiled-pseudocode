/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x180002878
 * Callers:
 *     DllMain @ 0x18000BDCC (DllMain.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_180032AE8 )
    (**(void (__fastcall ***)(__int64, __int64))qword_180032AE8)(qword_180032AE8, 1LL);
  qword_180032AE8 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
