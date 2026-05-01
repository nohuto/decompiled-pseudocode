/*
 * XREFs of ?SetPositionerMonitor@CImmersiveApp@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803C46E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SetPositionerMonitor(CImmersiveApp *this, struct IImmersiveMonitor *a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(char *, struct IImmersiveMonitor *, _QWORD, __int64))(*((_QWORD *)this + 3) + 456LL))(
    (char *)this + 24,
    a2,
    0LL,
    8LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
