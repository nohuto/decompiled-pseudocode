/*
 * XREFs of CrmGlobalsPeriodicRundown @ 0x180001880
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x18003EDA8 (LookUpTableFlushComplete.c)
 */

__int64 CrmGlobalsPeriodicRundown()
{
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1800DC278 == TlgAggregateInternalRegisteredProviderEtwCallback )
    LookUpTableFlushComplete(qword_1800DC280);
  return CrmGlobalsRundown();
}
