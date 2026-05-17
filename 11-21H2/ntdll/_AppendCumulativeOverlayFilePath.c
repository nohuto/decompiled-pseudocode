/*
 * XREFs of _AppendCumulativeOverlayFilePath @ 0x180128D0C
 * Callers:
 *     _BuildCumulativeOverlayFilePath @ 0x180128E24 (_BuildCumulativeOverlayFilePath.c)
 * Callees:
 *     wcscat_s @ 0x18009F700 (wcscat_s.c)
 *     wcsncat_s @ 0x18009F840 (wcsncat_s.c)
 */

errno_t __fastcall AppendCumulativeOverlayFilePath(
        int a1,
        const wchar_t *a2,
        const wchar_t *a3,
        int a4,
        wchar_t *a5,
        wchar_t *Source,
        unsigned int *a7,
        wchar_t *Destination)
{
  rsize_t v11; // rbx
  errno_t result; // eax

  v11 = (unsigned __int64)*a7 >> 1;
  if ( wcscat_s(Destination, v11, a3) )
    return -1073741595;
  if ( wcsncat_s(Destination, v11, a2, (unsigned __int64)(unsigned int)(a1 - a4) >> 1) )
    return -1073741595;
  if ( wcscat_s(Destination, v11, Source) )
    return -1073741595;
  if ( wcscat_s(Destination, v11, L"\\") )
    return -1073741595;
  result = wcscat_s(Destination, v11, a5);
  if ( result )
    return -1073741595;
  return result;
}
