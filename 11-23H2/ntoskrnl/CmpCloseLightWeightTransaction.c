/*
 * XREFs of CmpCloseLightWeightTransaction @ 0x1407D0AB0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmpRollbackLightWeightTransaction @ 0x1407D0B00 (CmpRollbackLightWeightTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpCloseLightWeightTransaction(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v10 = 0LL;
  CmpInitializeThreadInfo((__int64)v10);
  if ( v6 == 1 && (unsigned __int8)CmpAcquireShutdownRundown(v4, v3, v5) )
  {
    CmpRollbackLightWeightTransaction(a2);
    CmpReleaseShutdownRundown(v8, v7);
  }
  return CmCleanupThreadInfo(v10);
}
