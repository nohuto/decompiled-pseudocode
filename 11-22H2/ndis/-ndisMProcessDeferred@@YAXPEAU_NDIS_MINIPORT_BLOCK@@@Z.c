/*
 * XREFs of ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C874
 * Callers:
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C005CDB0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C006D390 (-ndisMReset@@YAHPEAX@Z.c)
 *     NdisIMQueueMiniportCallback @ 0x1C006F200 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C006F380 (NdisIMRevertBack.c)
 *     ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00B1770 (-ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00C46C0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1C00C708C (ndisMDpc.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C8410 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C00CD800 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009AF0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006B058 (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006CC8C (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C006D714 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D7DC (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMProcessDeferred(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rcx
  char v3; // bp
  _SINGLE_LIST_ENTRY *v4; // rcx
  _SINGLE_LIST_ENTRY *v5; // rcx
  _SINGLE_LIST_ENTRY *v6; // rbp
  _SINGLE_LIST_ENTRY *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // esi
  int v11; // eax
  unsigned __int8 v12; // cl
  _SINGLE_LIST_ENTRY *v13; // rcx
  _SINGLE_LIST_ENTRY *v14; // rcx
  _SINGLE_LIST_ENTRY *v15; // rcx
  unsigned __int8 v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x31u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  while ( 1 )
  {
    Next = a1->WorkQueue[1].Next;
    v3 = 0;
    if ( Next && (a1->Flags & 0x80300000) == 0 )
    {
      a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)Next->Next;
      Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
      a1->SingleWorkItems[1].Next = Next;
      a1->DeferredSendHandler(a1);
      v3 = 1;
    }
    if ( a1->WorkQueue[4].Next )
      break;
    v4 = a1->WorkQueue[2].Next;
    if ( v4 )
    {
      a1->WorkQueue[2] = (_SINGLE_LIST_ENTRY)v4->Next;
      v4->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[2];
      a1->SingleWorkItems[2].Next = v4;
      ndisMDeferredReturnPackets(a1);
    }
    if ( (a1->Flags & 0x80000000) != 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xCu,
          0x32u,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          a1);
      if ( (byte_1C00F7643 & 1) != 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          (__int64)v4,
          (__int64)&NotifyMiniportAction,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          0);
      goto LABEL_35;
    }
    v5 = a1->WorkQueue[6].Next;
    if ( v5 )
    {
      a1->WorkQueue[6] = (_SINGLE_LIST_ENTRY)v5->Next;
      v6 = v5[2].Next;
      v7 = v5[3].Next;
      ExFreePoolWithTag(v5, 0);
      if ( v7 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        ((void (__fastcall *)(void *, _SINGLE_LIST_ENTRY *))v7)(a1->MiniportAdapterContext, v6);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      v3 = 1;
    }
    if ( a1->WorkQueue[3].Next )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xCu,
          0x33u,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          a1);
      if ( (byte_1C00F7643 & 1) != 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          (__int64)v5,
          (__int64)&NotifyMiniportAction,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1);
      v8 = ndisMProcessResetRequested(a1, &v16);
      v10 = v8;
      if ( v8 == 259 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xCu,
            0x34u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            a1);
        if ( (byte_1C00F7643 & 1) != 0 )
          McTemplateK0jqxq_EtwWriteTransfer(
            v9,
            (__int64)&NotifyMiniportAction,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            2);
        goto LABEL_35;
      }
      v11 = ndisMResetCompleteStage1(a1, v8, v16);
      v12 = v16;
      if ( v11 )
        v12 = 0;
      v16 = v12;
      if ( !v12 || v10 )
      {
        ndisMResetCompleteStage2(a1);
        goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      v13 = a1->WorkQueue[0].Next;
      if ( v13 )
      {
        a1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v13->Next;
        v13->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
        a1->SingleWorkItems[0].Next = v13;
        ndisMDoOidRequest(a1);
        v3 = 1;
      }
      v14 = a1->WorkQueue[1].Next;
      if ( v14 )
      {
        a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)v14->Next;
        v14->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
        a1->SingleWorkItems[1].Next = v14;
        a1->DeferredSendHandler(a1);
      }
      else if ( !v3 )
      {
        goto LABEL_35;
      }
    }
  }
  v15 = a1->WorkQueue[0].Next;
  if ( v15 )
  {
    a1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v15->Next;
    v15->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
    a1->SingleWorkItems[0].Next = v15;
    ndisMDoOidRequest(a1);
  }
LABEL_35:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x35u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
}
