/*
 * XREFs of MiScrubLargeMappedPage @ 0x14065E98C
 * Callers:
 *     MiScrubProcessLargePage @ 0x140A46C44 (MiScrubProcessLargePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiIdentifyPfnWrapper @ 0x14023CD10 (MiIdentifyPfnWrapper.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMakePageBad @ 0x14065E800 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x14065E960 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x14065F640 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rdi
  unsigned int v31; // r14d
  unsigned __int64 v32; // r15
  __int64 v33; // rax
  unsigned __int64 *v34; // r13
  unsigned __int64 v35; // rbx
  __int64 v36; // r8
  int v37; // eax
  int v39; // [rsp+20h] [rbp-E0h]
  unsigned int v40; // [rsp+28h] [rbp-D8h]
  __int64 v41; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v42; // [rsp+38h] [rbp-C8h]
  int v43; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v44; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v45; // [rsp+48h] [rbp-B8h]
  unsigned __int64 valid; // [rsp+50h] [rbp-B0h]
  unsigned int v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  unsigned __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v55; // [rsp+98h] [rbp-68h]
  unsigned __int64 v56; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v57; // [rsp+A8h] [rbp-58h]
  __int128 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h]
  _QWORD v60[24]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a3;
  v5 = a2;
  v53 = a2;
  v6 = 0;
  v51 = a1;
  v47 = a3;
  v54 = 0LL;
  v55 = a4;
  memset(v60, 0, 0xB8uLL);
  WORD2(v60[0]) = 0;
  v50 = MiLargePageSizes[v4];
  v8 = a4[2];
  LODWORD(v60[0]) = 1;
  v60[2] = 0LL;
  LODWORD(v60[1]) = 20;
  v60[3] = 0LL;
  v42 = 0;
  v48 = 0LL;
  v56 = v8;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 2 - v4;
  v40 = 2 - v4;
  if ( (unsigned int)v4 >= 2 )
  {
    v40 = 2 - v4;
  }
  else
  {
    v11 = v10;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v11;
    }
    while ( v11 );
  }
  v12 = 1LL;
  if ( (unsigned int)v4 > 1 )
    v12 = 16LL;
  v49 = v12;
  v13 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v45 = v13;
  v14 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = v14;
  while ( 2 )
  {
    v59 = 0LL;
    v58 = 0LL;
    LOBYTE(v39) = MiLockWorkingSetShared((__int64)v13);
    valid = MiLockLowestValidPageTable((__int64)v13, v9, &v54, v15);
    v16 = valid;
    if ( valid != v14 )
      goto LABEL_57;
    v41 = MI_READ_PTE_LOCK_FREE(v9);
    v17 = v41;
    if ( (v41 & 1) == 0 )
      goto LABEL_57;
    v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v41) >> 12) & 0xFFFFFFFFFFLL;
    if ( v18 != v5 )
      goto LABEL_57;
    v19 = 48 * v18 - 0x220000000000LL;
    v20 = MiIdentifyPfnWrapper(v19, (__int64)&v58);
    if ( v20 != v50 )
      goto LABEL_57;
    v22 = *v55;
    if ( (((unsigned __int8)v58 ^ (unsigned __int8)*v55) & 0x70) != 0
      || (((unsigned __int8)v58 ^ (unsigned __int8)v22) & 0xF) != 0
      || v59 != v55[2]
      || (((unsigned __int64)v58 ^ v22) & 0x1FFFFFFFFFFFE00LL) != 0
      || (*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || *(_WORD *)(v19 + 32) != 2 )
    {
      goto LABEL_57;
    }
    if ( v47 > 1 )
    {
      v23 = 0;
      v24 = v49;
      v25 = 0LL;
      do
      {
        ++v23;
        *(_QWORD *)(v9 + 8 * v25) = ZeroPte;
        v25 = v23;
      }
      while ( v23 < v24 );
    }
    else
    {
      if ( (v17 & 0x80u) == 0LL )
        goto LABEL_57;
      MiRewritePteWithLockBit((__int64)v13, (__int64 *)v9, ZeroPte, v21);
      v17 &= 0xCFFFFFFFFFFFFFFFuLL;
    }
    MiInsertTbFlushEntry((__int64)v60, v56, v49, v10);
    MiFlushTbList((int *)v60);
    v26 = v48;
    v43 = 0;
    v27 = v19 + 48 * v50;
    v28 = 48 * v48 + v19;
    v57 = v27;
    v44 = v28;
    if ( v28 >= v27 )
      goto LABEL_38;
    v29 = v28 + 0x220000000000LL;
    while ( 1 )
    {
      v48 = ++v26;
      if ( *(_WORD *)(v29 - 0x21FFFFFFFFE0LL) != 2 )
        goto LABEL_34;
      if ( (int)MiScrubPage(v51, v28, 0LL, 1LL, v39) < 0 )
        MiMakePageBad(0xAAAAAAAAAAAAAAABuLL * (v29 >> 4), 1);
      if ( MiWorkingSetIsContended((__int64)v13)
        || (unsigned int)MiPageTableLockIsContended((__int64)v13, valid)
        || KeShouldYieldProcessor() )
      {
        break;
      }
      v42 = MiScrubInterrupted(v51);
      if ( v42 )
        goto LABEL_37;
      v26 = v48;
LABEL_34:
      v28 += 48LL;
      v29 += 48LL;
      v44 = v28;
      if ( v28 >= v27 )
        goto LABEL_38;
    }
    v43 = 1;
LABEL_37:
    v44 = v28 + 48;
LABEL_38:
    v30 = v17 | 0x20;
    v31 = 0;
    v41 = v30;
    v32 = v30;
    v33 = 0LL;
    while ( 2 )
    {
      v34 = (unsigned __int64 *)(v9 + 8 * v33);
      v35 = v32;
      if ( !MiPteInShadowRange((unsigned __int64)v34) )
      {
LABEL_47:
        v37 = 0;
        goto LABEL_48;
      }
      if ( !MiPteHasShadow() )
      {
        v30 = v41;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v32 & 1) != 0 )
        {
          v35 = v32 | 0x8000000000000000uLL;
        }
        goto LABEL_47;
      }
      v37 = 1;
      if ( !HIBYTE(word_140C66CFC) && (v32 & 1) != 0 )
        v35 = v32 | 0x8000000000000000uLL;
LABEL_48:
      *v34 = v35;
      if ( v37 )
        MiWritePteShadow((__int64)v34, v35, v36);
      ++v31;
      v30 ^= (v30 ^ ((v30 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFFF000LL;
      v33 = v31;
      v32 = v30;
      v41 = v30;
      if ( v31 < v49 )
        continue;
      break;
    }
    v13 = v45;
    if ( v44 == v57 )
    {
      v6 = 1;
    }
    else if ( !v42 )
    {
      v10 = v40;
      v14 = v52;
      v5 = v53;
      if ( v43 )
      {
        MiUnlockPageTableInternal((__int64)v45, valid);
        MiUnlockWorkingSetShared((__int64)v13, v39);
      }
      continue;
    }
    break;
  }
  v16 = valid;
LABEL_57:
  MiUnlockPageTableInternal((__int64)v13, v16);
  MiUnlockWorkingSetShared((__int64)v13, v39);
  return v6;
}
