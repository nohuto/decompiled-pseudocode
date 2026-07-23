/*
 * XREFs of sub_1406768BC @ 0x1406768BC
 * Callers:
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 */

__int64 __fastcall sub_1406768BC(unsigned __int16 a1, int a2, wchar_t **a3)
{
  int v3; // r15d
  unsigned int v6; // edi
  int *v7; // rbx
  unsigned int i; // esi
  wchar_t *v9; // rax
  wchar_t Src[256]; // [rsp+20h] [rbp-238h] BYREF

  v3 = a1;
  v6 = 0;
  if ( !a3 )
    return 87LL;
  *a3 = 0LL;
  v7 = &dword_1400070BC;
  for ( i = 0; i < 6; ++i )
  {
    if ( (a2 & v7[1]) == a2 )
    {
      if ( *(v7 - 1) + v6 >= 0x100 )
        return 87LL;
      if ( (v3 & *v7) != 0 )
      {
        wcsncpy_s(&Src[v6], 256LL - v6, *(const wchar_t **)(v7 - 3), (unsigned int)*(v7 - 1));
        v6 += *(v7 - 1);
      }
    }
    v7 += 6;
  }
  if ( 2 * (unsigned __int64)v6 >= 0x200 )
    sub_140502A3C();
  Src[v6] = 0;
  if ( !v6 )
    return 0LL;
  v9 = (wchar_t *)sub_14067757C(2LL * (v6 + 1));
  *a3 = v9;
  if ( v9 )
  {
    wcscpy_s(v9, v6 + 1, Src);
    return 0LL;
  }
  return 8LL;
}
