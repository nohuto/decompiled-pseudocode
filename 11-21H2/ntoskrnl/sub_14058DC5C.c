/*
 * XREFs of sub_14058DC5C @ 0x14058DC5C
 * Callers:
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 *     sub_1406F9808 @ 0x1406F9808 (sub_1406F9808.c)
 * Callees:
 *     sub_14028C978 @ 0x14028C978 (sub_14028C978.c)
 */

void __fastcall sub_14058DC5C(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD **)(a1 + 656);
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 == v1 )
      break;
    if ( (_QWORD **)v2[1] != v1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = v3;
    v3[1] = v1;
    sub_14028C978(v2, 1u);
  }
}
