/*
 * XREFs of MiInitializeTransitionPfn @ 0x14021AF58
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiInitializeNewImageSectionProtos @ 0x140356F30 (MiInitializeNewImageSectionProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C814 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiProtectionToCacheAttribute @ 0x1402E17F0 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  char v10; // al
  char v11; // al
  unsigned __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 result; // rax
  bool v22; // zf

  v6 = 48 * a1 - 0x220000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)v6 = 0LL;
  v8 = ContainingPageTable;
  v9 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
    v9 = *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL);
  *(_QWORD *)(v6 + 16) = v9;
  *(_QWORD *)(v6 + 40) |= 0x8000000000000000uLL;
  MiSetPfnPteFrame(v6, v8);
  v10 = *(_BYTE *)(v6 + 34);
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  *(_QWORD *)(v6 + 8) = a2;
  if ( (v10 & 0x10) != 0 )
    v11 = v10 & 0xF8 | 3;
  else
    v11 = v10 & 0xF8 | 2;
  *(_BYTE *)(v6 + 34) = v11;
  v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 5) & 0x1F;
  v13 = MiProtectionToCacheAttribute(v12);
  MiFinalizePageAttribute(v6, v13, 1LL);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  if ( a3 == -1 )
  {
    v17 = MiSwizzleInvalidPte(32 * ((unsigned int)v12 | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40));
    v18 = 0;
    if ( !(unsigned int)MiPteInShadowRange(a2) )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow(v19, v14, v15) )
    {
      v18 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
        v22 = (v17 & 1) == 0;
        goto LABEL_17;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v22 = (v17 & 1) == 0;
LABEL_17:
      if ( !v22 )
        v17 |= 0x8000000000000000uLL;
    }
LABEL_6:
    *a2 = v17;
    if ( v18 )
      MiWritePteShadow(a2, v17);
  }
  v20 = 48 * v8 - 0x220000000000LL;
  MiLockNestedPageAtDpcInline(v20, v14, v15, v16);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
