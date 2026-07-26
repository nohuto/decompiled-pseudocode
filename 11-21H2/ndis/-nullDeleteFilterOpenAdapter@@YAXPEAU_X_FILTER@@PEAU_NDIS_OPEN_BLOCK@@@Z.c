/*
 * XREFs of ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C008AF10
 * Callers:
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013C13C (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0017198 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall nullDeleteFilterOpenAdapter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  XRemoveBindingFromLists(a1, a2);
}
