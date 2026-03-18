/*
 * XREFs of MiDeleteKernelStack @ 0x14033BC30
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x140269118 (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 */

void __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r13
  char *AnyMultiplexedVm; // r14
  unsigned __int8 v10; // al
  __int64 v11; // r9
  __int64 v12; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v14; // rdx
  __int64 CachedResidentAvailable; // r8
  unsigned __int64 v16; // r9
  bool v17; // zf
  signed __int32 v18; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v20; // rax
  _OWORD v21[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+50h] [rbp-18h]
  unsigned int v23; // [rsp+B0h] [rbp+48h]
  unsigned __int8 v24; // [rsp+B8h] [rbp+50h]
  _QWORD *v25; // [rsp+C0h] [rbp+58h]
  __int64 v26; // [rsp+C8h] [rbp+60h] BYREF

  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
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
    v2 = (unsigned __int8)byte_140C5304C;
  }
  v3 = (unsigned int)v2;
  v23 = v2 + 1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a1 - 8 * v2;
  v7 = (_QWORD *)v6;
  v25 = (_QWORD *)v6;
  v8 = v6 + 8LL * (unsigned int)(v2 + 1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v24 = v10;
  if ( v6 >= v8 )
    goto LABEL_16;
  do
  {
    if ( v4 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    }
    v4 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0LL, v11);
LABEL_7:
    v12 = *(_QWORD *)v6;
    if ( MiPteInShadowRange(v6)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v20 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
        if ( (v20 & 0x20) != 0 )
          v12 |= 0x20uLL;
        if ( (v20 & 0x42) != 0 )
          v12 |= 0x42uLL;
      }
    }
    v26 = v12;
    if ( (v12 & 1) != 0 )
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C51F48
                       + 8
                       * ((*(_QWORD *)(48
                                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL)
                                     - 0x220000000000LL
                                     + 40) >> 43) & 0x3FFLL));
      MiDeleteValidSystemPage(AnyMultiplexedVm, v6, 0LL, v21);
      ++*(_QWORD *)&v21[0];
    }
    v6 += 8LL;
  }
  while ( v6 < v8 );
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  v10 = v24;
  v7 = v25;
LABEL_16:
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  if ( (ULONG_PTR *)v5 != &MiSystemPartition
    || (_InterlockedExchangeAdd64(&qword_140C53548, -v3),
        CurrentPrcb = KeGetCurrentPrcb(),
        v14 = *(_QWORD *)&v21[0],
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
    v14 = *(_QWORD *)&v21[0];
  }
  else
  {
    v16 = *(_QWORD *)&v21[0];
    if ( (unsigned __int64)(*(_QWORD *)&v21[0] + CachedResidentAvailable) <= 0x100 )
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
        v16 = *(_QWORD *)&v21[0];
      }
      while ( (unsigned __int64)(*(_QWORD *)&v21[0] + v18) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v14 = *(_QWORD *)&v21[0] + (int)CachedResidentAvailable - 192;
    }
  }
  if ( v14 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16960), v14);
LABEL_21:
  MiReleasePtes((__int64)&unk_140C52F98, v7, v23);
  MiReturnCommit(v5, v3 - *((_QWORD *)&v21[0] + 1));
}
