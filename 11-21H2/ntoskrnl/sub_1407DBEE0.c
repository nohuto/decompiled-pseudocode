/*
 * XREFs of sub_1407DBEE0 @ 0x1407DBEE0
 * Callers:
 *     sub_1407DBAC0 @ 0x1407DBAC0 (sub_1407DBAC0.c)
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 * Callees:
 *     sub_140360674 @ 0x140360674 (sub_140360674.c)
 */

void __fastcall sub_1407DBEE0(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    sub_140360674(v2);
  }
}
