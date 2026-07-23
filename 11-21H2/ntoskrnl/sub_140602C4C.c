/*
 * XREFs of sub_140602C4C @ 0x140602C4C
 * Callers:
 *     sub_140602C9C @ 0x140602C9C (sub_140602C9C.c)
 * Callees:
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 */

__int64 __fastcall sub_140602C4C(wchar_t *Str2)
{
  __int64 v1; // rbx

  v1 = qword_140D049A8;
  if ( !qword_140D049A8 )
    return 0LL;
  do
  {
    if ( !wcsncmp((const wchar_t *)(v1 + 8), Str2, 0x20uLL) )
      break;
    v1 = *(_QWORD *)v1;
  }
  while ( v1 );
  return v1;
}
