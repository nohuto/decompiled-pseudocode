/*
 * XREFs of ??$_Fill_zero_memset@PEAM@std@@YAXPEAM_K@Z @ 0x180044D18
 * Callers:
 *     ??$_Construct_n@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_KAEBM@Z @ 0x180044BE0 (--$_Construct_n@AEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_KAEBM@Z.c)
 *     ??$fill@V?$_Array_iterator@M$0CA@@std@@M@std@@YAXV?$_Array_iterator@M$0CA@@0@0AEBM@Z @ 0x18009BD98 (--$fill@V-$_Array_iterator@M$0CA@@std@@M@std@@YAXV-$_Array_iterator@M$0CA@@0@0AEBM@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::_Fill_zero_memset<float *>(void *a1, __int64 a2)
{
  return memset_0(a1, 0, 4 * a2);
}
