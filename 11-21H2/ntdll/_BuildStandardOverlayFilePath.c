/*
 * XREFs of _BuildStandardOverlayFilePath @ 0x180128F68
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x180050A04 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     _AppendStandardOverlayFilePath @ 0x180128DC8 (_AppendStandardOverlayFilePath.c)
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x180129080 (_StartPathWithLongPathPrefixIfNeeded.c)
 */

errno_t __fastcall BuildStandardOverlayFilePath(
        rsize_t a1,
        int a2,
        wchar_t *a3,
        int a4,
        wchar_t *a5,
        unsigned int *a6,
        void *Destination)
{
  unsigned int v7; // edx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  errno_t result; // eax

  v7 = a4 + a1 + a2;
  v9 = *a6;
  v10 = v7 + 8;
  if ( v7 < 0x208 )
    v10 = v7;
  *a6 = v10;
  if ( v10 > v9 )
    return -1073741789;
  result = StartPathWithLongPathPrefixIfNeeded(a1, v10, Destination);
  if ( result >= 0 )
    return AppendStandardOverlayFilePath(a3, a5, a6, (wchar_t *)Destination);
  return result;
}
