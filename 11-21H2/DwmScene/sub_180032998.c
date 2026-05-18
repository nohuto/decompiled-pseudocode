/*
 * XREFs of sub_180032998 @ 0x180032998
 * Callers:
 *     sub_180031BB8 @ 0x180031BB8 (sub_180031BB8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180032998(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  char *v6; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 88);
    if ( v3 >= 0x10 )
      result = sub_180010884(*(char **)(v1 + 64), v3 + 1);
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 88) = 15LL;
    *(_BYTE *)(v1 + 64) = 0;
    v5 = *(_QWORD *)(v1 + 56);
    if ( v5 >= 0x10 )
      result = sub_180010884(*(char **)(v1 + 32), v5 + 1);
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 15LL;
    *(_BYTE *)(v1 + 32) = 0;
  }
  v6 = *(char **)(a1 + 8);
  if ( v6 )
    return sub_180010884(v6, 0x60uLL);
  return result;
}
