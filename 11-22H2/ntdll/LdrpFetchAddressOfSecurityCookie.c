/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x18002B968
 * Callers:
 *     LdrInitSecurityCookie @ 0x18002B824 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180028E30 (RtlSectionTableFromVirtualAddress.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002BA28 (LdrImageDirectoryEntryToLoadConfig.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        char *BaseOfImage,
        unsigned int a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 Config; // rax
  unsigned __int64 v9; // rdi
  char *v10; // rdx
  PIMAGE_SECTION_HEADER v11; // rax
  __int64 v12; // r11
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  *a3 = 0;
  if ( Config
    && *(_DWORD *)Config >= 0x70u
    && (v9 = *(_QWORD *)(Config + 88), v9 > (unsigned __int64)BaseOfImage)
    && (v10 = &BaseOfImage[v5 - 8], v9 < (unsigned __int64)v10) )
  {
    v11 = RtlSectionTableFromVirtualAddress(OutHeaders, v10, (int)v9 - (int)BaseOfImage);
    if ( v11 && (v11->Characteristics & 0x80000000) == 0 )
      *a3 = 1;
    if ( a4 )
      *a4 = v12;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( Config && *(_DWORD *)Config >= 4u )
        *a4 = Config;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
