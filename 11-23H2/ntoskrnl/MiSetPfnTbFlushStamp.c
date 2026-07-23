/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1402E18C0
 * Callers:
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiInitializePfn @ 0x1402E12D0 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiGetPoolPages @ 0x1402E3594 (MiGetPoolPages.c)
 *     MiGetPageTablePages @ 0x1402E4348 (MiGetPageTablePages.c)
 *     MiUpdatePageAttributeStamp @ 0x140334F08 (MiUpdatePageAttributeStamp.c)
 *     MiCreatePfnTemplate @ 0x1403756F4 (MiCreatePfnTemplate.c)
 *     MiConvertLargePfnToSmall @ 0x14038FD6C (MiConvertLargePfnToSmall.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B8540 (MiConvertSmallPageRangeToLarge.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406294CC (MiUpdateLargePageSectionPfns.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EFC0 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x14064E1BC (MiPerformFinalZeroing.c)
 *     MiDeleteSubsectionLargePages @ 0x14064F2F8 (MiDeleteSubsectionLargePages.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 *     MiAllocateDummyPage @ 0x140B44E78 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v4 = (unsigned __int64)(a2 & 7) << 59;
  if ( a3 )
  {
    result = v4 | *(_QWORD *)(a1 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 | v6 & 0xC7FFFFFFFFFFFFFFuLL, v6);
    v7 = result;
    if ( v6 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v4 | v7 & 0xC7FFFFFFFFFFFFFFuLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
