/*
 * XREFs of ?GetPinnedItemForAppID@CPinnedList@@W7EAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x1802ADC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPinnedList::GetPinnedItemForAppID(__int64 a1, const unsigned __int16 *a2, struct _ITEMIDLIST **a3)
{
  return CPinnedList::GetPinnedItemForAppID((CPinnedList *)(a1 - 8), a2, a3);
}
