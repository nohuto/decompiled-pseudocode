/*
 * XREFs of ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00ACB44
 * Callers:
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00ACC84 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00ACE40 (-ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020E6C (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C003F50C (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisCancelIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v7; // al
  KIRQL v8; // bp

  SelectiveSuspend = a1->SelectiveSuspend;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v8 = v7;
  if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x84) == 4 )
  {
    *((_DWORD *)SelectiveSuspend + 126) |= 0x80u;
    if ( a2 )
      ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, 1, a2, a3);
    *((_QWORD *)SelectiveSuspend + 82) = MEMORY[0xFFFFF78000000014];
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
    ndisWaitForKernelObject((char *)SelectiveSuspend + 224);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x1Au,
        (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
        (char)a1,
        a2);
    ndisLogMiniportEvent(a1, NdisMEvent_SSCancelIdle);
    a1->DriverHandle->CancelIdleNotificationHandler(a1->MiniportAdapterContext);
    return 1;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
    return 0;
  }
}
