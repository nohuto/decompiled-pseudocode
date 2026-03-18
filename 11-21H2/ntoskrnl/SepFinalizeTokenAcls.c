/*
 * XREFs of SepFinalizeTokenAcls @ 0x140659D50
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     NtFilterToken @ 0x1406623D0 (NtFilterToken.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     SeCopyClientToken @ 0x14072295C (SeCopyClientToken.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     SeFilterToken @ 0x140831700 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x14041A13C (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140724550 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepFinalizeTokenAcls(_QWORD *a1)
{
  __int64 result; // rax

  result = SepAppendAceToTokenObjectAcl(a1, 8LL, SeAliasAdminsSid);
  if ( (int)result >= 0 )
    return SepSetProcessTrustLabelAceForToken(a1);
  return result;
}
