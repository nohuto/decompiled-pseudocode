/*
 * XREFs of CmShutdownSystem0 @ 0x140615B9C
 * Callers:
 *     CmShutdownSystem @ 0x140A112D8 (CmShutdownSystem.c)
 * Callees:
 *     CmFcShutdownSystem @ 0x140A11C48 (CmFcShutdownSystem.c)
 */

__int64 CmShutdownSystem0()
{
  __int64 result; // rax

  result = CmFcShutdownSystem(0LL);
  CmpDoIdleProcessing = 0;
  CmpNoMoreTx = 1;
  return result;
}
