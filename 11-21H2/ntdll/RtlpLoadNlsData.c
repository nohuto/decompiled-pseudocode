/*
 * XREFs of RtlpLoadNlsData @ 0x180083D84
 * Callers:
 *     RtlLcidToLocaleName @ 0x18004B900 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x18004C090 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18004D7D0 (RtlGetParentLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x180050610 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x180109740 (RtlIsValidLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x180109B30 (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     RtlGetLocaleFileMappingAddress @ 0x180083E50 (RtlGetLocaleFileMappingAddress.c)
 */

char __fastcall RtlpLoadNlsData(__int64 a1, __int64 a2, __int64 a3, ULONG *a4)
{
  unsigned int *v4; // rdx
  char *v5; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF

  if ( pTblPtrs )
    return 1;
  if ( RtlGetLocaleFileMappingAddress(&BaseAddress, &gSystemLocale, 0LL, a4) >= 0 )
  {
    v4 = (unsigned int *)((char *)BaseAddress + *((unsigned int *)BaseAddress + 4));
    v5 = (char *)v4 + *v4;
    gLocaleTables = *((_WORD *)v5 + 12);
    word_18017AA7C = *((_WORD *)v5 + 11);
    word_18017AA7A = *((_WORD *)v5 + 16);
    word_18017AAA8 = *((_WORD *)v5 + 13);
    qword_18017AA80 = (__int64)v4 + *((unsigned int *)v5 + 7);
    qword_18017AA88 = (__int64)v4 + *((unsigned int *)v5 + 9);
    qword_18017AA90 = (__int64)v4 + *((unsigned int *)v5 + 10);
    qword_18017AA98 = (__int64)v4 + *((unsigned int *)v5 + 14);
    pTblPtrs = (__int64)&gLocaleTables;
    return 1;
  }
  return 0;
}
