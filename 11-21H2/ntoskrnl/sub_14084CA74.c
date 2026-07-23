/*
 * XREFs of sub_14084CA74 @ 0x14084CA74
 * Callers:
 *     sub_14084CA10 @ 0x14084CA10 (sub_14084CA10.c)
 *     sub_140B22004 @ 0x140B22004 (sub_140B22004.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406958D0 @ 0x1406958D0 (sub_1406958D0.c)
 */

void sub_14084CA74()
{
  unsigned int v0; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v1; // [rsp+34h] [rbp-14h]

  if ( qword_140D3B098
    && (int)sub_1406958D0(qword_140D3B098, L"Bounds", 3, 8u, &v0) >= 0
    && v1 < v0
    && v1 >= 0x10
    && v0 - v1 >= 0x10 )
  {
    dword_140C09858 = v1;
    dword_140C0985C = v0;
  }
}
