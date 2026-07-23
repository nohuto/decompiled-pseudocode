/*
 * XREFs of PspDeleteUserStack @ 0x1407E83A4
 * Callers:
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14041B4B0 (ZwFreeVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1407452B0 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  void *v6; // rax
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v12; // [rsp+40h] [rbp-40h] BYREF

  memset(&v12, 0, sizeof(v12));
  KiStackAttachProcess(a1, 0, (__int64)&v12);
  if ( (*a4 & 2) != 0 )
  {
    v6 = (void *)a3[4];
    RegionSize = 0LL;
    BaseAddress = v6;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( (*a4 & 4) != 0 )
  {
    v8 = a3[7];
    BaseAddress = 0LL;
    RegionSize = v8;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
  }
  if ( (*a4 & 8) != 0 )
  {
    v9 = a3[8];
    BaseAddress = 0LL;
    RegionSize = v9;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &RegionSize, (__int64 *)&BaseAddress, 0x8000, 0, 0x40000000);
  }
  return KiUnstackDetachProcess(&v12);
}
