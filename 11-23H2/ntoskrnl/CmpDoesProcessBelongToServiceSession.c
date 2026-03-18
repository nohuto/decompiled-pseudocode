/*
 * XREFs of CmpDoesProcessBelongToServiceSession @ 0x1407406E0
 * Callers:
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14028C180 (PsGetProcessServerSilo.c)
 *     MmGetSessionIdEx @ 0x1402A1720 (MmGetSessionIdEx.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402C0880 (PsGetServerSiloServiceSessionId.c)
 */

bool __fastcall CmpDoesProcessBelongToServiceSession(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  return (unsigned int)MmGetSessionIdEx(a1) == ServerSiloServiceSessionId;
}
