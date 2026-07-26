/*
 * XREFs of ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C014A1D4
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0116428 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0006D64 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0006D70 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001E0DC (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0020638 (WPP_RECORDER_SF_qqZZ.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0063174 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z @ 0x1C01175BC (-ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z.c)
 */

__int64 __fastcall ndisRestartFilterInner(struct _NDIS_FILTER_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct _NDIS_FILTER_BLOCK *v5; // rcx
  KIRQL v6; // dl
  __int64 v7; // rdx
  __int64 v8; // r8
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  unsigned int v10; // edi
  struct _NDIS_FILTER_BLOCK *v11; // rcx
  KIRQL v12; // dl
  _NDIS_MINIPORT_BLOCK *v14; // rcx
  struct _NDIS_FILTER_BLOCK *v15; // rcx
  char v16[8]; // [rsp+30h] [rbp-39h]
  __int128 v17; // [rsp+50h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-9h] BYREF
  struct _NDIS_FILTER_RESTART_PARAMETERS v19; // [rsp+78h] [rbp+Fh] BYREF
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h] BYREF

  Miniport = a1->Miniport;
  *((_DWORD *)&v19.MiniportPhysicalMediaType + 1) = 0;
  *(&v19.LowerIfIndex + 1) = 0;
  *(_QWORD *)&v19.Flags = 0LL;
  v17 = 0LL;
  memset(&Event, 0, sizeof(Event));
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      a1);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  FILTER_CLEAR_ALL_STATE_FLAGS(a1);
  FILTER_SET_FLAG(v5, 32);
  v6 = NewIrql;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  a1->State = NdisFilterRestarting;
  if ( (byte_1C00F7643 & 1) != 0 )
    McTemplateK0juqjzzz_EtwWriteTransfer(
      (__int64)&a1->Miniport->InterfaceGuid,
      (__int64)a1->FilterInstanceName.__ptr_.__value_,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      3,
      3,
      (__int64)&a1->Miniport->InterfaceGuid,
      a1->Miniport->pAdapterInstanceName->Buffer,
      a1->FilterInstanceName.__ptr_.__value_->Buffer,
      a1->FilterFriendlyName->Buffer);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LowerFilter = a1->LowerFilter;
  a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v17;
  v19.Header = (_NDIS_OBJECT_HEADER)3146139;
  v19.RestartAttributes = &a2->Attributes;
  if ( LowerFilter )
  {
    v19.MiniportMediaType = LowerFilter->MediaType;
    v19.MiniportPhysicalMediaType = LowerFilter->PhysicalMediaType;
    v19.LowerIfIndex = LowerFilter->IfIndex;
    v19.LowerIfNetLuid.Value = LowerFilter->IfBlock->NetLuid.Value;
  }
  else
  {
    v14 = a1->Miniport;
    v19.MiniportMediaType = v14->MiniportMediaType;
    v19.MiniportPhysicalMediaType = v14->MiniportPhysicalMediumType;
    v19.LowerIfIndex = v14->IfIndex;
    v19.LowerIfNetLuid.Value = v14->NetLuid.Value;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      v8,
      0x10u,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      (char)Miniport,
      (char)a1,
      &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
      &Miniport->pAdapterInstanceName->Length);
  v10 = ndisFInvokeRestart(a1, &v19);
  if ( v10 == 259 )
  {
    ndisWaitForKernelObject(&Event);
    v10 = DWORD2(v17);
  }
  a1->AsyncOpContext = 0LL;
  if ( v10 )
  {
    a1->State = NdisFilterPaused;
    if ( (byte_1C00F7643 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        4,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v15, 4);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
  }
  else
  {
    a1->IfBlock->AccessType = a2->General.AccessType;
    a1->IfBlock->ConnectionType = a2->General.ConnectionType;
    a1->IfBlock->ifMtu = a2->General.MtuSize;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v11, 16);
    v12 = NewIrql;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v12);
    a1->State = NdisFilterRunning;
    if ( (byte_1C00F7643 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        4,
        5,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = v10;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      (char)a1,
      *(_QWORD *)v16);
  }
  return v10;
}
