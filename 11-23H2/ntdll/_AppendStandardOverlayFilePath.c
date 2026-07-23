/*
 * XREFs of _AppendStandardOverlayFilePath @ 0x18012EF5C
 * Callers:
 *     _BuildStandardOverlayFilePath @ 0x18012F110 (_BuildStandardOverlayFilePath.c)
 * Callees:
 *     wcscat_s @ 0x18009B080 (wcscat_s.c)
 */

__int64 __fastcall AppendStandardOverlayFilePath(wchar_t *Source, wchar_t *a2, unsigned int *a3, wchar_t *a4)
{
  rsize_t v5; // rdi

  v5 = (unsigned __int64)*a3 >> 1;
  if ( wcscat_s(a4, v5, a2) )
    return 3221225701LL;
  else
    return wcscat_s(a4, v5, Source) != 0 ? 0xC00000E5 : 0;
}
