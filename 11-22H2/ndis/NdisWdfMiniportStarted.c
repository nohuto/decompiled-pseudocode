/*
 * XREFs of NdisWdfMiniportStarted @ 0x1C0060610
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C0116700 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

void __fastcall NdisWdfMiniportStarted(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("((((miniport)->Flags & (0x00000080)) != 0))");
  ndisMSetMiniportReadyForBinding(a1, 1, Reason_MiniportDeviceNotStarted, RunAsynchronous);
}
