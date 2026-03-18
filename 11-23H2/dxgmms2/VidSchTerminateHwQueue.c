/*
 * XREFs of VidSchTerminateHwQueue @ 0x1C0045200
 * Callers:
 *     VidSchCreateHwQueue @ 0x1C0043F60 (VidSchCreateHwQueue.c)
 *     VidSchTerminateAdapter @ 0x1C0108850 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C00426B0 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0042B68 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchFlushHwQueue @ 0x1C0107460 (VidSchFlushHwQueue.c)
 */

void __fastcall VidSchTerminateHwQueue(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)a1 + 5);
  VidSchFlushHwQueue();
  if ( (*(_DWORD *)(v1 + 56) & 1) != 0 && *((_QWORD *)a1 + 14) )
  {
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[25])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 24LL) + 8LL));
    *((_QWORD *)a1 + 14) = 0LL;
  }
  VidSchiRemoveHwQueueFromSyncPoints(a1);
  VidSchiDecrementHwQueueReference((char *)a1);
}
