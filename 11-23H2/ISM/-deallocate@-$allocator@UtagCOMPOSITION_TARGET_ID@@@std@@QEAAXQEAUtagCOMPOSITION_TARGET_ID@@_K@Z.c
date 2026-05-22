/*
 * XREFs of ?deallocate@?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@QEAAXQEAUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x1800613F0
 * Callers:
 *     _std::vector_tagCOMPOSITION_TARGET_ID_std::allocator_tagCOMPOSITION_TARGET_ID___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$7 @ 0x18006002C (_std--vector_tagCOMPOSITION_TARGET_ID_std--allocator_tagCOMPOSITION_TARGET_ID___--_Resize_reallo.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<tagCOMPOSITION_TARGET_ID>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 28 * a3);
}
