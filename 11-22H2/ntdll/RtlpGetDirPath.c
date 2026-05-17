/*
 * XREFs of RtlpGetDirPath @ 0x18006AB10
 * Callers:
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 * Callees:
 *     wcschr @ 0x180094960 (wcschr.c)
 *     wcsrchr @ 0x180094BB0 (wcsrchr.c)
 */

const wchar_t *__fastcall RtlpGetDirPath(wchar_t *Str, _QWORD *a2)
{
  const wchar_t *v3; // rbx
  wchar_t *v4; // rax
  wchar_t *v5; // rsi
  wchar_t *v6; // rax
  _QWORD *SubSystemTib; // rcx
  __int64 v9; // rbx

  v3 = Str;
  if ( !Str )
  {
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && (v9 = SubSystemTib[1]) != 0 )
      v3 = *(const wchar_t **)(v9 + 8);
    else
      v3 = *(const wchar_t **)(LdrpImageEntry + 80);
  }
  v4 = wcschr(v3, 0x5Cu);
  v5 = v4;
  if ( !v4 )
    goto LABEL_7;
  v6 = wcsrchr(v4, 0x5Cu);
  if ( v6 == v5 )
    ++v6;
  if ( v6 )
  {
    *a2 = (char *)v6 - (char *)v3;
    return v3;
  }
  else
  {
LABEL_7:
    *a2 = 0LL;
    return 0LL;
  }
}
