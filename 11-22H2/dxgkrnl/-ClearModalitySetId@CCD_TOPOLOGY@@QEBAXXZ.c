/*
 * XREFs of ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C017FC64
 * Callers:
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C017FC38 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C018433C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C03BBA30 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C03BBB78 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C03BBC6C (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C03BC170 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01824E0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

void __fastcall CCD_TOPOLOGY::ClearModalitySetId(void **this)
{
  operator delete(this[7]);
  this[7] = 0LL;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
}
