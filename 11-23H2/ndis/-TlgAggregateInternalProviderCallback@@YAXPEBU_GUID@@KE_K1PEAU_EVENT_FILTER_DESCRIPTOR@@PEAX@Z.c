/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01217C0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C01204E4 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_1C00F5C68, 0LL) )
  {
    for ( i = qword_1C00F7588; i; i = *(_QWORD *)(i + 352) )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_1C00F5C68, 0LL);
  }
}
