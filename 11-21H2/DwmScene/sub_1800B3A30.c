/*
 * XREFs of sub_1800B3A30 @ 0x1800B3A30
 * Callers:
 *     sub_1800B3B80 @ 0x1800B3B80 (sub_1800B3B80.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_1800B2728 @ 0x1800B2728 (sub_1800B2728.c)
 *     sub_1800B2884 @ 0x1800B2884 (sub_1800B2884.c)
 *     sub_1800B3B60 @ 0x1800B3B60 (sub_1800B3B60.c)
 */

__int64 __fastcall sub_1800B3A30(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  char *v6; // r14
  void *v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  char *v12; // rcx

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 != v1 && v3 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      sub_1800B3B60();
    v3 *= 2LL;
  }
  v5 = a1[3] >> 1;
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL )
    sub_1800120D4();
  v6 = (char *)sub_180011088(8 * v3);
  v7 = (void *)sub_1800B2884((void *)(a1[1] + 8 * v5), a1[1] + 8LL * a1[2], &v6[8 * v5]);
  v8 = (void *)a1[1];
  if ( v5 > v4 )
  {
    sub_1800B2884(v8, (__int64)v8 + 8 * v4, v7);
    v10 = sub_1800B2884((void *)(a1[1] + 8 * v4), a1[1] + 8 * v5, v6);
    v5 = v4;
  }
  else
  {
    v9 = sub_1800B2884(v8, (__int64)v8 + 8 * v5, v7);
    sub_1800B2728(v9, v4 - v5);
    v10 = (__int64)v6;
  }
  result = sub_1800B2728(v10, v5);
  v12 = (char *)a1[1];
  if ( v12 )
    result = sub_180010884(v12, 8LL * a1[2]);
  a1[2] += v4;
  a1[1] = v6;
  return result;
}
