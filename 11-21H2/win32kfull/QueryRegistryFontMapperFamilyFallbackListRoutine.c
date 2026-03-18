/*
 * XREFs of QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C0392770
 * Callers:
 *     <none>
 * Callees:
 *     cCapString @ 0x1C0014ABC (cCapString.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C029C874 (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 */

__int64 __fastcall QueryRegistryFontMapperFamilyFallbackListRoutine(
        WCHAR *a1,
        __int64 a2,
        WCHAR *a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  _OWORD v10[8]; // [rsp+20h] [rbp-98h] BYREF

  memset(v10, 0, sizeof(v10));
  cCapString((WCHAR *)&v10[4], a3, 32);
  cCapString((WCHAR *)v10, a1, 32);
  return AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(v8, v7, a5, v10);
}
