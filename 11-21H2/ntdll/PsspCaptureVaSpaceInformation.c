/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x180061DC4
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180060B70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureVaSpaceInformation2 @ 0x18006413C (PsspCaptureVaSpaceInformation2.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation(int a1, __int64 a2, int a3)
{
  unsigned int v7; // ebx
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+48h] [rbp-8h]

  if ( (a3 & 0x4000) == 0 )
    return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  RegionSize = 0x4000LL;
  while ( 1 )
  {
    BaseAddress = 0LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      break;
    RegionSize -= 4096LL;
    if ( !RegionSize )
      return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  }
  v11 = 0;
  *((_DWORD *)BaseAddress + 1) = 0;
  v8 = a2;
  v7 = PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)PsspQueryVmBulkMode, (unsigned int)&v8, a3);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return v7;
}
