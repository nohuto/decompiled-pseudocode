/*
 * XREFs of sub_1406CA970 @ 0x1406CA970
 * Callers:
 *     sub_1402498B0 @ 0x1402498B0 (sub_1402498B0.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_1406CA780 @ 0x1406CA780 (sub_1406CA780.c)
 *     sub_1406CA810 @ 0x1406CA810 (sub_1406CA810.c)
 *     sub_1406CA8B0 @ 0x1406CA8B0 (sub_1406CA8B0.c)
 *     sub_1409ACBA0 @ 0x1409ACBA0 (sub_1409ACBA0.c)
 *     sub_1409B0FC0 @ 0x1409B0FC0 (sub_1409B0FC0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 */

_QWORD *__fastcall sub_1406CA970(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rbp

  sub_1406FFED4(a1, a2);
  if ( !a4 )
  {
    v8 = (_QWORD *)(a1 + 1280);
    v9 = *(_QWORD *)(a1 + 1280);
    if ( *(_QWORD *)(v9 + 8) == a1 + 1280 )
    {
      *a3 = v9;
      v10 = (_QWORD *)(a1 + 40);
      a3[1] = v8;
      *(_QWORD *)(v9 + 8) = a3;
      *v8 = a3;
      a3[2] = a1 + 40;
      goto LABEL_4;
    }
    goto FatalListEntryError_81;
  }
  v10 = (_QWORD *)a3[2];
LABEL_4:
  while ( 1 )
  {
    v10 = (_QWORD *)*v10;
    if ( v10 == (_QWORD *)(a1 + 40) )
      break;
    v13 = v10 - 185;
    if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 185)) )
      goto LABEL_9;
  }
  v11 = (_QWORD *)*a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v12 = (_QWORD *)a3[1], (_QWORD *)*v12 != a3) )
FatalListEntryError_81:
    __fastfail(3u);
  *v12 = v11;
  v13 = 0LL;
  v11[1] = v12;
  if ( v12 != v11 )
    v13 = 0LL;
LABEL_9:
  a3[2] = v10;
  sub_1406FFE90(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v13;
}
