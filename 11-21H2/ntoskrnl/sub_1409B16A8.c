/*
 * XREFs of sub_1409B16A8 @ 0x1409B16A8
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 */

NTSTATUS sub_1409B16A8()
{
  NTSTATUS result; // eax
  _OWORD MemoryInformation[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v2; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v3; // [rsp+78h] [rbp+10h] BYREF

  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID)__readmsr(0x6A7u),
             MemoryRegionInformation,
             MemoryInformation,
             0x30uLL,
             0LL);
  if ( result >= 0 )
  {
    v2 = 0LL;
    v3 = *(_QWORD *)&MemoryInformation[0];
    return sub_1407B99C0(0xFFFFFFFFFFFFFFFFuLL, &v3, &v2, 0x8000u, 0, 0x40000000);
  }
  return result;
}
