/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0148F94
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0110744 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0006BD4 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0006BE0 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DqqZZ @ 0x1C0017268 (WPP_RECORDER_SF_DqqZZ.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001DF4C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0063154 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C010F788 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x1C01108A0 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0112654 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0116B40 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  struct _NDIS_FILTER_BLOCK *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r9
  int v8; // eax
  struct NDISWATCHDOG__ *v9; // rbx
  struct _NDIS_FILTER_BLOCK *v10; // rcx
  KIRQL v11; // dl
  int v12; // [rsp+20h] [rbp-39h]
  int v13; // [rsp+28h] [rbp-31h]
  KIRQL NewIrql[8]; // [rsp+50h] [rbp-9h] BYREF
  struct NDISWATCHDOG__ *v15; // [rsp+58h] [rbp-1h] BYREF
  __int128 v16; // [rsp+60h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+17h] BYREF
  struct _NDIS_FILTER_PAUSE_PARAMETERS v18; // [rsp+88h] [rbp+2Fh] BYREF

  Miniport = a1->Miniport;
  v16 = 0LL;
  *(_QWORD *)&v18.Header.Type = 0LL;
  memset(&Event, 0, sizeof(Event));
  v18.PauseReason = 0;
  NewIrql[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = (int)a1;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids);
  }
  if ( a1->State == NdisFilterRunning )
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v3, 2);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql[0]);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DqqZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v5, v6, v12, v13, (char)Miniport);
    a1->State = NdisFilterPausing;
    if ( (byte_1C00F7643 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        5,
        1,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    FilterDriver = a1->FilterDriver;
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v16;
    v18.Header = (_NDIS_OBJECT_HEADER)786842;
    v18.PauseReason = 1;
    ndisMakeWatchdog(&v15, a1, 17, FilterDriver->DefaultFilterCharacteristics.PauseHandler, 0x41EB0u, 0LL);
    v8 = ndisFInvokePause(a1, &v18);
    v9 = v15;
    if ( v8 == 259 )
      ndisWaitForEventThenDisarmWatchdog(v15, &Event);
    if ( v9 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v9);
    a1->AsyncOpContext = 0LL;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v10, 4);
    v11 = NewIrql[0];
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v11);
    a1->State = NdisFilterPaused;
    if ( (byte_1C00F7643 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        2,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      a1);
}
