/*
 * XREFs of MiLockAwePagesShared @ 0x1405AB994
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14097DFA0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14097E270 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14029EDB0 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 64, 0LL);
}
