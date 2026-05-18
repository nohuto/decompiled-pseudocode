/*
 * XREFs of sub_18006E6E0 @ 0x18006E6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180024B5C @ 0x180024B5C (sub_180024B5C.c)
 *     sub_180056CD4 @ 0x180056CD4 (sub_180056CD4.c)
 */

unsigned __int8 __fastcall sub_18006E6E0(__int64 a1, __int64 *a2)
{
  unsigned __int8 result; // al
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  sub_180024B5C(*a2, &v7);
  result = sub_180011DE0(&v7);
  if ( result )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(v4 + 8);
    if ( v5 == *(_QWORD **)(v4 + 16) )
    {
      result = (unsigned __int8)sub_180056CD4(*(char ***)(a1 + 8), *(char **)(v4 + 8), &v7);
    }
    else
    {
      result = (unsigned __int8)sub_18001246C(v5, &v7);
      *(_QWORD *)(v6 + 8) += 16LL;
    }
  }
  if ( v8 )
    return sub_180010530(v8);
  return result;
}
