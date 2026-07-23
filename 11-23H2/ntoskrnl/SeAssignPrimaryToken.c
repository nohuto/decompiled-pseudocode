/*
 * XREFs of SeAssignPrimaryToken @ 0x14084079C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406B66A0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ObInitializeFastReference @ 0x1406B6B7C (ObInitializeFastReference.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB280 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x1407610C4 (SeDeassignPrimaryToken.c)
 *     SepAuditAssignPrimaryToken @ 0x140840DA0 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(134, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 1208) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((__int64 *)(a1 + 1208), (__int64)a2);
}
