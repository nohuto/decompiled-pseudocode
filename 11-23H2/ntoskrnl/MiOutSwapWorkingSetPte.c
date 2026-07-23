/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x140215660
 * Callers:
 *     <none>
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiReservePageFileSpaceForPage @ 0x140285100 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140285A60 (MiTransferSoftwarePte.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r15
  int v5; // r14d
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r12
  char v12; // bl
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r8
  __int64 *v18; // r9
  __int64 v19; // r13
  __int64 *v20; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR v25; // rbp
  ULONG_PTR v26; // rax
  char v27; // cl
  __int64 v28; // rdx
  char v29; // si
  unsigned __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 updated; // rax
  __int64 v36; // r9
  bool v37; // zf
  unsigned __int64 v38; // rdx
  ULONG_PTR v39; // [rsp+20h] [rbp-48h]
  __int64 v40; // [rsp+28h] [rbp-40h]
  _QWORD *v41; // [rsp+28h] [rbp-40h]
  __int64 v42; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v43; // [rsp+70h] [rbp+8h]
  int v44; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v40 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v5 = 0;
  v6 = 0LL;
  v39 = 0LL;
  v7 = 0LL;
  v42 = *(_QWORD *)(v3 + 24);
  v8 = 0;
  while ( 1 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2);
    v45 = v9;
    v10 = v9;
    if ( (v9 & 1) != 0 )
    {
      v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v45) >> 12) & 0xFFFFFFFFFFLL;
      if ( v22 > qword_140C65BA0 || !_bittest64((const signed __int64 *)(48 * v22 - 0x21FFFFFFFFD8LL), 0x36u) )
        return 0LL;
      v25 = 48 * v22 - 0x220000000000LL;
      if ( *(__int64 *)(v25 + 40) >= 0 )
      {
        if ( (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) != a2 )
          return 0LL;
        v44 = 0;
        v12 = 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(__int64 *)(v25 + 24) < 0 );
        }
        if ( (*(_BYTE *)(v25 + 34) & 8) != 0 )
          goto LABEL_46;
        v13 = *(_QWORD *)(v25 + 16);
        if ( (v13 & 2) != 0 )
        {
          v6 = *(_QWORD *)(v25 + 16);
          *(_QWORD *)(v25 + 16) = v13 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        if ( !*(_DWORD *)(v3 + 144)
          && (*(_WORD *)(v25 + 32) != 1
           || (*(_BYTE *)(v40 + 184) & 7) == 0
           && (MiGetWsleContents(0xFFFFF68000000000uLL, (__int64)(a2 << 25) >> 16, v23, v24) & 0xF) == 8) )
        {
          goto LABEL_46;
        }
        if ( (v45 & 0x42) == 0 && (*(_BYTE *)(v25 + 34) & 0x10) == 0 )
        {
          if ( (*(_DWORD *)(v25 + 16) & 4) == 0 )
          {
LABEL_46:
            v11 = v42;
            goto LABEL_47;
          }
          v12 = 3;
        }
        v7 = MiCaptureDirtyBitToPfn(v25);
        v14 = *(_BYTE *)(v25 + 34) >> 6;
        if ( v14 != 1 )
        {
          if ( v14 == 2 )
          {
            v12 |= 4u;
          }
          else if ( !v14 )
          {
            v12 |= 8u;
          }
        }
        v11 = v42;
        if ( *(_DWORD *)(v3 + 32) == -1 )
        {
          v45 = MiTransferSoftwarePte(
                  *(_QWORD *)(v25 + 16),
                  *(_QWORD *)(v42 + 8LL * *(unsigned int *)(v42 + 1188) + 17056),
                  2LL);
          *(_QWORD *)(v25 + 16) = v45;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = *(unsigned int *)(v3 + 32);
        v8 = v12 & 0xFE;
        v16 = *(_QWORD **)v3;
        v41 = *(_QWORD **)v3;
        if ( (_DWORD)v15 != -1 )
        {
          v43 = (unsigned __int64 *)(16 * v15 + v3 + 40);
          if ( (unsigned int)v15 >= 5 || !*(_DWORD *)(16 * v15 + v3 + 40 + 8) )
            goto LABEL_30;
          MiReservePageFileSpaceForPage(v11, a2, 128LL);
          v34 = *v43;
          if ( qword_140C65B40 && (v34 & 0x10) == 0 )
            v34 &= ~qword_140C65B40;
          updated = MiUpdatePageFileHighInPte(*v43, HIDWORD(v34) + 1);
          v37 = (*(_DWORD *)(v36 + 8))-- == 1;
          *(_QWORD *)v36 = updated;
          if ( v37 )
            ++*(_DWORD *)(v3 + 32);
          v16 = v41;
          v8 |= 0x10u;
        }
      }
      else
      {
        v16 = *(_QWORD **)(v3 + 8);
        if ( !v16 )
          return 0LL;
        v11 = v42;
      }
      v17 = v16[2];
      if ( v17 < v16[1] )
      {
        v18 = (__int64 *)(*v16 + 16 * v17);
        v19 = (__int64)(a2 << 25) >> 16;
        v20 = v18 - 2;
        if ( !v17 || *v20 + v20[1] != v19 )
        {
          v20 = (__int64 *)(*v16 + 16 * v17);
          v16[2] = v17 + 1;
          *v18 = v19;
          v18[1] = 0LL;
        }
        v20[1] += 4096LL;
        ++v16[3];
        if ( (v8 & 2) != 0 )
          ++*(_QWORD *)(v3 + 136);
        if ( (v8 & 4) != 0 )
        {
          ++*(_QWORD *)(v3 + 120);
        }
        else if ( (v8 & 8) != 0 )
        {
          ++*(_QWORD *)(v3 + 128);
        }
      }
      goto LABEL_30;
    }
    if ( (v9 & 0x400) != 0 )
      return 0LL;
    if ( (v9 & 0x800) == 0 )
      break;
    v26 = MiLockTransitionLeafPageEx(a2);
    v39 = v26;
    v25 = v26;
    if ( v26 )
    {
      v27 = *(_BYTE *)(v26 + 34);
      if ( (v27 & 0x28) == 0 )
      {
        v28 = *(_QWORD *)(v26 + 16);
        if ( (v28 & 2) != 0 )
        {
          v6 = *(_QWORD *)(v26 + 16);
          if ( *(_WORD *)(v26 + 32) || (v27 & 7) != 3 )
          {
            *(_QWORD *)(v26 + 16) = v28 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            MiUnlinkPageFromListEx(v26);
            *(_QWORD *)(v25 + 16) &= ~2uLL;
            MiInsertPageInList(v25);
          }
        }
      }
      goto LABEL_46;
    }
  }
  if ( (v9 & 2) == 0 )
  {
LABEL_7:
    v11 = v42;
    goto LABEL_31;
  }
  v29 = v9 & 0xFD;
  v45 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  v30 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (unsigned int)MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow(v32, v31, v33) )
    {
      v5 = 1;
      if ( HIBYTE(word_140C66CFC) || (v29 & 1) == 0 )
        goto LABEL_61;
LABEL_60:
      v30 = v10 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
      goto LABEL_61;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v29 & 1) != 0 )
      goto LABEL_60;
  }
LABEL_61:
  *(_QWORD *)a2 = v30;
  v6 = v10;
  if ( !v5 )
    goto LABEL_7;
  MiWritePteShadow(a2, v30);
  v25 = v39;
  v11 = v42;
LABEL_30:
  if ( (v8 & 1) == 0 )
    goto LABEL_31;
LABEL_47:
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_31:
  if ( v6 )
  {
    v38 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v6 & 4) == 0 )
      v38 = v6;
    MiReleasePageFileInfo(v11, v38, 0LL);
  }
  if ( v7 )
    MiReleasePageFileInfo(v11, v7, 0LL);
  return 0LL;
}
