/*
 * XREFs of ?reset@?$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1803B5CB4
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18049F070 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 *     ?SetSite@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x1804E8B70 (-SetSite@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAgileReference,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
