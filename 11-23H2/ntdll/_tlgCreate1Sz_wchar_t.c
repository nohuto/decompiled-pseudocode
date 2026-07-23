/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1800DC608
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007ED74 (LdrpLogRelativePathWithAlteredSearchError.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &word_180137D3C;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
