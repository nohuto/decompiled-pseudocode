/*
 * XREFs of ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138C20
 * Callers:
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138D08 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D4C (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C00215E0 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisSelectiveSuspendFree(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi

  SelectiveSuspend = a1->SelectiveSuspend;
  KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
  ndisWaitForKernelObject((char *)SelectiveSuspend + 152);
  v3 = (char *)*((_QWORD *)SelectiveSuspend + 75);
  if ( v3 )
  {
    v4 = 0LL;
    v5 = 5LL;
    do
    {
      if ( *(_QWORD *)&v3[v4 + 8] )
      {
        ExFreePoolWithTag(*(PVOID *)&v3[v4 + 8], 0);
        *(_QWORD *)(v4 + *((_QWORD *)SelectiveSuspend + 75) + 8) = 0LL;
        v3 = (char *)*((_QWORD *)SelectiveSuspend + 75);
      }
      v4 += 24LL;
      --v5;
    }
    while ( v5 );
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)SelectiveSuspend + 75) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*((_QWORD *)SelectiveSuspend + 76));
  NdisNblTrackerDeregisterComponent(*((_QWORD *)SelectiveSuspend + 77));
  ExFreePoolWithTag(SelectiveSuspend, 0);
  a1->SelectiveSuspend = 0LL;
}
