/*
 * XREFs of _BuildStandardOverlayFilePath @ 0x18012F110
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18000B008 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     _AppendStandardOverlayFilePath @ 0x18012EF5C (_AppendStandardOverlayFilePath.c)
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x18012F180 (_StartPathWithLongPathPrefixIfNeeded.c)
 */

__int64 __fastcall BuildStandardOverlayFilePath(
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
  __int64 result; // rax

  v7 = a4 + a1 + a2;
  v9 = *a6;
  v10 = v7 + 8;
  if ( v7 < 0x208 )
    v10 = v7;
  *a6 = v10;
  if ( v10 > v9 )
    return 3221225507LL;
  result = StartPathWithLongPathPrefixIfNeeded(a1, v10, Destination);
  if ( (int)result >= 0 )
    return AppendStandardOverlayFilePath(a3, a5, a6, (wchar_t *)Destination);
  return result;
}
