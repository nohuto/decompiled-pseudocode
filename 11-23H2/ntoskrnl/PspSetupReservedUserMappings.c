/*
 * XREFs of PspSetupReservedUserMappings @ 0x1407DEE9C
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ZwAllocateVirtualMemory @ 0x14041B3F0 (ZwAllocateVirtualMemory.c)
 *     ZwAllocateVirtualMemoryEx @ 0x14041BFB0 (ZwAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, $115DCDF994C6370D29323EAB0E0C9502 *a2, _QWORD *a3)
{
  int v5; // ebx
  NTSTATUS VirtualMemory; // esi
  ULONG v8; // r15d
  ULONG v9; // r14d
  unsigned __int64 v10; // rbx
  __int64 v11; // rbp
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = *(_DWORD *)(a3[26] + 8LL) & 0x1000060;
  if ( !v5 && !a3[32] )
    return 0LL;
  VirtualMemory = 0;
  v8 = 0x2000;
  v9 = 4;
  KiStackAttachProcess(a1, 0, (__int64)a2);
  if ( v5 == 0x1000000 )
  {
    v8 = 270336;
    v9 = 1;
  }
  else if ( v5 )
  {
    BaseAddress = (PVOID)4;
    if ( v5 == 32 )
    {
      RegionSize = 1048320LL;
    }
    else if ( v5 == 64 )
    {
      RegionSize = 16776960LL;
    }
    VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
    if ( VirtualMemory < 0 )
      goto LABEL_16;
  }
  v10 = 0LL;
  if ( a3[32] )
  {
    v11 = 0LL;
    do
    {
      VirtualMemory = ZwAllocateVirtualMemoryEx(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID *)(v11 + a3[35]),
                        (PSIZE_T)(v11 + a3[35] + 8),
                        v8,
                        v9,
                        0LL,
                        0);
      if ( VirtualMemory < 0 )
        break;
      ++v10;
      v11 += 16LL;
    }
    while ( v10 < a3[32] );
  }
LABEL_16:
  KiUnstackDetachProcess(a2);
  return (unsigned int)VirtualMemory;
}
