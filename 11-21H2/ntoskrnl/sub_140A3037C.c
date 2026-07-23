/*
 * XREFs of sub_140A3037C @ 0x140A3037C
 * Callers:
 *     sub_1407880F0 @ 0x1407880F0 (sub_1407880F0.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 */

__int64 __fastcall sub_140A3037C(__int64 a1, wchar_t *a2)
{
  int v3; // ebx
  wchar_t *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = sub_1402DF9D0(a2, 200LL, &v6);
  if ( v3 < 0 || (v4 = wcschr(a2, 0x5Cu)) != 0LL && (v4 == a2 || !v4[1] || wcschr(v4 + 1, 0x5Cu)) )
    return (unsigned int)-1073741773;
  return (unsigned int)v3;
}
