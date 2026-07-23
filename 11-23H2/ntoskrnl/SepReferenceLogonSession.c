/*
 * XREFs of SepReferenceLogonSession @ 0x1407C35E4
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x140354440 (SepLinkLogonSessions.c)
 *     SepDuplicateLogonSessionReference @ 0x140370E3C (SepDuplicateLogonSessionReference.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1407C361C (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
