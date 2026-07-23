/*
 * XREFs of sub_1409AF728 @ 0x1409AF728
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A7A98 @ 0x1405A7A98 (sub_1405A7A98.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409AF728(PVOID BaseAddress)
{
  int VirtualMemory; // edi
  __int64 v3; // rdx
  __int64 i; // r8
  unsigned __int64 v6; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD MemoryInformation[3]; // [rsp+38h] [rbp-F0h] BYREF
  ULONG_PTR v8[20]; // [rsp+70h] [rbp-B8h] BYREF

  memset(v8, 0, 0x98uLL);
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  v6 = 0LL;
  if ( ((unsigned __int8)BaseAddress & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  VirtualMemory = sub_1405A7A98(
                    (unsigned __int64)BaseAddress,
                    ((unsigned __int64)BaseAddress + 8) & 0xFFFFFFFFFFFFFFFCuLL | 1);
  if ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      BaseAddress,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory >= 0 )
      VirtualMemory = sub_1407B99C0(
                        0xFFFFFFFFFFFFFFFFuLL,
                        (unsigned __int64 *)MemoryInformation,
                        &v6,
                        0x8000u,
                        0,
                        0x40000000);
  }
  if ( VirtualMemory < 0 )
  {
    v8[2] = 0LL;
    v8[0] = 0x1C0000409LL;
    LODWORD(v8[3]) = 1;
    v8[1] = 0LL;
    v8[4] = VirtualMemory;
    v3 = *((_QWORD *)KeGetCurrentThread() + 5);
    for ( i = v3; (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
      ;
    if ( (*(_QWORD *)(v3 + 8) & 1LL) != 0 )
    {
      do
        v3 = *(_QWORD *)(v3 + 40);
      while ( (*(_BYTE *)(v3 + 8) & 1) != 0 );
    }
    sub_140299280((NTSTATUS *)v8, v3 - 720, i - 400, 1u, 0);
  }
  return (unsigned int)VirtualMemory;
}
