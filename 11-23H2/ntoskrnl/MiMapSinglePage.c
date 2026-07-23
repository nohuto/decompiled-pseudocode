/*
 * XREFs of MiMapSinglePage @ 0x140217D58
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x14035A31C (MiCombineWithStandbyExisting.c)
 *     MiInitializeForkMaps @ 0x1406655F4 (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x140665980 (MiUpdateForkMaps.c)
 *     MiFillPerSessionProtos @ 0x140A4A25C (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x140217E64 (MiMakeProtectionPfnCompatible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  bool v17; // zf
  unsigned __int64 v18; // rbx
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf

  v7 = a1;
  if ( a1 )
  {
    v8 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !MI_READ_PTE_LOCK_FREE(v8) )
      goto LABEL_3;
    v18 = ZeroPte;
    v19 = 0;
    if ( (unsigned int)MiPteInShadowRange(v8) )
    {
      if ( (unsigned int)MiPteHasShadow(v21, v20, v22) )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C66CFC) )
        {
          v23 = (ZeroPte & 1) == 0;
          goto LABEL_23;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v23 = (ZeroPte & 1) == 0;
LABEL_23:
        if ( !v23 )
          v18 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v8 = v18;
    if ( v19 )
      MiWritePteShadow(v8, v18);
    KeFlushSingleTb(v7, 0LL, 1LL);
    goto LABEL_3;
  }
  result = MiReservePtes(&qword_140C69940, 1LL);
  v8 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = result << 25 >> 16;
  if ( (a4 & 2) != 0 )
  {
    ValidPte = ZeroPte;
    goto LABEL_6;
  }
LABEL_3:
  v9 = (((a3 >> 31) & 0xFFFFFFFD) + 4) | 2;
  if ( (a3 & 0x40000000) != 0 )
    v9 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v9, 48 * a2 - 0x220000000000LL);
  ValidPte = MiMakeValidPte(v8, a2, ProtectionPfnCompatible | 0xA0000000);
LABEL_6:
  v12 = 0;
  if ( (unsigned int)MiPteInShadowRange(v8) )
  {
    if ( (unsigned int)MiPteHasShadow(v14, v13, v15) )
    {
      v12 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_7;
      v17 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v17 = (ValidPte & 1) == 0;
    }
    if ( !v17 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v8 = ValidPte;
  if ( v12 )
    MiWritePteShadow(v8, ValidPte);
  return v7;
}
