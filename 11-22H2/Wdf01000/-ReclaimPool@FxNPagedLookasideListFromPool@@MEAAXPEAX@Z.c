/*
 * XREFs of ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C000E240
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x1C000C8F8 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxNPagedLookasideListFromPool::ReclaimPool(FxNPagedLookasideListFromPool *this, _SLIST_ENTRY *Pool)
{
  FxFreeToNPagedLookasideList((_PAGED_LOOKASIDE_LIST *)&this->m_PoolLookaside, Pool);
}
