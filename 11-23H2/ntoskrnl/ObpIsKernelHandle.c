/*
 * XREFs of ObpIsKernelHandle @ 0x1402BEB54
 * Callers:
 *     ObIsKernelHandle @ 0x14036F080 (ObIsKernelHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C336C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x1406E44C0 (NtClose.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     ObSetHandleAttributes @ 0x14073F8F0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x14073FB00 (ObQueryObjectAuditingByHandle.c)
 *     ObCloseHandle @ 0x14076B890 (ObCloseHandle.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA014 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1409CA79C (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x1409CB49C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB7D8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBA04 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC168 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCC40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CCEEC (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(__int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 != -2 && a1 != -1;
}
