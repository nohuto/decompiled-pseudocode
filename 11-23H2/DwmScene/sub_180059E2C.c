/*
 * XREFs of sub_180059E2C @ 0x180059E2C
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180058B2C @ 0x180058B2C (sub_180058B2C.c)
 *     sub_180059174 @ 0x180059174 (sub_180059174.c)
 */

_QWORD *__fastcall sub_180059E2C(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  _QWORD *result; // rax
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 424);
  v3 = a1 + 416;
  result = sub_180059174(&v6, *(__int64 **)(a1 + 416), v2, a2);
  if ( v6 == v2 )
  {
    if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)(v3 + 16) )
    {
      return sub_180058B2C((char **)v3, *(char **)(v3 + 8), a2);
    }
    else
    {
      result = sub_180012440(*(_QWORD **)(v3 + 8), a2);
      *(_QWORD *)(v3 + 8) += 32LL;
    }
  }
  return result;
}
