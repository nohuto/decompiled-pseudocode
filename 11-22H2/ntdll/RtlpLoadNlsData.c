/*
 * XREFs of RtlpLoadNlsData @ 0x18007F7B8
 * Callers:
 *     RtlGetParentLocaleName @ 0x180013E30 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180015780 (RtlLocaleNameToLcid.c)
 *     RtlLcidToLocaleName @ 0x180015FA0 (RtlLcidToLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18007A7DC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x180109810 (RtlIsValidLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x180109C00 (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     RtlGetLocaleFileMappingAddress @ 0x18007F880 (RtlGetLocaleFileMappingAddress.c)
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
    word_180184CA4 = *((_WORD *)v1 + 11);
    word_180184CA2 = *((_WORD *)v1 + 16);
    word_180184CD0 = *((_WORD *)v1 + 13);
    qword_180184CA8 = (__int64)v0 + *((unsigned int *)v1 + 7);
    qword_180184CB0 = (__int64)v0 + *((unsigned int *)v1 + 9);
    qword_180184CB8 = (__int64)v0 + *((unsigned int *)v1 + 10);
    qword_180184CC0 = (__int64)v0 + *((unsigned int *)v1 + 14);
    pTblPtrs = (__int64)&gLocaleTables;
    return 1;
  }
  return 0;
}
