/*
 * XREFs of ?ItemChangeNotify@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@0@Z @ 0x1802ADCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::ItemChangeNotify(
        __int64 a1,
        const struct _ITEMIDLIST *a2,
        const struct _ITEMIDLIST *a3)
{
  return CPinnedList::ItemChangeNotify((CPinnedList *)(a1 - 8), a2, a3);
}
