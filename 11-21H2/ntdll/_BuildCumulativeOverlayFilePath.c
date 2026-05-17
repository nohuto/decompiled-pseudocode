/*
 * XREFs of _BuildCumulativeOverlayFilePath @ 0x180128E24
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x180050A04 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     _AppendCumulativeOverlayFilePath @ 0x180128D0C (_AppendCumulativeOverlayFilePath.c)
 *     _ByteArrayToHexString @ 0x180128FD8 (_ByteArrayToHexString.c)
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x180129080 (_StartPathWithLongPathPrefixIfNeeded.c)
 */

errno_t __fastcall BuildCumulativeOverlayFilePath(
        rsize_t SourceSize,
        int a2,
        const wchar_t *a3,
        int a4,
        const wchar_t *a5,
        wchar_t *a6,
        __int64 a7,
        unsigned int *a8,
        void *Destination)
{
  unsigned int v11; // ebp
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  errno_t result; // eax
  __int64 v18; // rax
  int v19; // [rsp+40h] [rbp-A8h] BYREF
  const wchar_t *v20; // [rsp+48h] [rbp-A0h]
  wchar_t v21[40]; // [rsp+50h] [rbp-98h] BYREF

  v11 = SourceSize;
  v20 = a5;
  memset(v21, 0, 0x42uLL);
  v19 = 66;
  v14 = a2 + v11 + a4 + 66;
  v15 = *a8;
  v16 = v14 + 8;
  if ( v14 < 0x208 )
    v16 = v14;
  *a8 = v16;
  if ( v16 > v15 )
    return -1073741789;
  result = ByteArrayToHexString(a7, v13, v21, &v19);
  if ( result >= 0 )
  {
    result = StartPathWithLongPathPrefixIfNeeded(v11, v16, Destination);
    if ( result >= 0 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a6[v18] );
      return AppendCumulativeOverlayFilePath(a2, a3, v20, 2 * v18, a6, v21, a8, (wchar_t *)Destination);
    }
  }
  else if ( result == -1073741789 )
  {
    return -1073741595;
  }
  return result;
}
