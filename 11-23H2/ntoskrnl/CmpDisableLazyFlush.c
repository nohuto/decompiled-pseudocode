/*
 * XREFs of CmpDisableLazyFlush @ 0x140616A44
 * Callers:
 *     CmSetLazyFlushState @ 0x140A11B78 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140A135B0 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
