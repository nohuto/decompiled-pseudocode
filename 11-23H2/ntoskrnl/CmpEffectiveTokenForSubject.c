/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x1407BA5DC
 * Callers:
 *     CmpIsVirtEnabledForSubject @ 0x1407BA58C (CmpIsVirtEnabledForSubject.c)
 *     CmpBuildAdminInformation @ 0x140A1895C (CmpBuildAdminInformation.c)
 *     CmpGetVirtualizationID @ 0x140A19D3C (CmpGetVirtualizationID.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A1B868 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BA24 (CmpReportAuditVirtualizationEvent.c)
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
