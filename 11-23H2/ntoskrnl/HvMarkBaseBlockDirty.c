/*
 * XREFs of HvMarkBaseBlockDirty @ 0x14087482C
 * Callers:
 *     CmShutdownSystem1 @ 0x140615BC4 (CmShutdownSystem1.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     HvHiveStartFileBacked @ 0x140701204 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x1407023CC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703020 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
 *     CmFreezeRegistry @ 0x140A13300 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A13530 (CmThawRegistry.c)
 *     CmCompressKey @ 0x140A13B04 (CmCompressKey.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E7294 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1407E426C (CmpIssueNewDirtyCallback.c)
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
