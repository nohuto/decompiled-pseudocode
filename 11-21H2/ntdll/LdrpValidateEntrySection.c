/*
 * XREFs of LdrpValidateEntrySection @ 0x180034CF4
 * Callers:
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 */

bool __fastcall LdrpValidateEntrySection(__int64 a1)
{
  unsigned int AddressOfEntryPoint; // edx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, *(PVOID *)(a1 + 48), 0LL, &OutHeaders);
  AddressOfEntryPoint = OutHeaders->OptionalHeader.AddressOfEntryPoint;
  return !AddressOfEntryPoint
      || !*(_QWORD *)(a1 + 56)
      || AddressOfEntryPoint >= OutHeaders->OptionalHeader.SizeOfHeaders;
}
