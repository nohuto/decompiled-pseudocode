/*
 * XREFs of sub_18002BAD0 @ 0x18002BAD0
 * Callers:
 *     sub_180096EF0 @ 0x180096EF0 (sub_180096EF0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 */

__int64 __fastcall sub_18002BAD0(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  char *v3; // rdi
  char *v4; // rcx
  __int64 result; // rax

  v1 = a1 + 80;
  v2 = *(_QWORD **)(a1 + 80);
  v3 = (char *)v2[1];
  while ( !v3[25] )
  {
    sub_1800299BC(v1, v1, *((char **)v3 + 2));
    v4 = v3;
    v3 = *(char **)v3;
    result = sub_180010884(v4, 0x28uLL);
  }
  v2[1] = v2;
  *v2 = v2;
  v2[2] = v2;
  *(_QWORD *)(v1 + 8) = 0LL;
  return result;
}
