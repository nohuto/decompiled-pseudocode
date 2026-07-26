/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C013A0D0
 * Callers:
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0103FB4 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisMPauseComplete @ 0x1C00147E0 (NdisMPauseComplete.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015328 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001D894 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001E014 (--1-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@YAX0.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1C00659E4 (-ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A8260 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1C01040BC (-ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0104BD0 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0105370 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
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
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-40h] BYREF
  struct NDISWATCHDOG__ *v14; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS v16; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&v16.Header.Type = 0LL;
  v16.PauseReason = 0;
  memset(&Event, 0, sizeof(Event));
  NewIrql[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_6f1fdeeae41b37a0f4719f2e2ad1af8e_Traceguids,
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
          (struct _GUID *)&WPP_6f1fdeeae41b37a0f4719f2e2ad1af8e_Traceguids,
          a2,
          (char)a1,
          &a1->pAdapterInstanceName->Length);
      v8 = a1->SelectiveSuspend == 0LL;
      v16.PauseReason = a2;
      v16.Header = (_NDIS_OBJECT_HEADER)786816;
      if ( !v8 )
        ndisSetBusySync((__int64)a1, 34LL, 0LL);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v9 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v9 )
        PauseHandler = 0LL;
      else
        PauseHandler = a1->DriverHandle->MiniportDriverCharacteristics.PauseHandler;
      ndisMakeWatchdog(&v14, a1, 33, PauseHandler, 0x41EB0u, 0LL);
      if ( a1->MajorNdisVersion < 6u )
        v12 = ndisLWM5PauseMiniport(a1, v11);
      else
        v12 = ndisMInvokePause(a1, &v16);
      if ( v12 == 259 )
        ndisWaitForEventThenDisarmWatchdog(v14, &Event);
      else
        NdisMPauseComplete(a1);
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>(&v14);
      ndisLogMiniportEvent(a1, NdisMEvent_MiniportPaused);
      if ( a1->SelectiveSuspend )
        ndisClearBusy((__int64)a1, 1, 34);
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
      (struct _GUID *)&WPP_6f1fdeeae41b37a0f4719f2e2ad1af8e_Traceguids,
      a1);
}
