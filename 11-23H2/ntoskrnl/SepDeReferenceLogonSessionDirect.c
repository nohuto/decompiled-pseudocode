/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x140370CC0
 * Callers:
 *     SepLinkLogonSessions @ 0x140354440 (SepLinkLogonSessions.c)
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     SepStopReferencingLogonSession @ 0x1407F0B70 (SepStopReferencingLogonSession.c)
 *     SeShutdownServerSilo @ 0x1409C90E0 (SeShutdownServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C9860 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x1409C9C20 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1409CF2F0 (SeGetLinkedToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x14076CFF0 (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 i; // rdx
  signed __int64 v3; // rtt
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 3);
  result = a1[3];
  for ( i = result - 1; i > 0; i = result - 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1 + 3, i, result);
    if ( v3 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  v4 = a1[20];
  v5 = a1[1];
  return SepDeReferenceLogonSession(&v5, v4);
}
