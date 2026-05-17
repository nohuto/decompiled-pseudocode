/*
 * XREFs of _AppendStandardOverlayFilePath @ 0x180128DC8
 * Callers:
 *     _BuildStandardOverlayFilePath @ 0x180128F68 (_BuildStandardOverlayFilePath.c)
 * Callees:
 *     wcscat_s @ 0x18009F700 (wcscat_s.c)
 */

errno_t __fastcall AppendStandardOverlayFilePath(wchar_t *Source, wchar_t *a2, unsigned int *a3, wchar_t *a4)
{
  rsize_t v5; // rbx
  errno_t result; // eax

  v5 = (unsigned __int64)*a3 >> 1;
  if ( wcscat_s(a4, v5, a2) )
    return -1073741595;
  result = wcscat_s(a4, v5, Source);
  if ( result )
    return -1073741595;
  return result;
}
