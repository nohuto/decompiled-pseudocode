/*
 * XREFs of sub_140776E5C @ 0x140776E5C
 * Callers:
 *     sub_1407735A0 @ 0x1407735A0 (sub_1407735A0.c)
 *     sub_140775854 @ 0x140775854 (sub_140775854.c)
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 *     sub_140775D50 @ 0x140775D50 (sub_140775D50.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 *     sub_140777CF0 @ 0x140777CF0 (sub_140777CF0.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x1402DECE0 (RtlIsGenericTableEmptyAvl.c)
 *     sub_1407734A4 @ 0x1407734A4 (sub_1407734A4.c)
 *     sub_1407780BC @ 0x1407780BC (sub_1407780BC.c)
 *     sub_140778370 @ 0x140778370 (sub_140778370.c)
 */

BOOLEAN __fastcall sub_140776E5C(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  BOOLEAN result; // al
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); ; i = (_RTL_AVL_TABLE *)(a1 + 72) )
  {
    result = RtlIsGenericTableEmptyAvl(i);
    if ( result )
      break;
    sub_1407734A4(a1, *(void **)(*(_QWORD *)(a1 + 88) + 32LL));
  }
  v4 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    v7[1] = v4;
    result = sub_1407780BC(v5);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v6 = *(void **)(a1 + 184);
  if ( v6 )
  {
    result = sub_140778370(v6);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return result;
}
