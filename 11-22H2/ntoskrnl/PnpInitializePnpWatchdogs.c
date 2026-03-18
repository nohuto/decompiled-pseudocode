/*
 * XREFs of PnpInitializePnpWatchdogs @ 0x140B64BBC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x1403A070C (PnpGetRegistryDword.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140B64C28 (PnpQueryWatchdogTimeoutConfiguration.c)
 *     PnpOpenCCSPnpRegKey @ 0x140B64C8C (PnpOpenCCSPnpRegKey.c)
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
