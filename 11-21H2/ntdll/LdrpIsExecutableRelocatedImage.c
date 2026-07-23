/*
 * XREFs of LdrpIsExecutableRelocatedImage @ 0x18008E310
 * Callers:
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpIsExecutableRelocatedImage(PVOID BaseAddress)
{
  __int64 result; // rax
  PVOID MemoryInformation[2]; // [rsp+30h] [rbp-28h] BYREF
  char v4; // [rsp+40h] [rbp-18h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp+10h] BYREF

  if ( RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders) < 0 )
    return 0LL;
  if ( (PVOID)OutHeaders->OptionalHeader.ImageBase != BaseAddress )
    return 0LL;
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         MemoryInformation,
         0x18uLL,
         0LL) < 0 )
    return 0LL;
  if ( MemoryInformation[0] != BaseAddress )
    return 0LL;
  if ( (v4 & 2) != 0 )
    return 0LL;
  result = 1LL;
  if ( (v4 & 1) != 0 )
    return 0LL;
  return result;
}
