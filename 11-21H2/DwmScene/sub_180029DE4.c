/*
 * XREFs of sub_180029DE4 @ 0x180029DE4
 * Callers:
 *     sub_180029D70 @ 0x180029D70 (sub_180029D70.c)
 *     sub_18002B690 @ 0x18002B690 (sub_18002B690.c)
 *     sub_180048C70 @ 0x180048C70 (sub_180048C70.c)
 *     sub_180049030 @ 0x180049030 (sub_180049030.c)
 *     sub_18004DDDC @ 0x18004DDDC (sub_18004DDDC.c)
 *     sub_180055240 @ 0x180055240 (sub_180055240.c)
 *     sub_18005BD5C @ 0x18005BD5C (sub_18005BD5C.c)
 *     sub_18005CE30 @ 0x18005CE30 (sub_18005CE30.c)
 *     sub_18007A04C @ 0x18007A04C (sub_18007A04C.c)
 *     sub_180091F10 @ 0x180091F10 (sub_180091F10.c)
 *     sub_180096AC8 @ 0x180096AC8 (sub_180096AC8.c)
 *     sub_18009ACB8 @ 0x18009ACB8 (sub_18009ACB8.c)
 *     sub_1801003A8 @ 0x1801003A8 (sub_1801003A8.c)
 *     sub_18010220A @ 0x18010220A (sub_18010220A.c)
 *     sub_18010452D @ 0x18010452D (sub_18010452D.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 */

__int64 __fastcall sub_180029DE4(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  char *v4; // rbx
  char *v5; // rcx

  v1 = (__int64 *)(a1 + 80);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(char **)(v3 + 8);
  if ( !v4[25] )
  {
    do
    {
      sub_1800299BC((__int64)v1, (__int64)v1, *((char **)v4 + 2));
      v5 = v4;
      v4 = *(char **)v4;
      sub_180010884(v5, 0x28uLL);
    }
    while ( !v4[25] );
    v3 = *v1;
  }
  sub_180010884((char *)v3, 0x28uLL);
  return sub_18002B404(a1);
}
