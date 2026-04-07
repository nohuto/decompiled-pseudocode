/*
 * XREFs of ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180049044
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x180048EBC (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 */

__int64 __fastcall FailFastIfAccessDenied(unsigned int a1)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a1 == -2147024891 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -2147024891;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a1;
}
