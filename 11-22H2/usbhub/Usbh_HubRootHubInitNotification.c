/*
 * XREFs of Usbh_HubRootHubInitNotification @ 0x1C003C958
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C0041D10 (UsbHubhInitTimeoutTimer.c)
 *     UsbhAsyncStop @ 0x1C00424CC (UsbhAsyncStop.c)
 *     UsbhHubStart @ 0x1C0043560 (UsbhHubStart.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubRootHubInitNotification(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax

  v5 = FdoExt(a1);
  if ( *((_QWORD *)v5 + 545) )
    return (*((__int64 (__fastcall **)(_QWORD, __int64, __int64))v5 + 545))(*((_QWORD *)v5 + 529), a2, a3);
  else
    return 3221225474LL;
}
