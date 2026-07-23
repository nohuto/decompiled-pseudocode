/*
 * XREFs of sub_140677764 @ 0x140677764
 * Callers:
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 */

wchar_t **__fastcall sub_140677764(wchar_t *Str1, int a2, int a3, char a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  unsigned int v6; // esi
  unsigned int v13; // ecx

  v4 = 0LL;
  v5 = (char *)&unk_140C03104;
  v6 = 0;
  while ( 1 )
  {
    if ( (a3 & *((_DWORD *)v5 - 1)) == a3 )
    {
      if ( *(_DWORD *)v5 )
      {
        v13 = 0;
        while ( *(_BYTE *)(v13 + *(_QWORD *)(v5 + 4)) != a4 )
        {
          if ( ++v13 >= *(_DWORD *)v5 )
            goto LABEL_7;
        }
      }
      if ( Str1
         ? wcsnicmp(Str1, *(const wchar_t **)(v5 - 20), *((unsigned int *)v5 - 3)) == 0
         : a2 == *((_DWORD *)v5 - 2) )
      {
        return &(&off_140C030F0)[4 * v6];
      }
    }
LABEL_7:
    ++v6;
    v5 += 32;
    if ( v6 >= 9 )
      return (wchar_t **)v4;
  }
}
