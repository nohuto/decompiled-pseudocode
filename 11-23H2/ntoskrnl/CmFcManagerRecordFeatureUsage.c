/*
 * XREFs of CmFcManagerRecordFeatureUsage @ 0x140419A58
 * Callers:
 *     RtlRecordFeatureUsage @ 0x140411760 (RtlRecordFeatureUsage.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueDpc @ 0x140254770 (KeInsertQueueDpc.c)
 *     RtlReleaseSwapReference @ 0x14035D244 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x14035D2EC (RtlAcquireSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x14037459C (CmpWorkItemQueueWork.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x140411D04 (RtlpFcAddFeatureUsageDataToBuffer.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140419BCC (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 */

void __fastcall CmFcManagerRecordFeatureUsage(__int64 a1, const void *a2, unsigned __int64 a3)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int v10; // eax
  char v11; // bl
  unsigned int v12; // r15d
  unsigned __int64 v13; // rcx
  unsigned int v14; // edx
  char v15; // al
  char v16; // dl
  unsigned __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = a3;
  v4 = 0;
  CurrentIrql = ObGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v7 = (unsigned int)RtlAcquireSwapReference(qword_140C14388);
  v8 = CmFcSystemManager[v7 + 159];
  if ( v8 )
  {
    v9 = (*(_DWORD *)(v8 + 28) >> 1) + (*(_DWORD *)(v8 + 28) >> 2);
    v10 = RtlpFcAddFeatureUsageDataToBuffer(v8, a2, &v17);
    v11 = dword_140C146C0;
    v12 = v10;
    RtlReleaseSwapReference(qword_140C14388, v7);
    if ( v12 >= v9 || (v13 = v17 + v12, v9 > v13) )
    {
      if ( (v11 & 0x20) == 0 )
        CmFcpManagerArmFeatureUsageProviderFlushNotification(v13, 1LL, 0LL);
    }
    else
    {
      if ( dword_140C146F0 != 1 )
        goto LABEL_19;
      if ( CurrentIrql >= 2u )
      {
        if ( CurrentIrql >= 0xFu )
          goto LABEL_19;
        v14 = 2;
      }
      else
      {
        v14 = dword_140C146F0;
      }
      _m_prefetchw(&dword_140C146F4);
      v15 = _InterlockedOr(&dword_140C146F4, v14);
      v16 = ~v15 & v14;
      if ( (v16 & 1) != 0 )
      {
        CmpWorkItemQueueWork(&stru_140C14680);
      }
      else if ( (v16 & 2) != 0 && (v15 & 1) == 0 )
      {
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
      }
    }
  }
  else
  {
    RtlReleaseSwapReference(qword_140C14388, v7);
  }
LABEL_19:
  if ( v4 )
    KeLeaveCriticalRegion();
}
