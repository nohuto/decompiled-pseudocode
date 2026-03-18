/*
 * XREFs of MiMapWithLargePages @ 0x1403C7090
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x1403C6E24 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiMapWithLargePages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        int a7)
{
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  int v11; // ebp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned int v16; // ebp
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // al
  __int64 v23; // r9
  unsigned __int8 v24; // r14
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rbx
  int v27; // r12d
  unsigned __int64 *v28; // r14
  unsigned __int64 v29; // r13
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v31; // rdi
  int v32; // r12d
  bool v33; // zf
  __int64 v34; // rcx
  volatile LONG *SharedVm; // rbx
  bool v36; // zf
  unsigned __int64 v38; // [rsp+78h] [rbp+10h]
  unsigned __int64 v40; // [rsp+88h] [rbp+20h]
  unsigned __int8 v41[8]; // [rsp+98h] [rbp+30h]

  v8 = MiLargePageSizes[a5];
  v9 = a3;
  v38 = v8;
  v10 = a1;
  v11 = a6 & 7;
  v40 = a4 / v8;
  v12 = a4 / v8;
  v13 = v8 * (a4 / v8);
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v9 <= qword_140C50840 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    a7 = *(unsigned __int8 *)(48 * v9 - 0x21FFFFFFFFDELL) >> 6;
  if ( a7 )
  {
    if ( a7 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v16 = v11 | 0xA0000000;
  if ( !(a4 % v8) )
    goto LABEL_6;
  v28 = (unsigned __int64 *)(v14 + 8 * v13);
  v29 = v14 + 8 * a4;
  ValidPte = MiMakeValidPte(0LL, v13 + v9, v16);
  if ( (unsigned __int64)v28 >= v29 )
    goto LABEL_33;
  do
  {
    v31 = ValidPte;
    v32 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v28) )
      goto LABEL_29;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v32 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_29;
      v33 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_29;
      v33 = (ValidPte & 1) == 0;
    }
    if ( !v33 )
      v31 = ValidPte | 0x8000000000000000uLL;
LABEL_29:
    *v28 = v31;
    if ( v32 )
      MiWritePteShadow((__int64)v28, v31);
    ++v28;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
  }
  while ( (unsigned __int64)v28 < v29 );
  v10 = a1;
  v8 = v38;
LABEL_33:
  v12 = v40;
  v9 = a3;
LABEL_6:
  v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !a5 )
  {
    v34 = 1LL;
    do
    {
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v34;
    }
    while ( v34 );
  }
  v18 = MiMakeValidPte(0LL, v9, v16 | 0x4000000);
  v19 = 0LL;
  v20 = v17 + 8 * v12;
  v21 = v18;
  if ( a5 )
  {
    v22 = MiLockWorkingSetShared(v10);
  }
  else
  {
    SharedVm = (volatile LONG *)MiGetSharedVm(v10);
    v22 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
  }
  v41[0] = v22;
  v24 = v22;
  if ( v17 < v20 )
  {
    v25 = v8 << 12;
    while ( 1 )
    {
      if ( !a5 )
        goto LABEL_14;
      if ( v19 )
      {
        if ( (v17 & 0xFFF) != 0 )
          goto LABEL_14;
        MiUnlockPageTableInternal(v10, v19);
      }
      v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v10, v19, 0LL, v23);
LABEL_14:
      v26 = v21;
      v27 = 0;
      if ( MiPteInShadowRange(v17) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v27 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v36 = (v21 & 1) == 0;
            goto LABEL_51;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v36 = (v21 & 1) == 0;
LABEL_51:
          if ( !v36 )
            v26 = v21 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v17 = v26;
      if ( v27 )
        MiWritePteShadow(v17, v26);
      v17 += 8LL;
      v21 ^= (v21 ^ (v25 + v21)) & 0xFFFFFFFFFF000LL;
      if ( v17 >= v20 )
      {
        v24 = v41[0];
        break;
      }
    }
  }
  if ( a5 )
  {
    if ( v19 )
      MiUnlockPageTableInternal(v10, v19);
    MiUnlockWorkingSetShared(v10, v24);
  }
  else
  {
    MiUnlockWorkingSetExclusive(v10, v24);
  }
}
