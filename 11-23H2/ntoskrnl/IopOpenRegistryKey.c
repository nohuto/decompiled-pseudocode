/*
 * XREFs of IopOpenRegistryKey @ 0x1407CEF1C
 * Callers:
 *     IopReadDumpRegistry @ 0x140395A04 (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1403AEC60 (IoInitializeLiveDump.c)
 *     SecureDump_ReadRegistry @ 0x1403B0498 (SecureDump_ReadRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403B0D3C (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1403B37D8 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140558BC4 (IopAllowRemoteDASD.c)
 *     IoQueryDeviceDescription @ 0x1407CE470 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x1407CE584 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CEA28 (pIoQueryBusDescription.c)
 *     IopLoadUnloadDriver @ 0x1407CEE50 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1407E34CC (IopBootLog.c)
 *     IopRegistryOpenDeepestPath @ 0x140834878 (IopRegistryOpenDeepestPath.c)
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14085CDBC (IopSymlinkQueryEnabledClasses.c)
 *     IopInitializeDumpPolicySettings @ 0x140861344 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     IopSafebootDriverLoad @ 0x140945644 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094E7CC (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x14041AFA0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041B100 (ZwCreateKey.c)
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
