/*
 * XREFs of NtWriteVirtualMemory @ 0x14079E760
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14079E7C0 (MiReadWriteVirtualMemory.c)
 */

__int64 __fastcall NtWriteVirtualMemory(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return MiReadWriteVirtualMemory(a1, a5, 32, 0);
}
