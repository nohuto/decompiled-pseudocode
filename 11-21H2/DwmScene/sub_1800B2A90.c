/*
 * XREFs of sub_1800B2A90 @ 0x1800B2A90
 * Callers:
 *     sub_1800B2B48 @ 0x1800B2B48 (sub_1800B2B48.c)
 *     sub_1800B2B54 @ 0x1800B2B54 (sub_1800B2B54.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800B2A90(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  while ( v2 )
  {
    *(_QWORD *)(a1 + 32) = --v2;
    if ( !v2 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 16);
  while ( v4 )
  {
    --v4;
    v5 = *(char **)(*(_QWORD *)(a1 + 8) + 8 * v4);
    if ( v5 )
      sub_180010884(v5, 0x10uLL);
  }
  v6 = *(char **)(a1 + 8);
  if ( v6 )
    sub_180010884(v6, 8LL * *(_QWORD *)(a1 + 16));
  v7 = *(char **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  return sub_180010884(v7, 0x10uLL);
}
