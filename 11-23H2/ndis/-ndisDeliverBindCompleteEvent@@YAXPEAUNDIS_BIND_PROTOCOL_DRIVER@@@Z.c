/*
 * XREFs of ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0112304
 * Callers:
 *     _lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_ @ 0x1C0112160 (_lambda_b620d5060cec3b68d836340d92a5e127_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F430 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001F584 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C01171BC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisDeliverBindCompleteEvent(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rbx
  int v3; // r9d
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v4.m_State = Unlocked;
  v4.m_Region.m_Entered = 0;
  v4.m_Lock = (KPushLockBase *)(qword_1C00F5728 + 16);
  KLockHolder::AcquireExclusive(&v4);
  RunningDriver = a1->RunningDriver;
  if ( RunningDriver && (RunningDriver->MajorNdisVersion >= 6u || RunningDriver->PnPEventHandler) )
  {
    if ( ndisReferenceProtocol(RunningDriver, 0xCu) )
    {
      KLockHolder::ReleaseExclusive(&v4);
      if ( _InterlockedCompareExchange(&RunningDriver->NotifyBindCompleteWorkItem.m_queued, 1, 0) )
        ndisDereferenceProtocol(RunningDriver, 1, 0xCu, v3);
      else
        ExQueueWorkItem(&RunningDriver->NotifyBindCompleteWorkItem.m_workitem, NormalWorkQueue);
    }
  }
  KLockHolder::~KLockHolder(&v4);
}
