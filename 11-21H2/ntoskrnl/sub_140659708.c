/*
 * XREFs of sub_140659708 @ 0x140659708
 * Callers:
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_140419D6C @ 0x140419D6C (sub_140419D6C.c)
 *     sub_140419E30 @ 0x140419E30 (sub_140419E30.c)
 *     sub_140419F18 @ 0x140419F18 (sub_140419F18.c)
 */

__int64 __fastcall sub_140659708(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 **v3; // rcx
  __int64 result; // rax

  sub_140419E30(a1[362]);
  v2 = a1[363];
  if ( *(__int64 **)(v2 + 8) != a1 + 363 || (v3 = (__int64 **)a1[364], *v3 != a1 + 363) )
    __fastfail(3u);
  *v3 = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  sub_140419F18(a1[362]);
  result = sub_140419D6C((volatile signed __int64 *)a1[362]);
  a1[362] = 0LL;
  return result;
}
