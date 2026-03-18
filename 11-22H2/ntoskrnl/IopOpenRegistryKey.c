/*
 * XREFs of IopOpenRegistryKey @ 0x1407CF480
 * Callers:
 *     IopReadDumpRegistry @ 0x140393E84 (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1403AE5D0 (IoInitializeLiveDump.c)
 *     SecureDump_ReadRegistry @ 0x1403AFE08 (SecureDump_ReadRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403B06AC (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1403B3148 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140558C64 (IopAllowRemoteDASD.c)
 *     IoQueryDeviceDescription @ 0x1407CEA00 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x1407CEB14 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CEFB8 (pIoQueryBusDescription.c)
 *     IopLoadUnloadDriver @ 0x1407CF3E0 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1407E3A4C (IopBootLog.c)
 *     IopRegistryOpenDeepestPath @ 0x1408363C8 (IopRegistryOpenDeepestPath.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14085D21C (IopSymlinkQueryEnabledClasses.c)
 *     IopInitializeDumpPolicySettings @ 0x140861414 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     IopSafebootDriverLoad @ 0x1409456F4 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094E87C (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041AA40 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
