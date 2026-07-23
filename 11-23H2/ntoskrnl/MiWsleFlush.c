/*
 * XREFs of MiWsleFlush @ 0x1402810A0
 * Callers:
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleProtection @ 0x140216124 (MiGetWsleProtection.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiCheckReservePageFileSpace @ 0x140283270 (MiCheckReservePageFileSpace.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5DC0 (MiUnlockNestedPageTableWritePte.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x14036A42C (MiLockedPageTableHasActiveLargeEntries.c)
 *     MiClonePteReadonly @ 0x140663774 (MiClonePteReadonly.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  int v6; // edi
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r9
  signed __int64 v10; // rbp
  __int64 *v11; // r15
  unsigned __int64 v12; // rax
  signed __int64 v13; // r12
  __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  char *v16; // rbp
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned int v24; // ecx
  char v25; // r11
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  int WsleProtection; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rsi
  unsigned __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v50; // r8
  int HasShadow; // eax
  int v52; // [rsp+20h] [rbp-68h] BYREF
  __int64 v53; // [rsp+28h] [rbp-60h] BYREF
  signed __int64 v54; // [rsp+30h] [rbp-58h]
  signed __int64 v55; // [rsp+38h] [rbp-50h]

  v6 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v45 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      v46 = v8 | 0x20;
      if ( (v45 & 0x20) == 0 )
        v46 = *(_QWORD *)v7;
      v8 = v46;
      if ( (v45 & 0x42) != 0 )
        v8 = v46 | 0x42;
    }
  }
  v53 = v8;
  v55 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v53) >> 12) & 0xFFFFFFFFFFLL);
  v10 = v55 - 0x220000000000LL;
  v11 = (__int64 *)(v55 - 0x220000000000LL + 40);
  v12 = *(_QWORD *)(v55 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v54 = v55 - 0x220000000000LL;
  if ( v12 > 1 && *v11 >= 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    if ( *(_WORD *)(v10 + 32) > 1u )
      return 0LL;
    v52 = 0;
    v13 = v55 - 0x220000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v52);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *v11 >= 0
      || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(v10 + 32) > 1u )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
  }
  else
  {
    v13 = 0LL;
    if ( *v11 >= 0
      && v7 <= 0xFFFFF6BFFFFFFF78uLL
      && v7 >= 0xFFFFF68000000000uLL
      && (v8 & 0x42) != 0
      && (*(_DWORD *)(a1 - 540) & 0x8000) != 0 )
    {
      MiCaptureWriteWatchDirtyBit(a1 - 1664, a2, 0LL);
    }
  }
  v14 = *v11;
  v15 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( *v11 < 0 )
  {
    v31 = MI_READ_PTE_LOCK_FREE(v7);
    WsleProtection = MiGetWsleProtection(a2, HIBYTE(v31) & 0xF | (16 * ((v31 >> 60) & 7)));
    if ( WsleProtection )
    {
      v53 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
    }
    else
    {
      v34 = MiSwizzleInvalidPte(((*(_QWORD *)(v54 + 8) | 0x8000000000000000uLL) << 16) | 0x400);
      v53 = v34;
      v36 = v34;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v8 & 0xA00) == 0 && v8 < 0 )
      {
        v34 |= 8uLL;
        v53 = v34;
        v36 = v34;
      }
      LOBYTE(v20) = v33 >= 0;
      if ( v33 >= 0 && (v14 & 0x10000000000LL) == 0 && v33 )
      {
        v53 = v36 | 0x800;
      }
      else if ( (a3 & 2) != 0 )
      {
        if ( (unsigned int)MiClonePteReadonly(v35, v33, v34) )
          v53 = v50 | 8;
      }
    }
    goto LABEL_17;
  }
  if ( a2 < 0xFFFFF68000000000uLL )
  {
    v16 = (char *)a1;
LABEL_11:
    v17 = 0;
    goto LABEL_12;
  }
  v16 = (char *)a1;
  if ( a2 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_11;
  v17 = 1;
  MiLockPageTableInternal(a1, v7, 0, v9);
  if ( (*(_QWORD *)(v54 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
  {
    MiUnlockPageTableInternal(a1, v7);
    if ( !v13 )
      return 0LL;
    goto LABEL_94;
  }
  if ( (unsigned int)MiLockedPageTableHasActiveLargeEntries(a2) )
  {
    MiUnlockPageTableInternal(a1, v7);
    if ( !v13 )
      return 0LL;
LABEL_94:
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
LABEL_12:
  if ( (((unsigned __int64)*v11 >> 60) & 7) == 4 && v16 == MiGetAnyMultiplexedVm(2) )
  {
    v37 = a2 & 0xFFFFFFFFFFFFF000uLL;
    if ( (MiFlags & 0x2000000) != 0 )
    {
      v47 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * (v55 >> 4), 0LL, 0x80000000);
      v38 = MI_READ_PTE_LOCK_FREE(v47);
      MiUnmapPageInHyperSpaceWorker(v47, 0x11u);
    }
    else
    {
      v38 = MI_READ_PTE_LOCK_FREE(v37);
    }
    v39 = v38 | 2;
    v53 = v39;
    v40 = v39;
    v15 |= 4uLL;
    v6 = 1;
    if ( MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v42, v41, v43) )
      {
        v48 = v39;
        if ( !HIBYTE(word_140C66CFC) && (v39 & 1) != 0 )
          v48 = v39 | 0x8000000000000000uLL;
        *(_QWORD *)v7 = v48;
        MiWritePteShadow(v7, v48);
        goto LABEL_76;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v39 & 1) != 0 )
      {
        v40 = v39 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v7 = v40;
LABEL_76:
    MiInsertTbFlushEntry((__int64)a4, v37, 1LL, 0);
    MiFlushTbList(a4);
    goto LABEL_26;
  }
  v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v53);
  v19 = (32 * ((*(_DWORD *)(v54 + 16) >> 5) & 0x1F | 0x40LL)) | v18 & 0xFFFFFFFFFF000LL;
  v20 = qword_140C65B40;
  if ( qword_140C65B40 )
  {
    if ( (qword_140C65B40 & v19) != 0 )
      v19 |= 0x10uLL;
    else
      v19 |= qword_140C65B40;
  }
  v53 = v19;
  if ( v17 )
  {
    MiUnlockNestedPageTableWritePte(v16, v7, v19, 0LL, v52, v53, v54);
    MiInsertTbFlushEntry((__int64)a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
    goto LABEL_27;
  }
LABEL_17:
  v21 = *(_QWORD *)v7;
  v22 = 0xFFFFF6FB7DBED000uLL;
  v23 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v7 < 0xFFFFF6FB7DBED000uLL
    || v7 > 0xFFFFF6FB7DBED7F8uLL
    || (HasShadow = MiPteHasShadow(v20, v21, 0xFFFFF6FB7DBED000uLL)) == 0 )
  {
    v24 = ((unsigned int)MiFlags >> 26) & 3;
    if ( v24 <= 1 )
    {
      if ( !v24 )
        goto LABEL_33;
      if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL && (v21 & 0x80u) == 0LL )
        LOBYTE(v21) = 32;
    }
    else if ( (MiFlags & 0x2000000) != 0 )
    {
      _mm_lfence();
    }
    if ( (v21 & 0x20) == 0 )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v25 = _InterlockedExchange64((volatile __int64 *)v7, v53);
      if ( v7 >= v22 && v7 <= v23 )
        MiWritePteShadow(v7, v53);
      if ( (v25 & 0x20) == 0 )
        goto LABEL_26;
      goto LABEL_35;
    }
  }
LABEL_33:
  v27 = v53;
  if ( MiPteInShadowRange(v7) )
  {
    if ( (unsigned int)MiPteHasShadow(v29, v28, v30) )
    {
      if ( !HIBYTE(word_140C66CFC) && (v27 & 1) != 0 )
        v27 |= 0x8000000000000000uLL;
      *(_QWORD *)v7 = v27;
      MiWritePteShadow(v7, v27);
      goto LABEL_35;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v27 & 1) != 0 )
      v27 |= 0x8000000000000000uLL;
  }
  *(_QWORD *)v7 = v27;
LABEL_35:
  MiInsertTbFlushEntry((__int64)a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
LABEL_26:
  v16 = (char *)a1;
LABEL_27:
  if ( v13 )
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v6 && *v11 >= 0 )
    MiCheckReservePageFileSpace(v54, v7, v16, v23);
  return v15;
}
