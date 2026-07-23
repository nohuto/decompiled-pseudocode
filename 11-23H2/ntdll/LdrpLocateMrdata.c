/*
 * XREFs of LdrpLocateMrdata @ 0x1800E1F94
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x180032DD4 (LdrpChangeMrdataProtection.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180028C60 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpMakePermanentImageCommit @ 0x18002D9FC (LdrpMakePermanentImageCommit.c)
 */

__int64 LdrpLocateMrdata()
{
  PVOID v0; // rdx
  PIMAGE_SECTION_HEADER v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, (PVOID)0x180000000LL, 0LL, &OutHeaders);
  v1 = RtlSectionTableFromVirtualAddress(OutHeaders, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  result = LdrpMakePermanentImageCommit(0x180000000LL + v1->VirtualAddress, v1->Misc.PhysicalAddress);
  LdrpMrdataSize = v3;
  LdrpMrdataBase = v4;
  return result;
}
