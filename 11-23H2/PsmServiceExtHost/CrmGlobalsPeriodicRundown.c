/*
 * XREFs of CrmGlobalsPeriodicRundown @ 0x18006CDE0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x180048854 (LookUpTableFlushComplete.c)
 */

__int64 CrmGlobalsPeriodicRundown()
{
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1800DB278 == TlgAggregateInternalRegisteredProviderEtwCallback )
    LookUpTableFlushComplete(qword_1800DB280);
  return CrmGlobalsRundown();
}
