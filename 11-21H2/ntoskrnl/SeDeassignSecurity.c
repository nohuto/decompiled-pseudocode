/*
 * XREFs of SeDeassignSecurity @ 0x1406BC2D0
 * Callers:
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     sub_140669694 @ 0x140669694 (sub_140669694.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
