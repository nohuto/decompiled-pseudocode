/*
 * XREFs of PsGetSiloBySessionId @ 0x140742068
 * Callers:
 *     SessionIsInteractive @ 0x14032D6BC (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x140741FC0 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x1407DECB0 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1407E899C (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x1409EBC7C (EtwWmitraceWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402C20C0 (MmGetSessionById.c)
 */

__int64 __fastcall PsGetSiloBySessionId(unsigned int a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)MmGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[171] + 784LL);
  ObfDereferenceObject(SessionById);
  result = 0LL;
  *a2 = v4;
  return result;
}
