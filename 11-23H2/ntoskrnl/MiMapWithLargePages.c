/*
 * XREFs of MiMapWithLargePages @ 0x14038E8F4
 * Callers:
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x14038E5E4 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
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
  __int64 v7; // r11
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  int v10; // ebp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // ebp
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rdi
  unsigned __int8 v21; // al
  __int64 v22; // r8
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
  __int64 v33; // r8
  bool v34; // zf
  __int64 v35; // rcx
  volatile LONG *SharedVm; // rbx
  bool v37; // zf
  unsigned __int64 v39; // [rsp+78h] [rbp+10h]
  unsigned __int64 v41; // [rsp+88h] [rbp+20h]
  unsigned __int8 v42[8]; // [rsp+98h] [rbp+30h]

  v7 = a3;
  v8 = MiLargePageSizes[a5];
  v9 = a1;
  v39 = v8;
  v10 = a6 & 7;
  v41 = a4 / v8;
  v11 = a4 / v8;
  v12 = v8 * (a4 / v8);
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= qword_140C65BA0 && ((*(_QWORD *)(48 * a3 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v14 = *(unsigned __int8 *)(48 * a3 - 0x21FFFFFFFFDELL) >> 6;
    if ( !v14 )
    {
      v10 |= 8u;
      goto LABEL_5;
    }
LABEL_24:
    if ( v14 == 2 )
      v10 |= 0x18u;
    goto LABEL_5;
  }
  v14 = a7;
  if ( a7 )
    goto LABEL_24;
  v10 |= 0x10u;
LABEL_5:
  v15 = v10 | 0xA0000000;
  if ( !(a4 % v8) )
    goto LABEL_6;
  v28 = (unsigned __int64 *)(v13 + 8 * v12);
  v29 = v13 + 8 * a4;
  ValidPte = MiMakeValidPte(0LL, v12 + a3, v15);
  if ( (unsigned __int64)v28 >= v29 )
    goto LABEL_32;
  do
  {
    v31 = ValidPte;
    v32 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v28) )
      goto LABEL_28;
    if ( MiPteHasShadow() )
    {
      v32 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_28;
      v34 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_28;
      v34 = (ValidPte & 1) == 0;
    }
    if ( !v34 )
      v31 = ValidPte | 0x8000000000000000uLL;
LABEL_28:
    *v28 = v31;
    if ( v32 )
      MiWritePteShadow((__int64)v28, v31, v33);
    ++v28;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
  }
  while ( (unsigned __int64)v28 < v29 );
  v9 = a1;
  v8 = v39;
LABEL_32:
  v11 = v41;
  v7 = a3;
LABEL_6:
  v16 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !a5 )
  {
    v35 = 1LL;
    do
    {
      v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v35;
    }
    while ( v35 );
  }
  v17 = MiMakeValidPte(0LL, v7, v15 | 0x4000000);
  v18 = 0LL;
  v19 = v16 + 8 * v11;
  v20 = v17;
  if ( a5 )
  {
    v21 = MiLockWorkingSetShared(v9);
  }
  else
  {
    SharedVm = (volatile LONG *)MiGetSharedVm(v9);
    v21 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
  }
  v42[0] = v21;
  v24 = v21;
  if ( v16 < v19 )
  {
    v25 = v8 << 12;
    while ( 1 )
    {
      if ( !a5 )
        goto LABEL_14;
      if ( v18 )
      {
        if ( (v16 & 0xFFF) != 0 )
          goto LABEL_14;
        MiUnlockPageTableInternal(v9, v18);
      }
      v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v9, v18, 0, v23);
LABEL_14:
      v26 = v20;
      v27 = 0;
      if ( MiPteInShadowRange(v16) )
      {
        if ( MiPteHasShadow() )
        {
          v27 = 1;
          if ( !HIBYTE(word_140C66CFC) )
          {
            v37 = (v20 & 1) == 0;
            goto LABEL_52;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v37 = (v20 & 1) == 0;
LABEL_52:
          if ( !v37 )
            v26 = v20 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v26;
      if ( v27 )
        MiWritePteShadow(v16, v26, v22);
      v16 += 8LL;
      v20 ^= (v20 ^ (v25 + v20)) & 0xFFFFFFFFFF000LL;
      if ( v16 >= v19 )
      {
        v24 = v42[0];
        break;
      }
    }
  }
  if ( a5 )
  {
    if ( v18 )
      MiUnlockPageTableInternal(v9, v18);
    MiUnlockWorkingSetShared(v9, v24);
  }
  else
  {
    MiUnlockWorkingSetExclusive(v9, v24, v22, v23);
  }
}
