/*
 * XREFs of ??$_Uninitialized_move@PEAIV?$allocator@I@std@@@std@@YAPEAIQEAI0PEAIAEAV?$allocator@I@0@@Z @ 0x18001EE78
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F210 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 * Callees:
 *     ??$_Copy_memmove@PEAIPEAI@std@@YAPEAIPEAI00@Z @ 0x18001E904 (--$_Copy_memmove@PEAIPEAI@std@@YAPEAIPEAI00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<unsigned int *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<unsigned int *,unsigned int *>(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
