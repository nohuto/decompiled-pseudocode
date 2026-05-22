/*
 * XREFs of ?deallocate@?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_PATH_INFO@@_K@Z @ 0x18006F494
 * Callers:
 *     _std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$7 @ 0x18006DDD2 (_std--vector_DISPLAYCONFIG_PATH_INFO_std--allocator_DISPLAYCONFIG_PATH_INFO___--_Resize_realloca.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<DISPLAYCONFIG_PATH_INFO>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 72 * a3);
}
