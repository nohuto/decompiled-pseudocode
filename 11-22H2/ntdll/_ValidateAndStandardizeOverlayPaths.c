/*
 * XREFs of _ValidateAndStandardizeOverlayPaths @ 0x18000B338
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18000B228 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     _IsOverlaySupportedPath @ 0x18000B3D4 (_IsOverlaySupportedPath.c)
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 */

NTSTATUS __fastcall ValidateAndStandardizeOverlayPaths(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        _UNICODE_STRING *a4,
        _QWORD *a5,
        wchar_t **a6)
{
  NTSTATUS result; // eax
  wchar_t *Buffer; // rcx
  NTSTATUS v9; // r8d
  wchar_t *v10; // rdx
  bool v11; // zf

  if ( !a1 || !a2 || !a3 )
    return -1073741811;
  result = RtlAppendUnicodeToString(a4, a2);
  if ( result < 0 )
  {
    if ( result == -1073741789 )
      return -1073741637;
  }
  else
  {
    Buffer = a4->Buffer;
    *a5 = 0LL;
    result = IsOverlaySupportedPath(Buffer);
    v9 = result;
    if ( result >= 0 )
    {
      v10 = a4->Buffer;
      v11 = *v10 == 92;
      *a6 = v10;
      if ( !v11 || *(_WORD *)*a5 != 92 )
        return -1073741637;
      return v9;
    }
  }
  return result;
}
