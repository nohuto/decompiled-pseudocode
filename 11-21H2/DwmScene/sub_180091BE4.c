/*
 * XREFs of sub_180091BE4 @ 0x180091BE4
 * Callers:
 *     sub_18008E910 @ 0x18008E910 (sub_18008E910.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 *     sub_18008E974 @ 0x18008E974 (sub_18008E974.c)
 */

__int64 __fastcall sub_180091BE4(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rdi
  char *v4; // rcx
  __int64 v5; // rcx
  char *v6; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  sub_180010910(a1 + 128);
  sub_180010910(a1 + 112);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(char **)(v2 + 8);
  if ( !v3[25] )
  {
    do
    {
      sub_1800299BC(a1 + 88, a1 + 88, *((char **)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      sub_180010884(v4, 0x28uLL);
    }
    while ( !v3[25] );
    v2 = *(_QWORD *)(a1 + 88);
  }
  sub_180010884((char *)v2, 0x28uLL);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    sub_18008E974(v5, *(_QWORD *)(a1 + 64));
    sub_180010884(*(char **)(a1 + 56), 8 * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v6 = *(char **)(a1 + 32);
  if ( v6 )
  {
    sub_180010884(v6, (*(_QWORD *)(a1 + 48) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return sub_180010910(a1 + 16);
}
