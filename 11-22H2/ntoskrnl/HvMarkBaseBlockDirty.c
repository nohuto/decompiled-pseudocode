/*
 * XREFs of HvMarkBaseBlockDirty @ 0x140874CFC
 * Callers:
 *     CmShutdownSystem1 @ 0x140615C34 (CmShutdownSystem1.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     HvHiveStartFileBacked @ 0x1407012B4 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1407030D0 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x14087495C (CmpCreateHiveRootCell.c)
 *     CmFreezeRegistry @ 0x140A133B0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 *     CmCompressKey @ 0x140A13BB4 (CmCompressKey.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E7294 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1407E47EC (CmpIssueNewDirtyCallback.c)
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
