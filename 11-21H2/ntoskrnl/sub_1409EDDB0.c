/*
 * XREFs of sub_1409EDDB0 @ 0x1409EDDB0
 * Callers:
 *     sub_140798F44 @ 0x140798F44 (sub_140798F44.c)
 * Callees:
 *     RtlInterlockedClearBitRun @ 0x1402A2030 (RtlInterlockedClearBitRun.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 */

void __fastcall sub_1409EDDB0(__int64 a1, ULONG_PTR a2, void *a3)
{
  unsigned __int64 v3; // r9
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = a3;
  RegionSize = a2;
  v3 = *(_QWORD *)(a1 + 112);
  if ( (unsigned __int64)a3 < v3 || (unsigned __int64)a3 >= v3 + *(unsigned int *)(a1 + 120) )
    ZwFreeVirtualMemory(*(HANDLE *)(a1 + 16), &BaseAddress, &RegionSize, 0x8000u);
  else
    RtlInterlockedClearBitRun(
      (PRTL_BITMAP)(a1 + 96),
      (__int64)((__int64)a3 - v3) / 4096,
      (((_DWORD)a2 + 4095) & 0xFFFFF000) >> 12);
}
