/*
 * XREFs of CmpEnableLazyFlush @ 0x1403B4A38
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403C6C20 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x140616500 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x140A11B78 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140A137E0 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E7524 (CmpArmLazyWriter.c)
 */

void __fastcall CmpEnableLazyFlush(int a1)
{
  unsigned int i; // ebx

  _m_prefetchw(&CmpHoldLazyFlush);
  if ( _InterlockedAnd(&CmpHoldLazyFlush, ~a1) == a1 )
  {
    for ( i = 0; i < 3; ++i )
      CmpArmLazyWriter(i, 0LL, 1);
  }
}
