/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x14076D4D0
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14076CE00 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14076D33C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x1409D13BC (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepDeleteLogonSessionClaims(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    result = SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return result;
}
