/*
 * XREFs of sub_1409DA014 @ 0x1409DA014
 * Callers:
 *     sub_140629E84 @ 0x140629E84 (sub_140629E84.c)
 *     sub_14062AAC8 @ 0x14062AAC8 (sub_14062AAC8.c)
 *     sub_14062BA64 @ 0x14062BA64 (sub_14062BA64.c)
 *     sub_14062BE2C @ 0x14062BE2C (sub_14062BE2C.c)
 *     sub_1409D9340 @ 0x1409D9340 (sub_1409D9340.c)
 *     sub_1409D95D0 @ 0x1409D95D0 (sub_1409D95D0.c)
 *     sub_1409D9E18 @ 0x1409D9E18 (sub_1409D9E18.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409DA014(char *P)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v2 = (_QWORD **)(P + 40);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(P, 0);
}
