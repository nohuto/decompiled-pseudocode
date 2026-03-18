/*
 * XREFs of SepReleaseAuditPolicy @ 0x1409CDBC0
 * Callers:
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
