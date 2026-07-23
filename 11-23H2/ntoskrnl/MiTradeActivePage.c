/*
 * XREFs of MiTradeActivePage @ 0x1402EB0B4
 * Callers:
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1406460E8 (MiCompleteSecureProcessFault.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiWriteValidPteNewPage @ 0x1402EB2DC (MiWriteValidPteNewPage.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiActivePageTradeable @ 0x1402EB940 (MiActivePageTradeable.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiTradeActivePage(
        ULONG_PTR a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 v7; // r14
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // rdi
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // eax
  char v18; // al
  char v19; // al
  __int64 v20; // r15
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  BOOL v25; // r14d
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // [rsp+20h] [rbp-38h]

  v7 = a2;
  if ( !(unsigned int)MiActivePageTradeable(a1) )
    return 0LL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4);
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  v11 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v11);
  v16 = v12;
  if ( a5 == 2 )
  {
    if ( (v12 & 0x42) != 0 )
    {
      MiWriteValidPteNewProtection((unsigned __int64)v11, v12 & 0xFFFFFFFFFFFFFFBDuLL);
      KeFlushSingleTb(a3, a4, 2LL);
    }
  }
  else
  {
    v25 = 0;
    v26 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
      v25 = MiPteHasShadow(v28, v27, v29) != 0;
    *v11 = v26;
    if ( v25 )
      MiWritePteShadow(v11, v16 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    KeFlushSingleTb(a3, a4, a5);
    v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
    v7 = a2;
  }
  v17 = *(unsigned __int8 *)(a1 + 34) >> 6;
  a6 = 0;
  v34 = v17;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  MiLockNestedPageAtDpcInline(v7, v13, v14, v15);
  MiFinalizePageAttribute(v7, v34, 1u);
  MiCopyPfnEntryEx(v7, (__int128 *)a1);
  MiCopyPage(v9, v10, 6);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = *(_BYTE *)(a1 + 35);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 35) = v18 & 0xF7;
  v19 = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = v19;
  *(_BYTE *)(a1 + 34) = v19 & 0xC7;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = (v9 & 0xFFFFFFFFFFLL) << 12;
  v21 = v20 | v16 & 0xFFF0000000000FFFuLL;
  if ( a5 != 2 )
  {
    v30 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v11) )
      goto LABEL_27;
    if ( (unsigned int)MiPteHasShadow(v32, v31, v33) )
    {
      v30 = 1;
      if ( HIBYTE(word_140C66CFC) )
      {
LABEL_27:
        *v11 = v21;
        if ( v30 )
          MiWritePteShadow(v11, v21);
        goto LABEL_9;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_27;
    }
    if ( (v21 & 1) != 0 )
      v21 |= 0x8000000000000000uLL;
    goto LABEL_27;
  }
  MiWriteValidPteNewPage(v11, v21, 0LL);
LABEL_9:
  KeFlushSingleTb(a3, a4, a5);
  if ( *(__int64 *)(v7 + 40) < 0 )
  {
    v22 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
    v23 = MI_READ_PTE_LOCK_FREE(v22);
    MiWriteValidPteNewPage(v22, v20 | v23 & 0xFFF0000000000FFFuLL, 0LL);
  }
  return 1LL;
}
