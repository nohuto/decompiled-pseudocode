/*
 * XREFs of PspFreeCurrentThreadUserShadowStack @ 0x1409B3B70
 * Callers:
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x14041B1C0 (ZwQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1407450C0 (MmFreeVirtualMemory.c)
 */

NTSTATUS PspFreeCurrentThreadUserShadowStack()
{
  NTSTATUS result; // eax
  _OWORD MemoryInformation[3]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v3; // [rsp+78h] [rbp+10h] BYREF

  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID)__readmsr(0x6A7u),
             (MEMORY_INFORMATION_CLASS)3,
             MemoryInformation,
             0x30uLL,
             0LL);
  if ( result >= 0 )
  {
    v2 = 0LL;
    v3 = *(_QWORD *)&MemoryInformation[0];
    return MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v3, &v2, 0x8000, 0, 0x40000000);
  }
  return result;
}
