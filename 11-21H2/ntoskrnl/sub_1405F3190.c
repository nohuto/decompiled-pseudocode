/*
 * XREFs of sub_1405F3190 @ 0x1405F3190
 * Callers:
 *     <none>
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall sub_1405F3190(__int64 a1, PVOID *a2, ULONG_PTR *a3)
{
  return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, a3, 0x1000u, 4u);
}
