/*
 * XREFs of ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x18008F460
 * Callers:
 *     ??$_Emplace_reallocate@E@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z @ 0x18008F06C (--$_Emplace_reallocate@E@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAEPEAE@std@@YAPEAEPEAE00@Z @ 0x18008F034 (--$_Copy_memmove@PEAEPEAE@std@@YAPEAEPEAE00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<unsigned char *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<unsigned char *,unsigned char *>(a1, a2, a3);
  return &a3[a2 - (_QWORD)a1];
}
