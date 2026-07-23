/*
 * XREFs of ExPreInitializeNls @ 0x140822CA0
 * Callers:
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExPreInitializeNls()
{
  if ( InitNlsTableBase )
  {
    _InterlockedExchange64(&qword_140D49E90, InitNlsTableBase + 4);
    _InterlockedExchange64(&qword_140D49E98, InitNlsTableBase + 2 * (*(unsigned __int16 *)(InitNlsTableBase + 2) + 2LL));
    qword_140D49E88 = InitNlsTableBase;
  }
  return 0LL;
}
