/*
 * XREFs of RtlpLoadNlsData @ 0x18007FE28
 * Callers:
 *     RtlGetParentLocaleName @ 0x180013C20 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180015570 (RtlLocaleNameToLcid.c)
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18007AE4C (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x18010ACB0 (RtlIsValidLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18010B0A0 (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     RtlGetLocaleFileMappingAddress @ 0x18007FEF0 (RtlGetLocaleFileMappingAddress.c)
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
    word_180187D94 = *((_WORD *)v1 + 11);
    word_180187D92 = *((_WORD *)v1 + 16);
    word_180187DC0 = *((_WORD *)v1 + 13);
    qword_180187D98 = (__int64)v0 + *((unsigned int *)v1 + 7);
    qword_180187DA0 = (__int64)v0 + *((unsigned int *)v1 + 9);
    qword_180187DA8 = (__int64)v0 + *((unsigned int *)v1 + 10);
    qword_180187DB0 = (__int64)v0 + *((unsigned int *)v1 + 14);
    pTblPtrs = (__int64)&gLocaleTables;
    return 1;
  }
  return 0;
}
