/*
 * XREFs of ?UnsubscribeFromServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x180180110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180173F8C (-InternalRelease@-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::UnsubscribeFromServices(
        CPerMonitorDesktopVisibilityService *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rdi

  v2 = (__int64 *)((char *)this + 192);
  if ( *((_DWORD *)this + 42) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 42) = 0;
  }
  Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease(v2);
  return 0LL;
}
