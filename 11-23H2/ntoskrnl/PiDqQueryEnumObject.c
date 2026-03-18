/*
 * XREFs of PiDqQueryEnumObject @ 0x140788234
 * Callers:
 *     PiDqEnumQueryObjectsCallback @ 0x140788210 (PiDqEnumQueryObjectsCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407F9F68 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryFilters @ 0x140741438 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x140788354 (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1407E03B4 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1407FA2B8 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1407FA348 (PiDqQueryAppendActionEntry.c)
 */

__int64 __fastcall PiDqQueryEnumObject(struct _SECURITY_SUBJECT_CONTEXT *a1, __int64 a2)
{
  _DWORD *ProcessAuditId; // rcx
  int v5; // eax
  unsigned int AddObjectToResultSet; // ebx
  char v7; // al
  int v8; // eax
  char v9; // al
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  ProcessAuditId = a1->ProcessAuditId;
  LOBYTE(v11) = 1;
  if ( !ProcessAuditId[5] && (ProcessAuditId[4] == 1 || (unsigned int)(ProcessAuditId[4] - 2) < 2) )
  {
    v5 = PiPnpRtlApplyMandatoryFilters(
           *(__int64 *)&PiPnpRtlCtx,
           *(_QWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 28),
           0LL,
           a1 + 1,
           &v11);
    AddObjectToResultSet = v5;
    if ( v5 == -1073741772 || v5 == -1073741275 )
    {
      v7 = 0;
      LOBYTE(v11) = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      if ( v5 < 0 )
        return AddObjectToResultSet;
      v7 = v11;
    }
    if ( !v7 )
      return AddObjectToResultSet;
  }
  if ( *((_QWORD *)a1->ProcessAuditId + 11) )
  {
    v8 = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(a2 + 16), &v11);
    AddObjectToResultSet = v8;
    if ( v8 == -1073741772 )
    {
      v9 = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      if ( v8 < 0 )
        return AddObjectToResultSet;
      v9 = v11;
    }
    if ( !v9 )
      return AddObjectToResultSet;
  }
  if ( (*((_DWORD *)a1->ProcessAuditId + 10) & 1) == 0
    || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), (AddObjectToResultSet & 0x80000000) == 0) )
  {
    AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1LL, a2, 0LL, &v12);
    if ( (AddObjectToResultSet & 0x80000000) == 0 )
      PiDqQueryAppendActionEntry(a1, v12);
  }
  return AddObjectToResultSet;
}
