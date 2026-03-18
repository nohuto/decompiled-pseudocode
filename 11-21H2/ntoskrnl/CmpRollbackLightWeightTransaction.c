/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x1406E25B0
 * Callers:
 *     NtRollbackRegistryTransaction @ 0x140661090 (NtRollbackRegistryTransaction.c)
 *     CmpAbortRollbackPacket @ 0x1406A0010 (CmpAbortRollbackPacket.c)
 *     CmpCloseLightWeightTransaction @ 0x1406E2590 (CmpCloseLightWeightTransaction.c)
 *     CmpRollbackTransactionArray @ 0x14091BC64 (CmpRollbackTransactionArray.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     CmpAbortLightWeightTransaction @ 0x1406E2624 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  v2 = _InterlockedCompareExchange(a1, 3, 0);
  LODWORD(v6) = v2;
  if ( v2 == 1 )
  {
    LODWORD(v6) = _InterlockedCompareExchange(a1, 4, 1);
    if ( (_DWORD)v6 != 1 )
    {
      v3 = -1072103421;
      goto LABEL_4;
    }
    v3 = 0;
    LODWORD(v6) = 4;
    ExBlockOnAddressPushLock((__int64)(a1 + 2), a1, &v6, 4uLL, 0LL);
    goto LABEL_3;
  }
  v3 = 0;
  if ( !v2 )
  {
LABEL_3:
    CmpAbortLightWeightTransaction(a1);
    goto LABEL_4;
  }
  v3 = -1072103421;
  if ( v2 == 3 )
    v3 = -1072103403;
LABEL_4:
  CmCleanupThreadInfo(v5);
  return v3;
}
