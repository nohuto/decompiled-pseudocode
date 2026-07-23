/*
 * XREFs of ObpIsKernelHandle @ 0x1402BEDE4
 * Callers:
 *     ObIsKernelHandle @ 0x14036F220 (ObIsKernelHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C339C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObWaitForMultipleObjects @ 0x1406E38C0 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     ObSetHandleAttributes @ 0x14073FAE0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x14073FCF0 (ObQueryObjectAuditingByHandle.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1409CA99C (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x1409CB69C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB9D8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBC04 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC368 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCE40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CD0EC (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(__int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 != -2 && a1 != -1;
}
