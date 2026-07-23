/*
 * XREFs of MiDeleteKernelStack @ 0x140283C20
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x14021EB64 (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStackEx @ 0x14026FB60 (MmDeleteKernelStackEx.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiDeleteValidSystemPage @ 0x140280AA0 (MiDeleteValidSystemPage.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // al
  __int64 v11; // r9
  __int64 v12; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v14; // r10
  __int64 CachedResidentAvailable; // rdx
  unsigned __int64 v16; // r8
  bool v17; // zf
  signed __int32 v18; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-88h]
  _OWORD v23[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v24; // [rsp+58h] [rbp-50h]
  int v25; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v26; // [rsp+B8h] [rbp+10h]
  __int64 v27; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+20h]

  v24 = 0LL;
  memset(v23, 0, sizeof(v23));
  if ( (a2 & 1) != 0 )
  {
    v2 = 18LL;
  }
  else if ( (a2 & 8) != 0 )
  {
    v2 = 3LL;
  }
  else
  {
    v2 = (unsigned __int8)byte_140C684BC;
  }
  v3 = (unsigned int)(v2 + 1);
  v4 = (unsigned int)v2;
  v25 = v2 + 1;
  v5 = 0LL;
  v28 = (unsigned int)v2;
  v6 = 0LL;
  v7 = a1 - 8 * v2;
  v22 = v7;
  v8 = v7;
  v9 = v7 + 8 * v3;
  v10 = MiLockWorkingSetShared(&unk_140C69F00);
  v26 = v10;
  if ( v7 >= v9 )
    goto LABEL_16;
  do
  {
    if ( v5 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(&unk_140C69F00, v5);
    }
    v5 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)&unk_140C69F00, v5, 0, v11);
LABEL_7:
    v12 = *(_QWORD *)v7;
    if ( MiPteInShadowRange(v7)
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v21 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
        if ( (v21 & 0x20) != 0 )
          v12 |= 0x20uLL;
        if ( (v21 & 0x42) != 0 )
          v12 |= 0x42uLL;
      }
    }
    v27 = v12;
    if ( (v12 & 1) != 0 )
    {
      if ( !v6 )
        v6 = *(_QWORD *)(qword_140C673C8
                       + 8
                       * ((*(_QWORD *)(48
                                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 12) & 0xFFFFFFFFFFLL)
                                     - 0x220000000000LL
                                     + 40) >> 43) & 0x3FFLL));
      MiDeleteValidSystemPage((__int64)&unk_140C69F00, v7, 0, (struct _KTHREAD *)v23);
      ++*(_QWORD *)&v23[0];
    }
    v7 += 8LL;
  }
  while ( v7 < v9 );
  v4 = v28;
  v8 = v22;
  LODWORD(v3) = v25;
  if ( v5 )
    MiUnlockPageTableInternal(&unk_140C69F00, v5);
  v10 = v26;
LABEL_16:
  MiUnlockWorkingSetShared((__int64)&unk_140C69F00, v10);
  if ( (_UNKNOWN *)v6 != &MiSystemPartition
    || (_InterlockedExchangeAdd64(&qword_140C699C8, -v4),
        CurrentPrcb = KeGetCurrentPrcb(),
        v14 = *(_QWORD *)&v23[0],
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
    v14 = *(_QWORD *)&v23[0];
  }
  else
  {
    v16 = *(_QWORD *)&v23[0];
    if ( (unsigned __int64)(*(_QWORD *)&v23[0] + CachedResidentAvailable) <= 0x100 )
    {
      do
      {
        if ( v16 >= 0x80000 )
          break;
        v18 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + v16,
                CachedResidentAvailable);
        v17 = (_DWORD)CachedResidentAvailable == v18;
        LODWORD(CachedResidentAvailable) = v18;
        if ( v17 )
          goto LABEL_21;
        if ( v18 == -1 )
          break;
        v16 = *(_QWORD *)&v23[0];
      }
      while ( (unsigned __int64)(*(_QWORD *)&v23[0] + v18) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v14 = *(_QWORD *)&v23[0] + (int)CachedResidentAvailable - 192;
    }
  }
  if ( v14 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 17280), v14);
LABEL_21:
  MiReleasePtes(&unk_140C68408, v8, (unsigned int)v3);
  return MiReturnCommit(v6, v4 - *((_QWORD *)&v23[0] + 1));
}
