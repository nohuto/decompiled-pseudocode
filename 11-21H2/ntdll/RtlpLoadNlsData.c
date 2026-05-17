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

char RtlpLoadNlsData()
{
  unsigned int *v0; // rdx
  char *v1; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( pTblPtrs )
    return 1;
  if ( (int)RtlGetLocaleFileMappingAddress(&v3, &gSystemLocale, 0LL) >= 0 )
  {
    v0 = (unsigned int *)(v3 + *(unsigned int *)(v3 + 16));
    v1 = (char *)v0 + *v0;
    gLocaleTables = *((_WORD *)v1 + 12);
    word_18017AA7C = *((_WORD *)v1 + 11);
    word_18017AA7A = *((_WORD *)v1 + 16);
    word_18017AAA8 = *((_WORD *)v1 + 13);
    qword_18017AA80 = (__int64)v0 + *((unsigned int *)v1 + 7);
    qword_18017AA88 = (__int64)v0 + *((unsigned int *)v1 + 9);
    qword_18017AA90 = (__int64)v0 + *((unsigned int *)v1 + 10);
    qword_18017AA98 = (__int64)v0 + *((unsigned int *)v1 + 14);
    pTblPtrs = (__int64)&gLocaleTables;
    return 1;
  }
  return 0;
}
