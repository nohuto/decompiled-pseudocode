/*
 * XREFs of StorPortResume @ 0x1C0046CA0
 * Callers:
 *     RaidpLinkUp @ 0x1C0044C30 (RaidpLinkUp.c)
 *     StorPortResumeVrfy @ 0x1C00B16F0 (StorPortResumeVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0043B84 (McTemplateK0pq_EtwWriteTransfer.c)
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
  if ( (qword_1C0092468 & 0x200) != 0 )
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
  _InterlockedExchange((volatile __int32 *)(v4 + 1316), 0);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1248), 134684676, 134684677) != 134684677
    || v4 == -1232 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0092468 & 0x800) != 0 )
      DbgLogRequest(v4, 22, retaddr, 427LL, 0LL, 0LL, 0LL);
  }
  else
  {
    *(_DWORD *)(v4 + 1264) = 4;
    RaidQueueDeferredItem((char *)(v4 + 944), (struct _SLIST_ENTRY *)(v4 + 1232));
  }
  return 1;
}
