/*
 * XREFs of memmove_0 @ 0x14002F194
 * Callers:
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1400383B2 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x14006435C (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GU.c)
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1400644C4 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$_Move_unchecked@PEAEPEAE@std@@YAPEAEPEAE00@Z @ 0x140064794 (--$_Move_unchecked@PEAEPEAE@std@@YAPEAEPEAE00@Z.c)
 *     ??$_Uninitialized_copy@PEBEV?$allocator@E@std@@@std@@YAPEAEQEBE0PEAEAEAV?$allocator@E@0@@Z @ 0x140064A38 (--$_Uninitialized_copy@PEBEV-$allocator@E@std@@@std@@YAPEAEQEBE0PEAEAEAV-$allocator@E@0@@Z.c)
 *     ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x140064A70 (--$_Uninitialized_move@PEAEV-$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV-$allocator@E@0@@Z.c)
 *     memmove_s_0 @ 0x14008E75C (memmove_s_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
