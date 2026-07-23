/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x14076D6C0
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14076CFF0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14076D52C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x1409D15BC (SepDeleteClaimAttributes.c)
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
