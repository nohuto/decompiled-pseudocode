/*
 * XREFs of sub_180091B34 @ 0x180091B34
 * Callers:
 *     ?dtor$0@?0???1_TaskCollection@details@Concurrency@@QEAA@XZ@4HA @ 0x180106716 (-dtor$0@-0---1_TaskCollection@details@Concurrency@@QEAA@XZ@4HA.c)
 *     sub_18010788A @ 0x18010788A (sub_18010788A.c)
 *     sub_18010C94C @ 0x18010C94C (sub_18010C94C.c)
 *     sub_18010C965 @ 0x18010C965 (sub_18010C965.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 */

__int64 __fastcall sub_180091B34(__int64 *a1)
{
  __int64 v2; // rcx
  char *v3; // rbx
  char *v4; // rcx

  v2 = *a1;
  v3 = *(char **)(v2 + 8);
  if ( !v3[25] )
  {
    do
    {
      sub_1800299BC((__int64)a1, (__int64)a1, *((char **)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      sub_180010884(v4, 0x28uLL);
    }
    while ( !v3[25] );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0x28uLL);
}
