/*
 * XREFs of PspAdjustKeepAliveCountProcess @ 0x1409AEAC0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1402BBAA0 (IopDeleteFileObjectExtension.c)
 *     IoIncrementKeepAliveCount @ 0x1405587E0 (IoIncrementKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x140558E40 (IopKeepAliveWorker.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1407385C0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspAdjustKeepAliveCountProcess(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  PspChargeProcessWakeCounter(a1, a4 == 0 ? 2 : 0, 1u, a3, a2, 0, (int *)&v5);
  return (unsigned int)v5;
}
