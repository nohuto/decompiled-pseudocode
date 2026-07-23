/*
 * XREFs of MiDeleteClusterSection @ 0x1402189B0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x1402186C0 (MiIsPageOnBadList.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiTryLockLeafPage @ 0x140219AC4 (MiTryLockLeafPage.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140219E80 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140219FF4 (MiInitializeAllResidentPageBasePfns.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiBadShareCount @ 0x14064DBDC (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteClusterSection(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rcx
  __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rsi
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // r10
  __int64 v13; // r11
  ULONG_PTR v14; // r12
  __int64 v15; // r13
  unsigned __int64 *v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r11
  int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v29; // r9
  unsigned int *v30; // r8
  int v31; // eax
  unsigned int v32; // esi
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned __int64 v35; // r15
  __int64 v36; // rbx
  unsigned int v37; // esi
  int HasShadow; // eax
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  ULONG_PTR v43; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-39h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR v46; // [rsp+50h] [rbp-29h]
  __int64 v47; // [rsp+58h] [rbp-21h]
  unsigned __int64 v48; // [rsp+60h] [rbp-19h]
  __int128 v49; // [rsp+68h] [rbp-11h] BYREF
  __int128 v50; // [rsp+78h] [rbp-1h]
  __int128 v51; // [rsp+88h] [rbp+Fh] BYREF

  BugCheckParameter2 = a1;
  v49 = 0LL;
  v2 = -1LL;
  v46 = a2;
  v50 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v3 & 0xFFFFFFFFFFLL;
  v48 = 0LL;
  v5 = 0;
  v47 = *(_QWORD *)(qword_140C673C8 + 8 * ((v3 >> 43) & 0x3FF));
  do
  {
    v6 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v5);
    v7 = v6;
    if ( !v6 || (v6 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C65B40 )
    {
      if ( (v6 & 0x10) != 0 )
        v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v7 = ~qword_140C65B40 & v6;
    }
    v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    v9 = v8;
    if ( v8 > qword_140C65BA0 )
      return 0LL;
    if ( ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 0LL;
    v10 = 48 * v8 - 0x220000000000LL;
    v11 = MiCheckSlabPfnBitmap(v10, 1LL);
    v12 = 0LL;
    if ( v11 || v5 && v8 != v2 )
      return 0LL;
    a2 = v46;
    v2 = v8 + 1;
    LODWORD(v13) = 1;
    ++v5;
  }
  while ( v5 < 0x10 );
  BugCheckParameter2 = 48 * v8 - 0x220000000000LL;
  v14 = v8 - 15;
  v46 = BugCheckParameter2;
  v51 = 0LL;
  v15 = 48 * v4 - 0x220000000000LL;
  v16 = (unsigned __int64 *)(a2 + 120);
  while ( 1 )
  {
    if ( v9 == v14 )
    {
      v17 = 48 * v14 - 0x220000000000LL;
      BugCheckParameter2 = v17;
    }
    else
    {
      MiTryLockLeafPage(v16, (unsigned int)v13, &BugCheckParameter2);
      v17 = BugCheckParameter2;
      v12 = 0LL;
      v13 = 1LL;
      if ( !BugCheckParameter2 )
        goto LABEL_37;
      if ( BugCheckParameter2 != v46 )
        goto LABEL_68;
    }
    BugCheckParameter4 = *(_QWORD *)(v17 + 8);
    if ( (unsigned __int64 *)(BugCheckParameter4 | 0x8000000000000000uLL) != v16 )
    {
      v43 = MI_READ_PTE_LOCK_FREE(v16);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v43, BugCheckParameter4);
    }
    if ( (*(_BYTE *)(v17 + 34) & 7) == 6 )
      MiBadShareCount(v17);
    if ( *(_WORD *)(v17 + 32) != (_WORD)v12 )
      break;
    if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
      break;
    if ( MiIsPageOnBadList(v17) )
      break;
    v19 = MiCheckSlabPfnBitmap(v17, v18);
    v12 = 0LL;
    if ( v19 )
      break;
    MiUnlinkPageFromListEx(v17);
    if ( ((*(_QWORD *)(v17 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v17);
    MiReleasePageFileSpace(v47, *(_QWORD *)(v17 + 16), 1LL);
    v20 = *(_QWORD *)(v17 + 16);
    if ( (v20 & 4) != 0 )
    {
      v20 &= ~4uLL;
      *(_QWORD *)(v17 + 16) = v20;
    }
    if ( (v20 & 2) != 0 )
      *(_QWORD *)(v17 + 16) = v20 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v17 + 35) &= 0xF8u;
    MiSetPfnIdentity(v17, 0LL);
    ++*((_DWORD *)&v51 + ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) >> 6));
    *(_QWORD *)(v17 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v17 + 34) &= 0xC7u;
    *(_BYTE *)(v17 + 35) &= ~0x20u;
    v21 = *(_BYTE *)(v17 + 34) & 0xEF;
    *(_BYTE *)(v17 + 34) = v21;
    *(_BYTE *)(v17 + 34) = v21 & 0xF8 | 1;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_QWORD *)(v17 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v17 + 16) = 0LL;
    v22 = ZeroPte;
    v23 = MiPteInShadowRange(v16);
    v12 = 0LL;
    if ( v23 )
    {
      HasShadow = MiPteHasShadow(v25, v24, v26);
      v13 = 1LL;
      if ( HasShadow )
      {
        v27 = 1;
        if ( HIBYTE(word_140C66CFC) == (_BYTE)v12 && (ZeroPte & 1) != 0 )
          v22 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_32;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v22 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else
    {
      v13 = 1LL;
    }
    v27 = v12;
LABEL_32:
    *v16 = v22;
    if ( v27 )
    {
      MiWritePteShadow(v16, v22);
      v12 = 0LL;
    }
    v48 += v13;
    v9 -= v13;
    v46 -= 48LL;
    --v16;
    if ( v9 < v14 )
      goto LABEL_37;
  }
  v13 = 1LL;
  if ( v9 == v14 )
    goto LABEL_37;
LABEL_68:
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
  v29 = (unsigned int)v12;
  v30 = (unsigned int *)&v51;
  v31 = v12;
  v32 = v13;
  v33 = v12;
  do
  {
    v34 = *v30;
    if ( (_DWORD)v34 && (_DWORD)v29 )
      v31 = v13;
    if ( (unsigned int)v29 < (unsigned int)v34 )
    {
      v29 = (unsigned int)v34;
      v32 = v33;
    }
    v33 += v13;
    ++v30;
  }
  while ( v33 < 4 );
  if ( v31 )
  {
    v29 = 48 * v14 - 0x220000000000LL;
    v39 = 16LL;
    v40 = v29;
    v41 = v29;
    v42 = v29;
    do
    {
      if ( *(unsigned __int8 *)(v42 + 34) >> 6 != v32 )
      {
        MiChangePageAttribute(v29, v32, (unsigned int)v13);
        v40 = v41;
        v13 = 1LL;
      }
      v29 = v40 + 48;
      v40 = v29;
      v41 = v29;
      v42 = v29;
      v39 -= v13;
    }
    while ( v39 );
    v12 = 0LL;
  }
  v35 = v48;
  BugCheckParameter2 = 48 * v8 - 0x220000000000LL;
  if ( v48 == 16 )
  {
    *(_QWORD *)&v49 = v8 - 15;
    *((_QWORD *)&v49 + 1) = (unsigned int)v13 | 0x200000000LL;
    LOBYTE(v50) = 2;
    v36 = *(_QWORD *)(v47 + 16)
        + 25408LL * *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v8) >> 4)) + 8);
    MiInitializeAllResidentPageBasePfns(v47, v8 - 15, 16, 2, v32, 1, 1);
    MiCreateInitialLargeLeafPfns(v8 - 15, 16, 2, v32, *(_WORD *)v47, 1);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v36 + 23104));
    v13 = 1LL;
    v37 = 0;
    goto LABEL_45;
  }
  v37 = v12;
  v36 = v12;
  if ( v48 )
  {
LABEL_45:
    while ( v8 != v14 )
    {
      if ( !v36 )
      {
        MiSetPfnPteFrame(v10, 0LL);
        MiInsertPageInFreeOrZeroedList(v8);
        v13 = 1LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v37 += v13;
      v10 = BugCheckParameter2 - 48;
      v8 -= v13;
      BugCheckParameter2 -= 48LL;
      if ( v37 >= v35 )
      {
        if ( !v35 )
          goto LABEL_51;
        break;
      }
    }
    MiLockNestedPageAtDpcInline(v15, v34, v30, v29);
    *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) - v35)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_51:
  if ( !v36 )
    return 0LL;
  MiInsertLargePageInNodeList(&v49);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v36 + 23104));
  return 1LL;
}
