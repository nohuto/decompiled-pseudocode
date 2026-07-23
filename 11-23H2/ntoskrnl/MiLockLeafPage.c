/*
 * XREFs of MiLockLeafPage @ 0x140218410
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MiReservePageFileSpaceForPage @ 0x140285100 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140294364 (MiActOnPte.c)
 *     MmCopyToCachedPage @ 0x1402CDA60 (MmCopyToCachedPage.c)
 *     MiResolveProtoCombine @ 0x1402E3D88 (MiResolveProtoCombine.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiDeletePerSessionProtos @ 0x14033EE54 (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInitializeNewImageSectionProtos @ 0x140356F30 (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x14035CF3C (MiMakeImageReadOnly.c)
 *     MiPurgeImageSection @ 0x14036A5D8 (MiPurgeImageSection.c)
 *     MiReplacePageOfProtoPool @ 0x14061DF30 (MiReplacePageOfProtoPool.c)
 *     MiIsSubsectionClean @ 0x140624FE4 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140625C24 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14063D0D8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14063D350 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063D4E0 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14063F418 (MiPurgeFileOnlyPfn.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660958 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiInvalidPteConforms @ 0x1402DC6D0 (MiInvalidPteConforms.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140660DA8 (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, __int64 a2)
{
  char v2; // r14
  unsigned __int64 v4; // r8
  unsigned __int64 i; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v11; // rdx
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0xFFFFDE0000000000uLL;
  for ( i = 0x7FFFFFFFFFFFFFFFLL; ; _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), i) )
  {
    while ( 1 )
    {
      v6 = *a1;
      v7 = *a1;
      if ( (*a1 & 1) != 0 )
        goto LABEL_3;
      if ( (*a1 & 0xC00) != 0x800 )
        return 0LL;
      if ( (unsigned int)MiInvalidPteConforms(*a1, a2, v4, i) )
      {
        v7 = v6;
        if ( qword_140C65B40 && (v6 & 0x10) == 0 )
          v7 = v6 & ~qword_140C65B40;
LABEL_3:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140C65BA0 )
        {
          a2 = 6 * v8;
          if ( _bittest64((const signed __int64 *)(48 * v8 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v9 = v4 + 48 * v8;
    if ( (v2 & 1) != 0 )
    {
      MiLockNestedPageAtDpcInline(v4 + 48 * v8, 6 * v8, v4, i);
    }
    else
    {
      v12 = v2 & 1;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        goto LABEL_7;
      do
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    }
    i = 0x7FFFFFFFFFFFFFFFLL;
    v4 = 0xFFFFDE0000000000uLL;
LABEL_7:
    if ( *a1 == v6 )
      break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v11 = v2 & 1 | 2u;
    if ( (v2 & 2) == 0 )
      v11 = v2 & 1;
    return MiLockSpecialPurposeMemoryCachedPage(v9, v11, v4, i);
  }
  return v9;
}
