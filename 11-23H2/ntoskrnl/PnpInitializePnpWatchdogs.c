/*
 * XREFs of PnpInitializePnpWatchdogs @ 0x140B6104C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x1403A0BDC (PnpGetRegistryDword.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140B610B8 (PnpQueryWatchdogTimeoutConfiguration.c)
 *     PnpOpenCCSPnpRegKey @ 0x140B6111C (PnpOpenCCSPnpRegKey.c)
 */

NTSTATUS PnpInitializePnpWatchdogs()
{
  NTSTATUS result; // eax
  int v1; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  result = PnpOpenCCSPnpRegKey(&Handle);
  if ( result >= 0 )
  {
    v2 = 0;
    if ( (int)PnpGetRegistryDword(Handle, (__int64)L"WatchdogBugcheckEnabled", &v2) >= 0 )
      v1 = v2 != 0;
    else
      v1 = 2;
    PnpWatchdogBugcheckConfig = v1;
    PnpQueryWatchdogTimeoutConfiguration(Handle);
    return ZwClose(Handle);
  }
  return result;
}
