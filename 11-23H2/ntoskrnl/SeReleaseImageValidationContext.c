/*
 * XREFs of SeReleaseImageValidationContext @ 0x1407EAC78
 * Callers:
 *     MiDeleteControlArea @ 0x1402199D0 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C37A08 )
    qword_140C37A08();
  else
    ExFreePoolWithTag(a1, 0);
}
