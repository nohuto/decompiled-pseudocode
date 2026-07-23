/*
 * XREFs of _BuildCumulativeOverlayFilePath @ 0x18012EFCC
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18000B008 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _ByteArrayToHexString @ 0x1800B2146 (_ByteArrayToHexString.c)
 *     _AppendCumulativeOverlayFilePath @ 0x18012EE8C (_AppendCumulativeOverlayFilePath.c)
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x18012F180 (_StartPathWithLongPathPrefixIfNeeded.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall BuildCumulativeOverlayFilePath(
        rsize_t SourceSize,
        int a2,
        const wchar_t *a3,
        int a4,
        const wchar_t *a5,
        wchar_t *a6,
        char *a7,
        unsigned int *a8,
        void *Destination)
{
  unsigned int v11; // ebp
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 result; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+40h] [rbp-A8h] BYREF
  const wchar_t *v20; // [rsp+48h] [rbp-A0h]
  wchar_t v21[40]; // [rsp+50h] [rbp-98h] BYREF

  v11 = SourceSize;
  v20 = a5;
  memset_thunk_772440563353939046(v21, 0, 0x42uLL);
  v19 = 66;
  v14 = a2 + v11 + a4 + 66;
  v15 = *a8;
  v16 = v14 + 8;
  if ( v14 < 0x208 )
    v16 = v14;
  *a8 = v16;
  if ( v16 > v15 )
    return 3221225507LL;
  result = ByteArrayToHexString(a7, v13, (__int64)v21, &v19);
  if ( (int)result >= 0 )
  {
    result = StartPathWithLongPathPrefixIfNeeded(v11, v16, Destination);
    if ( (int)result >= 0 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a6[v18] );
      return AppendCumulativeOverlayFilePath(a2, a3, v20, 2 * (int)v18, a6, v21, a8, (wchar_t *)Destination);
    }
  }
  else if ( (_DWORD)result == -1073741789 )
  {
    return 3221225701LL;
  }
  return result;
}
