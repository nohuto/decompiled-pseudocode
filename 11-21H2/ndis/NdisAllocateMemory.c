/*
 * XREFs of NdisAllocateMemory @ 0x1C00BE480
 * Callers:
 *     ?ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z @ 0x1C00ACE10 (-ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateMemory(
        PVOID *VirtualAddress,
        UINT Length,
        UINT MemoryFlags,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  void *v5; // r9
  __int64 Pool2; // rax

  v5 = 0LL;
  if ( !MemoryFlags )
  {
    Pool2 = ExAllocatePool2(66LL, Length, 1835091022);
LABEL_7:
    v5 = (void *)Pool2;
    goto LABEL_8;
  }
  if ( (MemoryFlags & 2) != 0 )
  {
    Pool2 = (__int64)MmAllocateNonCachedMemory(Length);
    goto LABEL_7;
  }
  if ( (MemoryFlags & 1) != 0 )
  {
    Pool2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
              Length,
              0LL,
              (NDIS_PHYSICAL_ADDRESS)HighestAcceptableAddress.QuadPart,
              0LL,
              4,
              0x80000000);
    goto LABEL_7;
  }
LABEL_8:
  *VirtualAddress = v5;
  return v5 == 0LL ? 0xC0000001 : 0;
}
