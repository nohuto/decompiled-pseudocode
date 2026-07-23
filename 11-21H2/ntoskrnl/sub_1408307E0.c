/*
 * XREFs of sub_1408307E0 @ 0x1408307E0
 * Callers:
 *     sub_140830768 @ 0x140830768 (sub_140830768.c)
 *     sub_140A34CE8 @ 0x140A34CE8 (sub_140A34CE8.c)
 *     sub_140A35D9C @ 0x140A35D9C (sub_140A35D9C.c)
 *     sub_140A367B0 @ 0x140A367B0 (sub_140A367B0.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

char __fastcall sub_1408307E0(wchar_t *Str1, wchar_t *Str2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v6; // rax

  v2 = 0;
  v4 = Str1;
  if ( Str1 && Str2 )
  {
    while ( *v4 )
    {
      if ( !wcsicmp(v4, Str2) )
        return 1;
      v6 = -1LL;
      do
        ++v6;
      while ( v4[v6] );
      v4 += v6 + 1;
      if ( !v4 )
        return v2;
    }
  }
  return v2;
}
