/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x180028C60
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     RtlAddressInSectionTable @ 0x18002B0F0 (RtlAddressInSectionTable.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002B798 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpLocateMrdata @ 0x1800E1F94 (LdrpLocateMrdata.c)
 *     RtlImageRvaToVa @ 0x1800F6EE0 (RtlImageRvaToVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSectionTableFromVirtualAddress(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // ecx

  v3 = *(unsigned __int16 *)(a1 + 6);
  v4 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 12);
    if ( a3 >= v6 && a3 < *(_DWORD *)(v4 + 16) + v6 )
      break;
    v4 += 40LL;
    if ( ++v5 >= v3 )
      return 0LL;
  }
  return v4;
}
