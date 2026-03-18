/*
 * XREFs of ViZwShouldCheck @ 0x140AD5078
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140AD3F30 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwQueryDriverEntryOrder_Entry @ 0x140AD3FB0 (VfZwQueryDriverEntryOrder_Entry.c)
 *     VfZwTranslateFilePath_Entry @ 0x140AD3FF0 (VfZwTranslateFilePath_Entry.c)
 *     VfZwPowerInformation_Entry @ 0x140AD4040 (VfZwPowerInformation_Entry.c)
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140AD4080 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140AD40E0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140AD4180 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwAlpcCreateSecurityContext_Entry @ 0x140AD41D0 (VfZwAlpcCreateSecurityContext_Entry.c)
 *     VfZwQueryObject_Entry @ 0x140AD4200 (VfZwQueryObject_Entry.c)
 *     VfZwAlpcSendWaitReceivePort_Entry @ 0x140AD4240 (VfZwAlpcSendWaitReceivePort_Entry.c)
 *     VfZwSetDriverEntryOrder_Entry @ 0x140AD42B0 (VfZwSetDriverEntryOrder_Entry.c)
 *     VfZwCloseObjectAuditAlarm_Entry @ 0x140AD42E0 (VfZwCloseObjectAuditAlarm_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140AD4310 (VfZwConnectPort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140AD4390 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140AD43D0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140AD4410 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140AD4450 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140AD44B0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140AD4500 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140AD4550 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140AD45A0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140AD45F0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteBootEntry_Entry @ 0x140AD4650 (VfZwDeleteBootEntry_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140AD4680 (VfZwDeleteFile_Entry.c)
 *     VfZwDeleteValueKey_Entry @ 0x140AD46B0 (VfZwDeleteValueKey_Entry.c)
 *     VfZwDeviceIoControlFile_Entry @ 0x140AD46E0 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwDuplicateObject_Entry @ 0x140AD4750 (VfZwDuplicateObject_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140AD4780 (VfZwDuplicateToken_Entry.c)
 *     VfZwFlushVirtualMemory_Entry @ 0x140AD47C0 (VfZwFlushVirtualMemory_Entry.c)
 *     VfZwFreeVirtualMemory_Entry @ 0x140AD4810 (VfZwFreeVirtualMemory_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140AD4850 (VfZwLoadKey_Entry.c)
 *     VfZwMapViewOfSection_Entry @ 0x140AD4890 (VfZwMapViewOfSection_Entry.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140AD48E0 (VfZwNotifyChangeKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140AD4960 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140AD49A0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140AD49F0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140AD4A40 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140AD4A90 (VfZwOpenTransaction_Entry.c)
 *     VfZwProtectVirtualMemory_Entry @ 0x140AD4AE0 (VfZwProtectVirtualMemory_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140AD4B30 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140AD4BA0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryEaFile_Entry @ 0x140AD4C10 (VfZwQueryEaFile_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140AD4C60 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140AD4CA0 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140AD4CF0 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140AD4D30 (VfZwQueryValueKey_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140AD4D80 (VfZwWriteFile_Entry.c)
 *     VfZwRemoveIoCompletionEx_Entry @ 0x140AD4DF0 (VfZwRemoveIoCompletionEx_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140AD4E40 (VfZwReplaceKey_Entry.c)
 *     VfZwSetTimer_Entry @ 0x140AD4E80 (VfZwSetTimer_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140AD4ED0 (VfZwSetValueKey_Entry.c)
 * Callees:
 *     <none>
 */

__int64 ViZwShouldCheck()
{
  unsigned int v0; // ecx
  struct _KPROCESS *Process; // rdx

  v0 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( PsInitialSystemProcess && Process != PsInitialSystemProcess )
    return Process != PsIdleProcess;
  return v0;
}
