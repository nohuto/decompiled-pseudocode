/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1407373D0
 * Callers:
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     ObDeleteCapturedInsertInfo @ 0x140692B60 (ObDeleteCapturedInsertInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0ABC (ObpInsertOrLocateNamedObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406EEF10 (ObpCaptureObjectCreateInformation.c)
 *     NtCreateWnfStateName @ 0x1407111A0 (NtCreateWnfStateName.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     AlpcpConnectPort @ 0x140717370 (AlpcpConnectPort.c)
 *     ObpFreeObject @ 0x140729850 (ObpFreeObject.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F300 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     NtSetSecurityObject @ 0x1407BBD30 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DF480 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1400 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B38C (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
