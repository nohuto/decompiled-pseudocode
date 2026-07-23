/*
 * XREFs of HvMarkBaseBlockDirty @ 0x140874A6C
 * Callers:
 *     CmShutdownSystem1 @ 0x140616114 (CmShutdownSystem1.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     HvHiveStartFileBacked @ 0x140701414 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703230 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x1408746CC (CmpCreateHiveRootCell.c)
 *     CmFreezeRegistry @ 0x140A135B0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A137E0 (CmThawRegistry.c)
 *     CmCompressKey @ 0x140A13DB4 (CmCompressKey.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E7524 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1407E453C (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 195) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4136) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 195) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 4136) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0LL, (unsigned __int64 *)&v3, 0);
  }
}
