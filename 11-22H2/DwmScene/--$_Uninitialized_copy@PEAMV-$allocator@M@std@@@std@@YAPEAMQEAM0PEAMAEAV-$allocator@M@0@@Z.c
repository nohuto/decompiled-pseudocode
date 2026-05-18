/*
 * XREFs of ??$_Uninitialized_copy@PEAMV?$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV?$allocator@M@0@@Z @ 0x180081AB0
 * Callers:
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180081D80 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18009FE54 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAMPEAM@std@@YAPEAMPEAM00@Z @ 0x180081528 (--$_Copy_memmove@PEAMPEAM@std@@YAPEAMPEAM00@Z.c)
 */

char *__fastcall std::_Uninitialized_copy<float *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<float *,float *>(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
