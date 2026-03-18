/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140A30950
 * Callers:
 *     HalpMcUpdateLock @ 0x14051BC6C (HalpMcUpdateLock.c)
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 * Callees:
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 1);
}
