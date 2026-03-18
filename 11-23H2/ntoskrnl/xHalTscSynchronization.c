/*
 * XREFs of xHalTscSynchronization @ 0x14053F530
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x14056C174 (KeAdjustInterruptTime.c)
 */

__int64 __fastcall xHalTscSynchronization(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KeAdjustInterruptTime(0LL, a2);
}
