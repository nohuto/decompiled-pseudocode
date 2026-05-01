/*
 * XREFs of ?GetPinnedItem@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1802ADC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPinnedList::GetPinnedItem(__int64 a1, const struct _ITEMIDLIST *a2, struct _ITEMIDLIST **a3)
{
  return CPinnedList::GetPinnedItem((CPinnedList *)(a1 - 8), a2, a3);
}
