/*
 * XREFs of SepReferenceLogonSession @ 0x1407C3314
 * Callers:
 *     SepCreateTokenEx @ 0x140229710 (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x1403542A0 (SepLinkLogonSessions.c)
 *     SepDuplicateLogonSessionReference @ 0x140370C9C (SepDuplicateLogonSessionReference.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1407C334C (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
