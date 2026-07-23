/*
 * XREFs of CmShutdownSystem0 @ 0x1406160EC
 * Callers:
 *     CmShutdownSystem @ 0x140A11588 (CmShutdownSystem.c)
 * Callees:
 *     CmFcShutdownSystem @ 0x140A11EF8 (CmFcShutdownSystem.c)
 */

__int64 CmShutdownSystem0()
{
  __int64 result; // rax

  result = CmFcShutdownSystem(0LL);
  CmpDoIdleProcessing = 0;
  CmpNoMoreTx = 1;
  return result;
}
