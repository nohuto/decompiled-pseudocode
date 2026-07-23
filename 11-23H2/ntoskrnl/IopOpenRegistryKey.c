/*
 * XREFs of IopOpenRegistryKey @ 0x1407CF1EC
 * Callers:
 *     IopReadDumpRegistry @ 0x140395BE4 (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1403AEE40 (IoInitializeLiveDump.c)
 *     SecureDump_ReadRegistry @ 0x1403B0678 (SecureDump_ReadRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403B0F1C (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1403B39B8 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140559284 (IopAllowRemoteDASD.c)
 *     IoQueryDeviceDescription @ 0x1407CE740 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x1407CE854 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CECF8 (pIoQueryBusDescription.c)
 *     IopLoadUnloadDriver @ 0x1407CF120 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1407E379C (IopBootLog.c)
 *     IopRegistryOpenDeepestPath @ 0x140834B78 (IopRegistryOpenDeepestPath.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14085CFFC (IopSymlinkQueryEnabledClasses.c)
 *     IopInitializeDumpPolicySettings @ 0x140861584 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     IopSafebootDriverLoad @ 0x140945844 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094E9CC (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
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
