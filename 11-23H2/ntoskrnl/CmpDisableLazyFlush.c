/*
 * XREFs of CmpDisableLazyFlush @ 0x1406164F4
 * Callers:
 *     CmSetLazyFlushState @ 0x140A118C8 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140A13300 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
