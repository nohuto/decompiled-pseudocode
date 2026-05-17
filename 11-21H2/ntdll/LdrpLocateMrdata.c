/*
 * XREFs of LdrpLocateMrdata @ 0x1800E2008
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x18001C980 (LdrpChangeMrdataProtection.c)
 * Callees:
 *     LdrpMakePermanentImageCommit @ 0x180033774 (LdrpMakePermanentImageCommit.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180034310 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 */

__int64 LdrpLocateMrdata()
{
  __int64 v0; // rdx
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, 0x180000000uLL, 0LL, &v5);
  v1 = RtlSectionTableFromVirtualAddress(v5, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  result = LdrpMakePermanentImageCommit(0x180000000LL + *(unsigned int *)(v1 + 12), *(unsigned int *)(v1 + 8));
  LdrpMrdataSize = v3;
  LdrpMrdataBase = v4;
  return result;
}
