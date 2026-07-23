/*
 * XREFs of sub_1405FACB4 @ 0x1405FACB4
 * Callers:
 *     sub_1405FB7C0 @ 0x1405FB7C0 (sub_1405FB7C0.c)
 * Callees:
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     sub_1405FB01C @ 0x1405FB01C (sub_1405FB01C.c)
 *     sub_1405FB0A0 @ 0x1405FB0A0 (sub_1405FB0A0.c)
 */

__int64 __fastcall sub_1405FACB4(wchar_t *Str, const wchar_t *a2, unsigned int a3)
{
  __int64 v4; // rbp
  const wchar_t *v5; // r12
  wchar_t *v7; // rax
  unsigned int v8; // ebx
  wchar_t *v9; // rsi
  __int64 v10; // rdi
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  __int64 v13; // rax
  const wchar_t *i; // rcx
  wchar_t *v15; // rax

  v4 = a3;
  v5 = a2;
  v7 = wcsstr(Str, L"&Ven_");
  v8 = 0;
  if ( !v7 )
    return (unsigned int)-1073700864;
  v9 = v7 + 5;
  v10 = wcschr(v7 + 5, 0x26u) - (v7 + 5);
  if ( (_DWORD)v10 )
  {
    if ( (int)sub_1405FB0A0(a2, v4, v9, 2LL * (unsigned int)v10) < 0 || (int)sub_1405FB01C(a2, v4) < 0 )
      return (unsigned int)-1073741789;
    v5 = &a2[(unsigned int)(v10 + 1)];
    LODWORD(v4) = -2 - 2 * v10 + v4;
  }
  v11 = wcsstr(Str, L"&Prod_");
  if ( !v11 )
    return (unsigned int)-1073700864;
  v12 = v11 + 6;
  v13 = wcschr(v11 + 6, 0x26u) - (v11 + 6);
  if ( (_DWORD)v13 && (int)sub_1405FB0A0(v5, (unsigned int)v4, v12, 2LL * (unsigned int)v13) < 0 )
    return (unsigned int)-1073741789;
  for ( i = a2; ; i = v15 )
  {
    v15 = wcschr(i, 0x5Fu);
    if ( !v15 )
      break;
    *v15 = 32;
  }
  return v8;
}
