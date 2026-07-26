/*
 * XREFs of NdisMReenumerateFailedAdapter @ 0x1C007ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0025EFC (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall NdisMReenumerateFailedAdapter(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rax
  struct _NDIS_IF_BLOCK *v3; // rdi
  struct _NDIS_WORK_ITEM *Pool2; // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x41u,
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      a1);
  if ( a1->DriverHandle->ReenumerateFailedAdapterHandler )
  {
    ReenumerateSelfInterface = a1->ReenumerateSelfInterface;
    if ( ReenumerateSelfInterface )
    {
      if ( ReenumerateSelfInterface->DeviceReset && ndisReferenceMiniport(a1, 9u) )
      {
        v3 = ndisMReferenceIfBlock(a1, 0x13u);
        if ( v3 )
        {
          Pool2 = (struct _NDIS_WORK_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950);
          if ( Pool2 )
          {
            if ( v3->LastMiniportFatalErrorReason == NdisMEvent_Unknown )
              v3->LastMiniportFatalErrorReason = NdisMEventErr_MiniportRequested;
            Pool2->Context = a1;
            Pool2->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedReenumerateFailedAdapter;
            ndisScheduleWorkItemInternal(Pool2);
            return;
          }
          ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR);
        }
        ndisDereferenceMiniport(a1, 9u);
      }
    }
  }
}
