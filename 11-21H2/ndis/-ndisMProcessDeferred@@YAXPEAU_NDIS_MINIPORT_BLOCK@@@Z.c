/*
 * XREFs of ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00674F8
 * Callers:
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C0057B80 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C0067FD0 (-ndisMReset@@YAHPEAX@Z.c)
 *     NdisIMQueueMiniportCallback @ 0x1C0069E50 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C0069FD0 (NdisIMRevertBack.c)
 *     ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00ABD60 (-ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00BFAE0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1C00C245C (ndisMDpc.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C37F0 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C00C8B30 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 * Callees:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065D9C (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00678D0 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C0068354 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006841C (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMProcessDeferred(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rcx
  char v3; // si
  _SINGLE_LIST_ENTRY *v4; // rcx
  _SINGLE_LIST_ENTRY *v5; // rcx
  _SINGLE_LIST_ENTRY *v6; // rbp
  _SINGLE_LIST_ENTRY *v7; // rsi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  unsigned __int8 v11; // cl
  _SINGLE_LIST_ENTRY *v12; // rcx
  _SINGLE_LIST_ENTRY *v13; // rcx
  _SINGLE_LIST_ENTRY *v14; // rcx
  unsigned __int8 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x31u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  while ( 1 )
  {
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
      {
        v14 = a1->WorkQueue[0].Next;
        if ( v14 )
        {
          a1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v14->Next;
          v14->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
          a1->SingleWorkItems[0].Next = v14;
          ndisMDoOidRequest(a1);
        }
        goto LABEL_41;
      }
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
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            a1);
        if ( (byte_1C00EE583 & 1) != 0 )
          goto LABEL_38;
        goto LABEL_41;
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
        break;
LABEL_25:
      v12 = a1->WorkQueue[0].Next;
      if ( v12 )
      {
        a1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v12->Next;
        v12->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
        a1->SingleWorkItems[0].Next = v12;
        ndisMDoOidRequest(a1);
        v3 = 1;
      }
      v13 = a1->WorkQueue[1].Next;
      if ( v13 )
      {
        a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)v13->Next;
        v13->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
        a1->SingleWorkItems[1].Next = v13;
        a1->DeferredSendHandler(a1);
      }
      else if ( !v3 )
      {
        goto LABEL_41;
      }
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xCu,
        0x33u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        a1);
    if ( (byte_1C00EE583 & 1) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
    v8 = ndisMProcessResetRequested(a1, &v15);
    v9 = v8;
    if ( v8 == 259 )
      break;
    v10 = ndisMResetCompleteStage1(a1, v8, v15);
    v11 = v15;
    if ( v10 )
      v11 = 0;
    v15 = v11;
    if ( !v11 || v9 )
    {
      ndisMResetCompleteStage2(a1);
      goto LABEL_25;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x34u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  if ( (byte_1C00EE583 & 1) != 0 )
LABEL_38:
    McTemplateK0jqxd_EtwWriteTransfer();
LABEL_41:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x35u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
}
