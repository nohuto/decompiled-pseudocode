/*
 * XREFs of MiMakeSystemCachePteValid @ 0x14034605C
 * Callers:
 *     MmCopyToCachedPage @ 0x1402CDA60 (MmCopyToCachedPage.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MiLockWorkingSetOptimal @ 0x140285BFC (MiLockWorkingSetOptimal.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A2680 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiStartingOffset @ 0x1402E25A0 (MiStartingOffset.c)
 *     PfSnLogPageFault @ 0x1402E27A0 (PfSnLogPageFault.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 ValidPte; // rbx
  __int64 v6; // rsi
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v26; // [rsp+90h] [rbp+18h]

  LOBYTE(v25) = 0;
  ValidPte = a3;
  v6 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v9 = 48 * v6 - 0x220000000000LL;
  v10 = 0;
  v11 = 48 * ((*(_QWORD *)((((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  v12 = MiLockPageInline(v11);
  v13 = *(_QWORD *)(v11 + 24);
  v26 = v12;
  *(_QWORD *)(v11 + 24) = v13 ^ (v13 ^ (v13 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = MiLockWorkingSetOptimal(a1, (unsigned __int64)a2, &v25);
  v15 = *a2;
  v25 = v14;
  if ( (v15 & 1) != 0 )
  {
    v24 = 48 * v6 - 0x220000000000LL;
    v18 = 0LL;
    v19 = 0LL;
    MiLockAndDecrementShareCount(v24, 0);
    MiLockAndDecrementShareCount(v11, 0);
  }
  else
  {
    if ( (v15 & 8) != 0 )
      ValidPte = MiMakeValidPte((unsigned __int64)a2, v6, 536870913LL);
    v16 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL;
    v17 = v16 | ((unsigned __int64)(word_140C66CFC & 1) << 8);
    if ( (a4 & 8) != 0 && _bittest64((const signed __int64 *)(v9 + 40), 0x35u) )
      v17 = v16 & 0xFFFFFFFFFFFFFFBDuLL | ((unsigned __int64)(word_140C66CFC & 1) << 8);
    v18 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
    v19 = *(_QWORD *)(v9 + 16);
    MiAllocateWsle(a1, a2, (_QWORD *)v9, 0, v17, 0, 0LL);
    if ( PfSnNumActiveTraces && (v19 & 0x400) != 0 )
      v10 = 1;
  }
  MiUnlockPageTableInternal(a1, v25);
  MiUnlockWorkingSetShared(a1, v26);
  if ( v10 )
  {
    if ( qword_140C65B40 )
    {
      if ( (v19 & 0x10) == 0 )
        v19 &= ~qword_140C65B40;
    }
    v20 = v19 >> 16;
    v21 = *(_QWORD *)v20;
    v22 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v20, 0x63536D4Du);
    v23 = MiStartingOffset((__int64 *)v20, v18, 0xFFFFFFFF);
    PfSnLogPageFault(v22, v23, 4u);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v21 + 64), v22, 0x63536D4Du);
  }
}
