/*
 * XREFs of sub_18007B198 @ 0x18007B198
 * Callers:
 *     sub_180027830 @ 0x180027830 (sub_180027830.c)
 *     sub_18010027B @ 0x18010027B (sub_18010027B.c)
 *     sub_180100294 @ 0x180100294 (sub_180100294.c)
 *     sub_1801002AD @ 0x1801002AD (sub_1801002AD.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030FC8 @ 0x180030FC8 (sub_180030FC8.c)
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 */

void __fastcall sub_18007B198(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  char *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rdi
  char *v8; // rcx

  v1 = (__int64 *)(a1 + 200);
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(char **)(v3 + 8);
  if ( !v4[25] )
  {
    do
    {
      sub_180030FC8((__int64)v1, (__int64)v1, *((char **)v4 + 2));
      v5 = v4;
      v4 = *(char **)v4;
      sub_180010884(v5, 0x30uLL);
    }
    while ( !v4[25] );
    v3 = *v1;
  }
  sub_180010884((char *)v3, 0x30uLL);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(char **)(v6 + 8);
  if ( !v7[25] )
  {
    do
    {
      sub_180030FC8(a1 + 184, a1 + 184, *((char **)v7 + 2));
      v8 = v7;
      v7 = *(char **)v7;
      sub_180010884(v8, 0x30uLL);
    }
    while ( !v7[25] );
    v6 = *(_QWORD *)(a1 + 184);
  }
  sub_180010884((char *)v6, 0x30uLL);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 104));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 24));
  if ( *(_QWORD *)a1 )
  {
    sub_18007AD28(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFF80uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
