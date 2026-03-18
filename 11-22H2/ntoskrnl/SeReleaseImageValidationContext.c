/*
 * XREFs of SeReleaseImageValidationContext @ 0x1407EB1F8
 * Callers:
 *     MiDeleteControlArea @ 0x1402199F0 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C37A28 )
    qword_140C37A28();
  else
    ExFreePoolWithTag(a1, 0);
}
