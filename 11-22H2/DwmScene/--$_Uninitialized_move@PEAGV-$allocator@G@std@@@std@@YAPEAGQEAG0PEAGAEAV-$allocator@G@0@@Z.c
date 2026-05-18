/*
 * XREFs of ??$_Uninitialized_move@PEAGV?$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV?$allocator@G@0@@Z @ 0x18008CCE8
 * Callers:
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x18008CAF0 (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAGPEAG@std@@YAPEAGPEAG00@Z @ 0x18008C8A0 (--$_Copy_memmove@PEAGPEAG@std@@YAPEAGPEAG00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<unsigned short *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<unsigned short *,unsigned short *>(a1, a2, a3);
  return &a3[2 * ((a2 - (__int64)a1) >> 1)];
}
