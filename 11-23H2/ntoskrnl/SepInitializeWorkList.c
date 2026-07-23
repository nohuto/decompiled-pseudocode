/*
 * XREFs of SepInitializeWorkList @ 0x140B54374
 * Callers:
 *     SepInitializationPhase0 @ 0x140B53588 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C70FC0);
  qword_140C71028 = 0LL;
  qword_140C70FA8 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140C71078 = (__int64)ExFreePool;
  qword_140C70FB8 = (__int64)&qword_140C70FB0;
  qword_140C70FB0 = (__int64)&qword_140C70FB0;
  qword_140C71070 = (__int64)SepAdtDetermineInsertQueue;
  word_140C71080 = 3;
  ExInitializeResourceLite(&stru_140C70EA0);
  qword_140C70F58 = (__int64)ExFreePool;
  qword_140C70E88 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140C70F60 = 1;
  return result;
}
