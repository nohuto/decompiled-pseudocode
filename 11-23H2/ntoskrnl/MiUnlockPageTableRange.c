/*
 * XREFs of MiUnlockPageTableRange @ 0x14064D730
 * Callers:
 *     MiLockPageTableRange @ 0x14064D5A4 (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140A45FD4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableCharges @ 0x1402E2DD0 (MiUnlockPageTableCharges.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // bp
  __int64 v6; // r9
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = MiLockWorkingSetShared((__int64)v3);
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v4; i += 8LL )
  {
    MiLockPageTableInternal((__int64)v3, i, 0, v6);
    v8 = MI_READ_PTE_LOCK_FREE(i);
    MiUnlockPageTableCharges(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, v9, v10);
    MiUnlockPageTableInternal((__int64)v3, i);
  }
  return MiUnlockWorkingSetShared((__int64)v3, v5);
}
