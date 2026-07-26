/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01484E0
 * Callers:
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0110164 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C00168E0 (WPP_RECORDER_SF_LqZ.c)
 *     NdisMPauseComplete @ 0x1C0016B10 (NdisMPauseComplete.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001EA90 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020FFC (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EFAE (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1C006ACC4 (-ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AE3D8 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C010F748 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1C011026C (-ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0112614 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0116B00 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisMPauseMiniportInner(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  unsigned __int64 *p_Lock; // rcx
  KIRQL v5; // dl
  __int64 v6; // rdx
  __int64 v7; // r8
  bool v8; // zf
  bool v9; // cf
  int (__fastcall *PauseHandler)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *); // r9
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS *v11; // rdx
  int v12; // eax
  struct NDISWATCHDOG__ *v13; // rbx
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-40h] BYREF
  struct NDISWATCHDOG__ *v15; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS v17; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&v17.Header.Type = 0LL;
  v17.PauseReason = 0;
  memset(&Event, 0, sizeof(Event));
  NewIrql[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_3780f8d1fffe30c913701ae5a436082a_Traceguids,
      a1);
  if ( ndisReferenceMiniportByHandle(a1, 0, 0x1Au) )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    p_Lock = &a1->Lock;
    if ( a1->State == NdisMiniportRunning )
    {
      a1->MiniportThread = 0LL;
      v5 = NewIrql[0];
      a1->State = NdisMiniportPausing;
      KeReleaseSpinLock(p_Lock, v5);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_LqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          v7,
          0xBu,
          (struct _GUID *)&WPP_3780f8d1fffe30c913701ae5a436082a_Traceguids,
          a2,
          (char)a1,
          &a1->pAdapterInstanceName->Length);
      v8 = a1->SelectiveSuspend == 0LL;
      v17.Header = (_NDIS_OBJECT_HEADER)786816;
      v17.PauseReason = a2;
      if ( !v8 )
        ndisSetBusySync((__int64)a1, 34LL, 0LL);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v9 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v9 )
        PauseHandler = 0LL;
      else
        PauseHandler = a1->DriverHandle->MiniportDriverCharacteristics.PauseHandler;
      ndisMakeWatchdog(&v15, a1, 33, PauseHandler, 0x41EB0u, 0LL);
      if ( a1->MajorNdisVersion < 6u )
        v12 = ndisLWM5PauseMiniport(a1, v11);
      else
        v12 = ndisMInvokePause(a1, &v17);
      v13 = v15;
      if ( v12 == 259 )
        ndisWaitForEventThenDisarmWatchdog(v15, &Event);
      else
        NdisMPauseComplete(a1);
      if ( v13 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog(v13);
      ndisLogMiniportEvent(a1, NdisMEvent_MiniportPaused);
      if ( a1->SelectiveSuspend )
        ndisClearBusy(a1, 1, 34);
      a1->State = NdisMiniportPaused;
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, NewIrql[0]);
    }
    ndisDereferenceMiniport(a1, 0x1Au);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_3780f8d1fffe30c913701ae5a436082a_Traceguids,
      a1);
}
