/*
 * XREFs of sub_180018A80 @ 0x180018A80
 * Callers:
 *     ?dtor$0@?0???0ContextBase@details@Concurrency@@QEAA@PEAVSchedulerBase@12@_N@Z@4HA @ 0x180101BDB (-dtor$0@-0---0ContextBase@details@Concurrency@@QEAA@PEAVSchedulerBase@12@_N@Z@4HA.c)
 *     sub_1801029C2 @ 0x1801029C2 (sub_1801029C2.c)
 *     sub_1801031A7 @ 0x1801031A7 (sub_1801031A7.c)
 *     sub_180106657 @ 0x180106657 (sub_180106657.c)
 *     sub_180106684 @ 0x180106684 (sub_180106684.c)
 *     sub_1801066B1 @ 0x1801066B1 (sub_1801066B1.c)
 *     sub_1801066EA @ 0x1801066EA (sub_1801066EA.c)
 *     sub_180106C26 @ 0x180106C26 (sub_180106C26.c)
 *     sub_18010D052 @ 0x18010D052 (sub_18010D052.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180018A80(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    result = sub_180010884(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
