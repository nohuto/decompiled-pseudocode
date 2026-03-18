/*
 * XREFs of RtlCreateUnicodeString @ 0x1407FB060
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x1405EB180 (DifRtlCreateUnicodeStringWrapper.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x140772D48 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCaptureString @ 0x1407FAC30 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FAD40 (RtlConvertSidToUnicodeString.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140811BD8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x140811CDC (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1408132C0 (DrvDbCreateDatabaseNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A5F0 (PiCreateDriverSwDeviceCallback.c)
 *     EtwpQueryRegistryCallback @ 0x140834970 (EtwpQueryRegistryCallback.c)
 *     EtwStartAutoLogger @ 0x14083BFA8 (EtwStartAutoLogger.c)
 *     PiGetDefaultMessageString @ 0x140848B70 (PiGetDefaultMessageString.c)
 *     _PnpCtxCreateNode @ 0x140854EA8 (_PnpCtxCreateNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140866384 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879C70 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x14087D8E0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x14087EC00 (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095EE00 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F208 (PiDevCfgQueryIncludedDriverNode.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A109C0 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x140A55554 (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140B3C2C8 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1407C6F90 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  wchar_t *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(StringRoutine, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
