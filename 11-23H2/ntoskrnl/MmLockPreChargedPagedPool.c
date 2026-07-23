/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140A30C00
 * Callers:
 *     HalpMcUpdateLock @ 0x14051C1BC (HalpMcUpdateLock.c)
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 * Callees:
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 1);
}
