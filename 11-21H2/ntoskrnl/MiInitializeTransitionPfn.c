/*
 * XREFs of MiInitializeTransitionPfn @ 0x1402E4724
 * Callers:
 *     MiInitializeNewImageSectionProtos @ 0x140243208 (MiInitializeNewImageSectionProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  char v10; // al
  char v11; // al
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 TransitionPte; // rbx
  int v15; // esi
  __int64 v16; // rbx
  __int64 result; // rax
  bool v18; // zf

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
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  v10 = *(_BYTE *)(v6 + 34);
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
    TransitionPte = MiMakeTransitionPte(a1, (unsigned int)v12);
    v15 = 0;
    if ( !(unsigned int)MiPteInShadowRange(a2) )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v18 = (TransitionPte & 1) == 0;
        goto LABEL_17;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v18 = (TransitionPte & 1) == 0;
LABEL_17:
      if ( !v18 )
        TransitionPte |= 0x8000000000000000uLL;
    }
LABEL_6:
    *a2 = TransitionPte;
    if ( v15 )
      MiWritePteShadow((__int64)a2, TransitionPte);
  }
  v16 = 48 * v8 - 0x220000000000LL;
  MiLockNestedPageAtDpcInline(v16);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
