/*
 * XREFs of sub_1406774E8 @ 0x1406774E8
 * Callers:
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 */

wchar_t **__fastcall sub_1406774E8(wchar_t *Str1, int a2, int a3)
{
  __int64 v3; // rbx
  const wchar_t **v4; // rdi
  unsigned int v5; // esi

  v3 = 0LL;
  v4 = (const wchar_t **)&unk_140C034B8;
  v5 = 0;
  while ( (a3 & (_DWORD)v4[1]) != a3
       || !(Str1 ? wcsnicmp(Str1, *(v4 - 1), *(unsigned int *)v4) == 0 : a2 == *((_DWORD *)v4 + 1)) )
  {
    ++v5;
    v4 += 3;
    if ( v5 >= 0x11 )
      return (wchar_t **)v3;
  }
  return &(&off_140C034B0)[3 * v5];
}
