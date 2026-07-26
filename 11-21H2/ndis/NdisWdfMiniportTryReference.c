/*
 * XREFs of NdisWdfMiniportTryReference @ 0x1C005B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

char __fastcall NdisWdfMiniportTryReference(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("(((miniport)->Flags & (0x00000080)) != 0)");
  return ndisReferenceMiniport(a1, 0x6Du);
}
