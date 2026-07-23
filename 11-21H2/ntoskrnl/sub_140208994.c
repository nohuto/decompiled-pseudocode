/*
 * XREFs of sub_140208994 @ 0x140208994
 * Callers:
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 * Callees:
 *     sub_1406DEFDC @ 0x1406DEFDC (sub_1406DEFDC.c)
 *     sub_1406DEFFC @ 0x1406DEFFC (sub_1406DEFFC.c)
 */

void __fastcall sub_140208994(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 4120);
  if ( (_QWORD *)*v1 != v1 )
  {
    sub_1406DEFFC();
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    sub_1406DEFDC();
  }
}
