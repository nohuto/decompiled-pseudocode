/*
 * XREFs of SepStopReferencingLogonSession @ 0x1407F0E20
 * Callers:
 *     SepLinkLogonSessions @ 0x140353CA0 (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x1407E9FEC (SepSetLogonSessionToken.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 * Callees:
 *     SepConvertToOwnTokenClaims @ 0x140370494 (SepConvertToOwnTokenClaims.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1403704D0 (SepDeReferenceLogonSessionDirect.c)
 */

__int64 __fastcall SepStopReferencingLogonSession(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = SepConvertToOwnTokenClaims(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
