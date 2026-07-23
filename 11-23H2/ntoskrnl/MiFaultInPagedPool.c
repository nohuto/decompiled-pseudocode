/*
 * XREFs of MiFaultInPagedPool @ 0x1406310A8
 * Callers:
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiFaultInPagedPool(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  char *AnyMultiplexedVm; // rbx
  unsigned __int8 v5; // r14
  __int64 v6; // r9
  __int16 v7; // ax

  v2 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v5 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0, v6);
  v7 = MI_READ_PTE_LOCK_FREE(v2);
  if ( (v7 & 1) != 0 && (v7 & 0x200) != 0 )
    MiCopyOnWrite(BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL, 4);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v5);
  return *(_BYTE *)BugCheckParameter2;
}
