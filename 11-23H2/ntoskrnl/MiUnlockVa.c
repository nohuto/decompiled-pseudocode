/*
 * XREFs of MiUnlockVa @ 0x140350EE4
 * Callers:
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BDBC (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWsle @ 0x1402A2990 (MiUnlockWsle.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax

  v4 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return MiUnlockWsle(a1, a2, 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
}
