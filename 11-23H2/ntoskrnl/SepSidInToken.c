/*
 * XREFs of SepSidInToken @ 0x14035C35C
 * Callers:
 *     SeTokenIsAdmin @ 0x1407D0770 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ECF8C (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x1408A64A0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CE8B4 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1402B6910 (SepSidInTokenSidHash.c)
 */

char __fastcall SepSidInToken(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, char a4, char a5, char a6)
{
  return SepSidInTokenSidHash((_DWORD *)((a5 != 0 ? 504LL : 232LL) + a1), a2, a3, a4, a5, a6);
}
