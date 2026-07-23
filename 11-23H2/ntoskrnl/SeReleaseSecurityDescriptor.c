/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1407375C0
 * Callers:
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     ObDeleteCapturedInsertInfo @ 0x140692B60 (ObDeleteCapturedInsertInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0AEC (ObpInsertOrLocateNamedObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406EEF40 (ObpCaptureObjectCreateInformation.c)
 *     NtCreateWnfStateName @ 0x1407113B0 (NtCreateWnfStateName.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     AlpcpConnectPort @ 0x140717570 (AlpcpConnectPort.c)
 *     ObpFreeObject @ 0x140729A50 (ObpFreeObject.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F500 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     NtSetSecurityObject @ 0x1407BC000 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DF750 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F16D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B63C (CmpCopySaclToVirtualKey.c)
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
