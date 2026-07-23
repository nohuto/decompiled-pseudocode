/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x1407BA8BC
 * Callers:
 *     CmpIsVirtEnabledForSubject @ 0x1407BA86C (CmpIsVirtEnabledForSubject.c)
 *     CmpBuildAdminInformation @ 0x140A18C0C (CmpBuildAdminInformation.c)
 *     CmpGetVirtualizationID @ 0x140A19FEC (CmpGetVirtualizationID.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A1BB18 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BCD4 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpEffectiveTokenForSubject(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( !*a1 )
    v2 = a1[2];
  if ( a2 )
    *a2 = (*a1 != 0) + 1;
  return v2;
}
