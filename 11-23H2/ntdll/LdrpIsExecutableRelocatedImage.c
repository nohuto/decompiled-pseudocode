/*
 * XREFs of LdrpIsExecutableRelocatedImage @ 0x1800895B8
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 */

_BOOL8 __fastcall LdrpIsExecutableRelocatedImage(PVOID BaseAddress)
{
  PVOID MemoryInformation[2]; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp+10h] BYREF

  return RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders) >= 0
      && (PVOID)OutHeaders->OptionalHeader.ImageBase == BaseAddress
      && ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryImageInformation,
           MemoryInformation,
           0x18uLL,
           0LL) >= 0
      && MemoryInformation[0] == BaseAddress
      && (v4 & 2) == 0
      && (v4 & 1) == 0;
}
