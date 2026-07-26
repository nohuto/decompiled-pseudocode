/*
 * XREFs of NdisWdfNotifyWmiAdapterArrival @ 0x1C0060660
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034820 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall NdisWdfNotifyWmiAdapterArrival(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("((((miniport)->Flags & (0x00000080)) != 0))");
  ndisNotifyWmiAdapterArrival(a1);
}
