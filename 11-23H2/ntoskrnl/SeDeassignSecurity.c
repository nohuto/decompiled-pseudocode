/*
 * XREFs of SeDeassignSecurity @ 0x1407BF6D0
 * Callers:
 *     SepDeleteAccessState @ 0x140232340 (SepDeleteAccessState.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x1407BC9C0 (ObpAssignSecurity.c)
 *     CmpCreateHiveRootCell @ 0x1408746CC (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *SecurityDescriptor;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *SecurityDescriptor = 0LL;
  return 0;
}
