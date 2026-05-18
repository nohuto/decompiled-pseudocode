/*
 * XREFs of sub_1800335F8 @ 0x1800335F8
 * Callers:
 *     sub_180030B10 @ 0x180030B10 (sub_180030B10.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

void __fastcall sub_1800335F8(__int64 a1)
{
  __int64 v2; // rcx

  sub_180010910(a1 + 136);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    sub_1800126E8(v2, *(_QWORD *)(a1 + 32));
    sub_180010884(*(char **)(a1 + 24), (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    sub_1800126E8(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
