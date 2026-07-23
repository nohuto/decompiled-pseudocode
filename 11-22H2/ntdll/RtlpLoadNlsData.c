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
    word_180184CA4 = *((_WORD *)v5 + 11);
    word_180184CA2 = *((_WORD *)v5 + 16);
    word_180184CD0 = *((_WORD *)v5 + 13);
    qword_180184CA8 = (__int64)v4 + *((unsigned int *)v5 + 7);
    qword_180184CB0 = (__int64)v4 + *((unsigned int *)v5 + 9);
    qword_180184CB8 = (__int64)v4 + *((unsigned int *)v5 + 10);
    qword_180184CC0 = (__int64)v4 + *((unsigned int *)v5 + 14);
    pTblPtrs = (__int64)&gLocaleTables;
    return 1;
  }
  return 0;
}
