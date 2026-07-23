/*
 * XREFs of MiSetGraphicsPtes @ 0x140626A30
 * Callers:
 *     MmSetGraphicsPtes @ 0x140A2EDA0 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiSetGraphicsPtes(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  unsigned __int64 *v6; // r15
  unsigned int v7; // ebx
  unsigned __int64 v8; // r12
  unsigned __int8 v9; // di
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rsi
  __int64 v13; // r9
  int v14; // edi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r13
  unsigned __int64 valid; // r8
  unsigned __int64 v18; // r14
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp+10h]
  unsigned __int64 v22; // [rsp+78h] [rbp+20h]

  v22 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v21 = v10;
  a5 = a6 & 1;
  if ( (a6 & 1) != 0 )
  {
    v11 = &v20;
    if ( !a3 )
      v11 = 0LL;
    v6 = v11;
  }
  v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  a6 = MiLockWorkingSetShared((__int64)v12);
  v14 = (v9 & 2) == 0;
  while ( 1 )
  {
    v15 = v8;
    if ( v8 <= v10 )
      break;
LABEL_23:
    if ( (unsigned int)++v14 >= 2 )
      goto LABEL_26;
  }
  while ( 1 )
  {
    v16 = v10;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v10 )
      v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    valid = MiLockLowestValidPageTable((__int64)v12, v15, &v20, v13);
    v20 = valid;
    if ( valid == ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      break;
LABEL_15:
    if ( v14 )
    {
LABEL_16:
      if ( !a5 && v6 )
        v6 += (((__int64)(v16 - v15) >> 3) + 1) / (v22 >> 12);
    }
LABEL_19:
    MiUnlockPageTableInternal((__int64)v12, valid);
    if ( MiWorkingSetIsContended((__int64)v12) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v12, a6);
      MiLockWorkingSetShared((__int64)v12);
    }
    v10 = v21;
    v15 = v16 + 8;
    if ( v16 + 8 > v21 )
      goto LABEL_23;
  }
  if ( v14 )
    goto LABEL_16;
  v18 = v15;
  if ( v15 > v16 )
    goto LABEL_19;
  while ( !MI_READ_PTE_LOCK_FREE(v18) )
  {
    v18 += 8LL;
    if ( v18 > v16 )
    {
      valid = v20;
      goto LABEL_15;
    }
  }
  v7 = -1073741800;
  MiUnlockPageTableInternal((__int64)v12, v20);
LABEL_26:
  MiUnlockWorkingSetShared((__int64)v12, a6);
  return v7;
}
