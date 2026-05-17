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
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+48h] [rbp-8h]

  if ( (a3 & 0x4000) == 0 )
    return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  v10 = 0x4000LL;
  while ( 1 )
  {
    v9 = 0LL;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v9, 0LL, &v10, 4096, 4) >= 0 )
      break;
    v10 -= 4096LL;
    if ( !v10 )
      return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  }
  v11 = 0;
  *(_DWORD *)(v9 + 4) = 0;
  v8 = a2;
  v7 = PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)PsspQueryVmBulkMode, (unsigned int)&v8, a3);
  ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
  return v7;
}
