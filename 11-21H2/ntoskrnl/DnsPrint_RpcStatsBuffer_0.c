/*
 * XREFs of DnsPrint_RpcStatsBuffer_0 @ 0x1409B05AC
 * Callers:
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 */

void __fastcall DnsPrint_RpcStatsBuffer_0(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  __int64 v8; // r8
  _QWORD *v9; // rax

  sub_1406FFED4(a1, a2);
  v8 = *a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v9 = (_QWORD *)a3[1], (_QWORD *)*v9 != a3) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  sub_1406FFE90(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
}
