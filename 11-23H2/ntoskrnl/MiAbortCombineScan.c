/*
 * XREFs of MiAbortCombineScan @ 0x14021AAAC
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x14021C9B4 (MiChangePageAttributeBatch.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiAllocateSlabEntry @ 0x1402E6ED0 (MiAllocateSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402E924C (MiUpdateSlabPagePlaceholderState.c)
 *     MiInitializeMdlBatchPages @ 0x1402F95A0 (MiInitializeMdlBatchPages.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     MiInitializeMdlPfn @ 0x14038C400 (MiInitializeMdlPfn.c)
 *     MiInitializeDynamicPfns @ 0x14061B448 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1406460E8 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     MiPageCombiningActive @ 0x14021AB5C (MiPageCombiningActive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // r14
  _QWORD *v4; // rsi
  _BYTE *v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // zf

  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    v2 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C67240);
    v3 = (_QWORD *)(v2 + 16528);
    v4 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      while ( 1 )
      {
        if ( v4[6] == a1 )
        {
          v5 = (_BYTE *)v4[7];
          if ( (*v5 & 1) != 0 )
            break;
        }
LABEL_4:
        v4 = (_QWORD *)*v4;
        if ( v4 == v3 )
          goto LABEL_5;
      }
      v6 = ZeroPte;
      v7 = 0;
      if ( (unsigned int)MiPteInShadowRange(v4[7]) )
      {
        if ( (unsigned int)MiPteHasShadow(v9, v8, v10) )
        {
          v7 = 1;
          if ( !HIBYTE(word_140C66CFC) )
          {
            v11 = (ZeroPte & 1) == 0;
            goto LABEL_13;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v11 = (ZeroPte & 1) == 0;
LABEL_13:
          if ( !v11 )
            v6 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v5 = v6;
      if ( v7 )
        MiWritePteShadow(v5, v6);
      KeFlushSingleTb((__int64)((_QWORD)v5 << 25) >> 16, 0LL, 1LL);
      goto LABEL_4;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C67240);
  }
}
