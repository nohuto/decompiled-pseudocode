/*
 * XREFs of RtlCreateUnicodeString @ 0x1407FB330
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x1405EB6F0 (DifRtlCreateUnicodeStringWrapper.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x140772F38 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCaptureString @ 0x1407FAF00 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB010 (RtlConvertSidToUnicodeString.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140811EA8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x140811FAC (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x140813590 (DrvDbCreateDatabaseNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A8C0 (PiCreateDriverSwDeviceCallback.c)
 *     EtwpQueryRegistryCallback @ 0x140834C70 (EtwpQueryRegistryCallback.c)
 *     EtwStartAutoLogger @ 0x14083C2A8 (EtwStartAutoLogger.c)
 *     PiGetDefaultMessageString @ 0x140848E70 (PiGetDefaultMessageString.c)
 *     _PnpCtxCreateNode @ 0x1408551A8 (_PnpCtxCreateNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408665C4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879EB0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x14087DB20 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x14087EE40 (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095F000 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F408 (PiDevCfgQueryIncludedDriverNode.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10C70 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x140A55804 (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140B3C2C8 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1407C7260 (ExpAllocateStringRoutine.c)
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
