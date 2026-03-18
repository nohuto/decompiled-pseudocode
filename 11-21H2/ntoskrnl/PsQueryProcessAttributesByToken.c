/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x14070BA70
 * Callers:
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406745EC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x14070B934 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x14070BA00 (PsQueryProcessAttributes.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E4114 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4DA0 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (__int64)&PspSysAppIdClaim, (__int64)a3);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (__int64)&PspPackagedAppClaim, (__int64)a3);
}
