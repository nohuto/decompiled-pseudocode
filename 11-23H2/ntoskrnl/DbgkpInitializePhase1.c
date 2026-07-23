/*
 * XREFs of DbgkpInitializePhase1 @ 0x140B4FEDC
 * Callers:
 *     DbgkInitialize @ 0x140B524F0 (DbgkInitialize.c)
 * Callees:
 *     DbgkpGetServerSiloState @ 0x1408223F4 (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase1SiloState @ 0x140822420 (DbgkpInitializePhase1SiloState.c)
 */

__int64 DbgkpInitializePhase1()
{
  char *ServerSiloState; // rax
  __int64 result; // rax

  ServerSiloState = DbgkpGetServerSiloState(0LL);
  result = DbgkpInitializePhase1SiloState((__int64)ServerSiloState);
  if ( (int)result >= 0 && !DbgkpWerInitialized )
  {
    DbgkpBusy = 0;
    DbgkpWerDefaultPolicy = 2;
    DbgkpWerDeferredWriteTimeoutSeconds = 600;
    DbgkpWerInitialized = 1;
  }
  return result;
}
