/*
 * XREFs of sub_14084CAF8 @ 0x14084CAF8
 * Callers:
 *     sub_14084CA10 @ 0x14084CA10 (sub_14084CA10.c)
 *     sub_140B22004 @ 0x140B22004 (sub_140B22004.c)
 * Callees:
 *     sub_1406958D0 @ 0x1406958D0 (sub_1406958D0.c)
 */

char sub_14084CAF8()
{
  __int64 **v0; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v2) = 0;
  if ( !qword_140D3B098
    || (sub_1406958D0(qword_140D3B098, L"FullPrivilegeAuditing", 3, 1u, &v2), v0 = off_140A39150, !(_BYTE)v2) )
  {
    v0 = off_140A3A360;
  }
  off_140D3B238 = v0;
  return 1;
}
