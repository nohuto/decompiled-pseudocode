/*
 * XREFs of _ValidateAndStandardizeOverlayPaths @ 0x1800508A0
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x180050A04 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     _IsOverlaySupportedPath @ 0x18005093C (_IsOverlaySupportedPath.c)
 */

__int64 __fastcall ValidateAndStandardizeOverlayPaths(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 result; // rax
  wchar_t *v8; // rcx
  unsigned int v9; // r8d
  _WORD *v10; // rdx
  bool v11; // zf

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  result = RtlAppendUnicodeToString((unsigned __int16 *)a4, a2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741789 )
      return 3221225659LL;
  }
  else
  {
    v8 = *(wchar_t **)(a4 + 8);
    *a5 = 0LL;
    result = IsOverlaySupportedPath(v8);
    v9 = result;
    if ( (int)result >= 0 )
    {
      v10 = *(_WORD **)(a4 + 8);
      v11 = *v10 == 92;
      *a6 = v10;
      if ( !v11 || *(_WORD *)*a5 != 92 )
        return (unsigned int)-1073741637;
      return v9;
    }
  }
  return result;
}
