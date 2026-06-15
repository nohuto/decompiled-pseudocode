/*
 * XREFs of memmove_0 @ 0x1400321F7
 * Callers:
 *     memmove_s @ 0x14000A578 (memmove_s.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x140026BB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x140060788 (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GU.c)
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1400608F0 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$12 @ 0x140060B20 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Insert_range_unsigned__ea_140060B20.c)
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$14 @ 0x140060BA3 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Insert_range_unsigned__ea_140060BA3.c)
 *     memmove_s_0 @ 0x140081418 (memmove_s_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
