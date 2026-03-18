/*
 * XREFs of SeDeassignSecurity @ 0x1407BF400
 * Callers:
 *     SepDeleteAccessState @ 0x140232270 (SepDeleteAccessState.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x1407BC6F0 (ObpAssignSecurity.c)
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
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
