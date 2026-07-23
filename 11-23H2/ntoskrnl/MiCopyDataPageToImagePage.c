/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14028B700
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     MiStandbyPageContentsIntact @ 0x1402186F0 (MiStandbyPageContentsIntact.c)
 *     MiTryLockLeafPage @ 0x140219AC4 (MiTryLockLeafPage.c)
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14021C84C (MiTryLockProtoPoolPageAtDpc.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiEndingOffset @ 0x14027A198 (MiEndingOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSessionIdForVa @ 0x1402A1960 (MiGetSessionIdForVa.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiStartingOffset @ 0x1402E25A0 (MiStartingOffset.c)
 *     MiAdvanceFaultList @ 0x1402EEA84 (MiAdvanceFaultList.c)
 *     MiObtainProtoReference @ 0x1402EF5A8 (MiObtainProtoReference.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockDataCopyPages @ 0x14035026C (MiUnlockDataCopyPages.c)
 *     MiAllocateHyperSpace @ 0x14035BD58 (MiAllocateHyperSpace.c)
 *     KeCopyPage @ 0x140424A70 (KeCopyPage.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int SessionIdForVa; // eax
  volatile LONG *v15; // rsi
  int v16; // r12d
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  volatile LONG *v19; // rdi
  unsigned int v21; // r8d
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  unsigned int v24; // r9d
  __int64 *v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  unsigned __int64 HyperSpace; // rsi
  char *v33; // rbx
  unsigned __int64 v34; // rbx
  const void *v35; // rdx
  __int64 v36; // r13
  _QWORD *v37; // rsi
  __int64 *v38; // rsi
  __int64 v39; // r15
  __int64 v40; // rcx
  char v41; // al
  _QWORD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rdx
  size_t v46; // rbx
  _BYTE *v47; // rcx
  volatile LONG *SpinLock; // [rsp+28h] [rbp-61h]
  unsigned int v49; // [rsp+30h] [rbp-59h]
  unsigned __int64 v50; // [rsp+30h] [rbp-59h]
  unsigned __int64 v51; // [rsp+38h] [rbp-51h]
  unsigned __int64 v52; // [rsp+40h] [rbp-49h]
  __int64 v53; // [rsp+48h] [rbp-41h] BYREF
  __int64 v54; // [rsp+50h] [rbp-39h]
  _OWORD v55[3]; // [rsp+58h] [rbp-31h] BYREF
  char v56; // [rsp+88h] [rbp-1h] BYREF
  __int64 v57; // [rsp+D8h] [rbp+4Fh] BYREF
  __int64 v58; // [rsp+E0h] [rbp+57h]
  _QWORD *v59; // [rsp+E8h] [rbp+5Fh]
  __int64 *v60; // [rsp+F0h] [rbp+67h]

  v60 = a4;
  v59 = a3;
  v58 = a2;
  v57 = a1;
  memset(v55, 0, sizeof(v55));
  v10 = 48 * a6 - 0x220000000000LL;
  MiFinalizePageAttribute(v10, 1LL, 0LL);
  v11 = *a3;
  v12 = *(_QWORD *)(a1 + 224);
  v53 = 0LL;
  v54 = v11;
  SessionIdForVa = MiGetSessionIdForVa(v13, v12);
  v15 = (volatile LONG *)(v11 + 72);
  v51 = MiStartingOffset(a3, a4, SessionIdForVa);
  SpinLock = (volatile LONG *)(v11 + 72);
  v16 = v51;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  v17 = *(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C65540);
  v18 = **(_QWORD **)(v17 + 40);
  if ( v18 && (v19 = (volatile LONG *)(v18 + 72), (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v18 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65540);
    if ( *(_QWORD *)(v18 + 32) && (*(_DWORD *)(v18 + 56) & 3) == 0 )
    {
      v52 = MiEndingOffset((__int64)a3);
      v22 = v51 >> 12;
      if ( (unsigned int)(v51 >> 12) != (unsigned int)((v52 - 1) >> 12) )
        v21 -= 2;
      v23 = v18 + 128;
      v49 = v21;
      while ( (unsigned int)v22 >= *(_DWORD *)(v23 + 44) )
      {
        LODWORD(v22) = v22 - *(_DWORD *)(v23 + 44);
        v23 = *(_QWORD *)(v23 + 16);
        if ( !v23 )
          goto LABEL_17;
      }
      v24 = 0;
      LODWORD(v58) = 2;
      v25 = (__int64 *)v55;
      if ( *(_DWORD *)(v23 + 104) )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(v23 + 8);
          if ( !v26 )
            break;
          v27 = v26 + 8LL * (unsigned int)v22;
          if ( !v27 )
            break;
          v28 = (v27 >> 9) & 0x7FFFFFFFF8LL;
          v29 = ((unsigned __int64)v60 >> 9) & 0x7FFFFFFFF8LL;
          v25[2] = v27;
          if ( v28 == v29 || v25 != (__int64 *)v55 && v28 == (((unsigned __int64)*(v25 - 1) >> 9) & 0x7FFFFFFFF8LL) )
          {
            MiTryLockLeafPage((unsigned __int64 *)v27, v24, v25);
          }
          else
          {
            if ( (int)MiTryLockProtoPoolPageAtDpc((unsigned __int64 *)v27, v28, &v53, v25) < 0 )
              break;
            v25[1] = v53;
          }
          v30 = *v25;
          if ( !*v25 || (*(_BYTE *)(v30 + 35) & 0x40) != 0 || !(unsigned int)MiStandbyPageContentsIntact(v30) )
            break;
          if ( v25 != (__int64 *)v55 || (v51 & 0xFFF) == 0 )
            goto LABEL_24;
          if ( v49 >= 2 )
          {
            v16 = v51;
LABEL_24:
            v31 = (unsigned int)v58;
            HyperSpace = MiAllocateHyperSpace((unsigned int)v58);
            v50 = HyperSpace + 4096;
            MiMapSinglePage(HyperSpace, a6, 0x40000000, 0);
            v33 = (char *)v55;
            do
            {
              if ( !*(_QWORD *)v33 )
                break;
              MiMapSinglePage(v50, 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)v33 + 0x220000000000LL) >> 4), -1073741824, 0);
              v50 += 4096LL;
              v33 += 24;
            }
            while ( v33 != &v56 );
            v34 = v51;
            v35 = (const void *)(HyperSpace + (v16 & 0xFFFu) + 4096);
            if ( v51 + 4096 > v52 )
            {
              v46 = ((_DWORD)v52 - v16) & 0xFFF;
              memmove((void *)HyperSpace, v35, v46);
              memset((void *)(v46 + HyperSpace), 0, (unsigned int)(4096 - v46));
              v34 = v51;
            }
            else
            {
              KeCopyPage(HyperSpace, v35);
            }
            v36 = v57;
            v37 = (_QWORD *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            if ( (_DWORD)v58 )
            {
              do
              {
                *v37++ = ZeroPte;
                --v31;
              }
              while ( v31 );
            }
            *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
            ExReleaseSpinLockExclusiveFromDpcLevel(v19);
            ++*(_QWORD *)(v54 + 32);
            ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
            MiUnlockDataCopyPages(v55);
            LODWORD(v57) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v57);
              while ( *(__int64 *)(v10 + 24) < 0 );
            }
            v38 = v60;
            v39 = a6;
            MiInitializeTransitionPfn(a6, v60, -1LL);
            v40 = a5;
            v41 = *(_BYTE *)(v10 + 34) & 0xF8 | 2;
            *(_QWORD *)v10 = v36 + 32;
            *(_BYTE *)(v10 + 34) = v41;
            *(_WORD *)(v10 + 32) = 1;
            *(_BYTE *)(v10 + 34) = v41 | 0x20;
            if ( (v40 & 1) != 0 )
            {
              v47 = (_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( *v47 == 1 )
              {
                MiAdvanceFaultList(v47);
                *(_DWORD *)(v36 + 192) |= 8u;
              }
            }
            *(_BYTE *)(v10 + 35) ^= (*(_BYTE *)(v10 + 35) ^ (*(_DWORD *)(v36 + 192) >> 9)) & 7;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(v36 + 168) = MI_READ_PTE_LOCK_FREE((unsigned __int64)v38);
            v42 = v59;
            *(_QWORD *)(v36 + 232) = v38;
            *(_QWORD *)(v36 + 272) = 0LL;
            *(_DWORD *)(v36 + 280) = 4325432;
            *(_QWORD *)(v36 + 304) = 0LL;
            *(_QWORD *)(v36 + 312) = 4096LL;
            *(_QWORD *)(v36 + 320) = v39;
            *(_QWORD *)(v36 + 96) = v34;
            v43 = a7;
            v44 = a7;
            *(_QWORD *)(v36 + 240) = v38;
            *(_QWORD *)(v36 + 248) = v10;
            *(_QWORD *)(v36 + 208) = v42;
            *(_QWORD *)(v36 + 200) = 0LL;
            MiObtainProtoReference(v44, 0LL);
            LOBYTE(v45) = 2;
            *(_QWORD *)(v36 + 160) = v43;
            *(_DWORD *)(v36 + 80) = 0;
            MiUnlockProtoPoolPage(v43, v45);
            *(_QWORD *)(v36 + 88) = 4096LL;
            KeSetEvent((PRKEVENT)(v36 + 32), 0, 0);
            __incgsdword(0x2E98u);
            return 1LL;
          }
          v25 += 3;
          LODWORD(v58) = v58 + 1;
          LODWORD(v22) = v22 + 1;
          v24 = 1;
          if ( (unsigned int)v22 >= *(_DWORD *)(v23 + 44) )
          {
            v23 = *(_QWORD *)(v23 + 16);
            LODWORD(v22) = 0;
            if ( !v23 )
              break;
          }
          if ( !*(_DWORD *)(v23 + 104) )
            break;
          v16 = v51;
        }
      }
LABEL_17:
      v15 = SpinLock;
    }
  }
  else
  {
    v19 = &dword_140C65540;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v19);
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  MiUnlockDataCopyPages(v55);
  return 0LL;
}
