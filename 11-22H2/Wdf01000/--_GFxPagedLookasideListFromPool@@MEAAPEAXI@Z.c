/*
 * XREFs of ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C0041750
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPagedLookasideListFromPool@@MEAA@XZ @ 0x1C004167C (--1FxPagedLookasideListFromPool@@MEAA@XZ.c)
 */

FxPagedLookasideListFromPool *__fastcall FxPagedLookasideListFromPool::`scalar deleting destructor'(
        FxPagedLookasideListFromPool *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FX_POOL_TRACKER *p_LastTotalAllocates; // rcx

  v3 = a2;
  FxPagedLookasideListFromPool::~FxPagedLookasideListFromPool(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    p_LastTotalAllocates = (FX_POOL_TRACKER *)&this[-1].m_PoolLookaside.L.LastTotalAllocates;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_LastTotalAllocates = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_LastTotalAllocates);
  }
  return this;
}
