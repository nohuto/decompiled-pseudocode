/*
 * XREFs of StorPortResume @ 0x1C0043E80
 * Callers:
 *     RaidpLinkUp @ 0x1C0042180 (RaidpLinkUp.c)
 *     StorPortResumeVrfy @ 0x1C0095760 (StorPortResumeVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C004110C (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall StorPortResume(__int64 a1)
{
  _DWORD *Adapter; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  Adapter = RaidpPortGetAdapter(a1);
  v4 = (__int64)Adapter;
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 15, retaddr, (__int64)Adapter, 0LL, 0LL, 0LL);
  v5 = 255LL;
  if ( v4 )
    v5 = *(unsigned int *)(v4 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v7) = v5;
    McTemplateK0pq_EtwWriteTransfer(v5, &EventPortResume, v3, a1, v7);
  }
  if ( !v4 )
    return 0;
  _InterlockedExchange((volatile __int32 *)(v4 + 1252), 0);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1184), 134684676, 134684677) != 134684677
    || v4 == -1168 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00793A8 & 0x800) != 0 )
      DbgLogRequest(v4, 22, retaddr, 429LL, 0LL, 0LL, 0LL);
  }
  else
  {
    *(_DWORD *)(v4 + 1200) = 4;
    RaidQueueDeferredItem((char *)(v4 + 880), (struct _SLIST_ENTRY *)(v4 + 1168));
  }
  return 1;
}
