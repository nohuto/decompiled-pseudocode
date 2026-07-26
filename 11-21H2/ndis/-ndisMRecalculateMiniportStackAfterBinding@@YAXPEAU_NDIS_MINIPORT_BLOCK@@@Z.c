/*
 * XREFs of ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109C44
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0107914 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00208C8 (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0109C6C (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

void __fastcall ndisMRecalculateMiniportStackAfterBinding(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisUpdateMinimumStackVersion(a1, 0, 0);
  ndisUpdateNoPauseOnSuspend(a1);
}
