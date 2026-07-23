/*
 * XREFs of MiCloneCaptureVadCommit @ 0x140643AC0
 * Callers:
 *     MiAllocateChildVads @ 0x140A4862C (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiCloneDiscardVadCommit @ 0x140A3C5F0 (MiCloneDiscardVadCommit.c)
 */

__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _QWORD *Pool; // rax
  _QWORD *v3; // rdi
  int v5; // ebp
  unsigned __int64 *v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  volatile LONG *SharedVm; // rbx
  KIRQL v10; // al
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  KIRQL v13; // r13
  __int64 NextPageTable; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  volatile LONG *v20; // rbx
  int v21; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+18h]

  v21 = 0;
  Pool = MiAllocatePool(64, 0x90uLL, 0x6356694Du);
  v3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = 0LL;
  *Pool = 0LL;
  v5 = 0;
  v6 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v7 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v22 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v8 = v22;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v6);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v13 = v10;
  if ( v7 <= v8 )
  {
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v7, v8, 0LL, v13, 4, &v21);
      if ( !NextPageTable )
        goto LABEL_15;
      v15 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
      v16 = v3[1];
      v17 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
      if ( !v16 )
        goto LABEL_13;
      v12 = v3[v16 + 1];
      v18 = v12 & 0x1FFFFF;
      if ( v18 + 1 < v18 )
        break;
      if ( v18 == 0x1FFFFF )
        break;
      v11 = v12 & 0xFFFFFFFFFFE00000uLL;
      if ( (v12 & 0xFFFFFFFFFFE00000uLL) + ((v18 + 1) << 21) != v17 )
        break;
      v3[v16 + 1] = v11 | (v12 + 1) & 0x1FFFFF;
LABEL_14:
      v8 = v22;
      v7 = v15 + 4096;
      if ( v7 > v22 )
        goto LABEL_15;
    }
    if ( v16 == 16 )
    {
      MiUnlockWorkingSetExclusive((__int64)v6, v13, v11, v12);
      v19 = MiAllocatePool(64, 0x90uLL, 0x6356694Du);
      if ( !v19 )
      {
        v5 = -1073741670;
        goto LABEL_16;
      }
      v19[1] = 0LL;
      *v19 = v3;
      v3 = v19;
      v20 = (volatile LONG *)MiGetSharedVm((__int64)v6);
      ExAcquireSpinLockExclusive(v20);
      *((_DWORD *)v20 + 1) = 0;
    }
LABEL_13:
    v3[v3[1]++ + 2] = v17;
    goto LABEL_14;
  }
LABEL_15:
  MiUnlockWorkingSetExclusive((__int64)v6, v13, v11, v12);
LABEL_16:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v5 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v5;
}
