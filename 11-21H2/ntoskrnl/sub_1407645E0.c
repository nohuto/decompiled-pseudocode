/*
 * XREFs of sub_1407645E0 @ 0x1407645E0
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140661C4C @ 0x140661C4C (sub_140661C4C.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 * Callees:
 *     sub_1409536B0 @ 0x1409536B0 (sub_1409536B0.c)
 */

void __fastcall sub_1407645E0(_QWORD **a1)
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
    sub_1409536B0(v2);
  }
}
