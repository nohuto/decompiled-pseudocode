/*
 * XREFs of sub_1409A5188 @ 0x1409A5188
 * Callers:
 *     sub_1409A29D4 @ 0x1409A29D4 (sub_1409A29D4.c)
 *     sub_1409A4084 @ 0x1409A4084 (sub_1409A4084.c)
 *     sub_1409A61C4 @ 0x1409A61C4 (sub_1409A61C4.c)
 * Callees:
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409AB08C @ 0x1409AB08C (sub_1409AB08C.c)
 *     sub_1409AB3EC @ 0x1409AB3EC (sub_1409AB3EC.c)
 */

void __fastcall sub_1409A5188(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  int v6; // eax

  v2 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD **)(a1 + 80);
  while ( v4 != v2 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = sub_1409AB3EC(v5, a2);
    if ( v6 < 0 )
    {
      sub_1409A8628("TtmiWriteEventToAllQueues", 2194LL, (unsigned int)v6, 0xFFFFFFFFLL);
      sub_1409AB08C(v5);
    }
  }
}
