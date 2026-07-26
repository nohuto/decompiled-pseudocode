/*
 * XREFs of ?ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011EAA0
 * Callers:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065E40 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcFree(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ExFreePoolWithTag(a1->AoAc, 0);
  a1->AoAc = 0LL;
}
