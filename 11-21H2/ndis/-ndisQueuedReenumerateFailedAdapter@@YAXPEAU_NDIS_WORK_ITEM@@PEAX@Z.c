/*
 * XREFs of ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C012A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00798EC (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedReenumerateFailedAdapter(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMReenumerateFailedAdapterInternal(a2);
  ndisMDereferenceIfBlock(a2, MPIFREF_FATAL_ERROR);
  ndisDereferenceMiniport(a2, 9u);
  ExFreePoolWithTag(P, 0);
}
