/*
 * XREFs of sub_1402EC884 @ 0x1402EC884
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402EC884(int a1, char a2)
{
  __int64 v2; // rcx

  v2 = (unsigned int)(a1 - 100);
  if ( a2 )
    return byte_140C1B380[2 * v2];
  else
    return byte_140C1B380[2 * v2 + 1];
}
