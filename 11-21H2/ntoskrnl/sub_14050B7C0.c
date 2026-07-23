/*
 * XREFs of sub_14050B7C0 @ 0x14050B7C0
 * Callers:
 *     sub_14051FB70 @ 0x14051FB70 (sub_14051FB70.c)
 *     sub_14052AF40 @ 0x14052AF40 (sub_14052AF40.c)
 * Callees:
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 */

char __fastcall sub_14050B7C0(__int64 a1, __int64 a2, int a3, __int64 **a4)
{
  __int64 *v4; // rsi
  int v5; // edi
  __int64 *v6; // rbx
  __int64 *v9; // rbp
  __int64 **v10; // rax
  __int64 **v11; // rcx

  *a4 = 0LL;
  v4 = (__int64 *)qword_140C4D0C0;
  v5 = a3 + 1;
  v6 = &qword_140C4D0C0;
  while ( v4 != &qword_140C4D0C0 )
  {
    v9 = v4 - 1;
    if ( !wcsncmp((const wchar_t *)v4[36], *(const wchar_t **)(a1 + 296), 0xFFuLL) )
    {
      *a4 = v9;
      return 0;
    }
    if ( v5 == *(_DWORD *)v9 )
    {
      v6 = (__int64 *)*v4;
      ++v5;
    }
    if ( !v5 )
      return 0;
    v4 = (__int64 *)*v4;
  }
  *(_DWORD *)a1 = v5;
  v10 = (__int64 **)(a1 + 8);
  v11 = (__int64 **)v6[1];
  if ( *v11 != v6 )
    __fastfail(3u);
  *v10 = v6;
  *(_QWORD *)(a1 + 16) = v11;
  *v11 = (__int64 *)v10;
  v6[1] = (__int64)v10;
  return 1;
}
