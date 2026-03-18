/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140284800
 * Callers:
 *     MiMakeCombineCandidateClean @ 0x14021743C (MiMakeCombineCandidateClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x140285870 (MiMakePteClean.c)
 *     MiActOnPte @ 0x1402940D4 (MiActOnPte.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5B30 (MiUnlockNestedPageTableWritePte.c)
 *     MiTradeActivePage @ 0x1402EAE24 (MiTradeActivePage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiValidFault @ 0x1403334E0 (MiValidFault.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D3AC (MiFlushDirtyBitsToPfn.c)
 *     MiMarkPteDirty @ 0x14034B510 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x140351578 (MiDirtySystemCachePte.c)
 *     MiRevokeExecutePte @ 0x140358B90 (MiRevokeExecutePte.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MmSetPageProtection @ 0x1403C2C70 (MmSetPageProtection.c)
 *     MiPerformSafePdeWrite @ 0x1403C6498 (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x14061EDD0 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x140643A30 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x14064646C (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140648B88 (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MxCreatePfnsForPtes @ 0x140B586A0 (MxCreatePfnsForPtes.c)
 *     MiProtectSharedUserPage @ 0x140B6F3F8 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140271360 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14035734C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1403573AC (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiWriteValidPteNewProtection(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  struct _KTHREAD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _LIST_ENTRY *Flink; // r8
  __int64 v10; // rax
  __int64 v11; // r8

  v2 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v11 = v2 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = *(_QWORD *)a1;
      v2 = v11;
      if ( (v10 & 0x42) != 0 )
        v2 = v11 | 0x42;
    }
  }
  v4 = a2 ^ (a2 ^ v2) & 0x7F00000000000000LL;
  result = (struct _KTHREAD *)MiPteInShadowRange(a1);
  if ( !(_DWORD)result )
    goto LABEL_3;
  if ( !(unsigned int)MiPteHasShadow(v7, v6, v8) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v4 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v4 |= 0x8000000000000000uLL;
    }
LABEL_3:
    *(_QWORD *)a1 = v4;
    return result;
  }
  if ( !HIBYTE(word_140C66CFC) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v4);
}
