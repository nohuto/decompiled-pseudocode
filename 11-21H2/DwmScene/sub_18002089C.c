/*
 * XREFs of sub_18002089C @ 0x18002089C
 * Callers:
 *     sub_180020870 @ 0x180020870 (sub_180020870.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800202C0 @ 0x1800202C0 (sub_1800202C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002089C(__int64 a1, const CHAR *a2, __int64 a3)
{
  int v3; // esi
  int v6; // eax
  __int64 v7; // r8
  int cchWideChar; // r14d
  LPWSTR *v9; // rdi
  __int64 i; // rcx
  WCHAR *lpWideCharStr; // rax
  LPWSTR Src[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h]

  v3 = a3;
  if ( a3 )
  {
    v6 = MultiByteToWideChar(0xFDE9u, 0, a2, a3, 0LL, 0);
    cchWideChar = v6;
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 7LL;
    LOWORD(Src[0]) = 0;
    if ( v6 <= 0 )
      __fastfail(7u);
    if ( (unsigned __int64)v6 > 7 )
    {
      sub_1800202C0((const void **)Src, v6, v7, v6);
    }
    else
    {
      *(_QWORD *)&v14 = v6;
      v9 = Src;
      for ( i = v6; i; --i )
      {
        *(_WORD *)v9 = 0;
        v9 = (LPWSTR *)((char *)v9 + 2);
      }
      *((_WORD *)Src + v6) = 0;
    }
    lpWideCharStr = (WCHAR *)Src;
    if ( *((_QWORD *)&v14 + 1) >= 8uLL )
      lpWideCharStr = Src[0];
    MultiByteToWideChar(0xFDE9u, 0, a2, v3, lpWideCharStr, cchWideChar);
    *(_OWORD *)a1 = *(_OWORD *)Src;
    *(_OWORD *)(a1 + 16) = v14;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
