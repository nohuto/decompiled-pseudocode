/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x1407D0B00
 * Callers:
 *     CmpAbortRollbackPacket @ 0x140699F88 (CmpAbortRollbackPacket.c)
 *     CmpCloseLightWeightTransaction @ 0x1407D0AB0 (CmpCloseLightWeightTransaction.c)
 *     NtRollbackRegistryTransaction @ 0x140A0ED40 (NtRollbackRegistryTransaction.c)
 *     CmpRollbackTransactionArray @ 0x140A1E9B0 (CmpRollbackTransactionArray.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     ExBlockOnAddressPushLock @ 0x140348930 (ExBlockOnAddressPushLock.c)
 *     CmpAbortLightWeightTransaction @ 0x1407D0B68 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(__int64 a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 0);
  LODWORD(v6) = v2;
  if ( v2 == 1 )
  {
    LODWORD(v6) = _InterlockedCompareExchange((volatile signed __int32 *)a1, 4, 1);
    if ( (_DWORD)v6 != 1 )
    {
      v3 = -1072103421;
      goto LABEL_4;
    }
    v3 = 0;
    LODWORD(v6) = 4;
    ExBlockOnAddressPushLock((volatile __int64 *)(a1 + 8), (_QWORD *)a1, &v6, 4uLL, 0LL);
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
