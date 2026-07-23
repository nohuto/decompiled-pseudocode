/*
 * XREFs of sub_14036972C @ 0x14036972C
 * Callers:
 *     sub_1403B6C90 @ 0x1403B6C90 (sub_1403B6C90.c)
 *     sub_1403B6E30 @ 0x1403B6E30 (sub_1403B6E30.c)
 *     sub_1405D47C0 @ 0x1405D47C0 (sub_1405D47C0.c)
 *     sub_1407ED964 @ 0x1407ED964 (sub_1407ED964.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_14080D164 @ 0x14080D164 (sub_14080D164.c)
 *     sub_140994860 @ 0x140994860 (sub_140994860.c)
 *     sub_140995040 @ 0x140995040 (sub_140995040.c)
 *     sub_140995780 @ 0x140995780 (sub_140995780.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_14036972C(unsigned int a1)
{
  _m_prefetchw(&dword_140C21D80);
  if ( !_InterlockedOr(&dword_140C21D80, a1) )
    ExQueueWorkItem(&stru_140C21D60, DelayedWorkQueue);
}
