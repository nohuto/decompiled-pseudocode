/*
 * XREFs of ?deallocate@?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K@Z @ 0x18005D80C
 * Callers:
 *     _std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$7 @ 0x18005C062 (_std--vector_DISPLAYCONFIG_MODE_INFO_std--allocator_DISPLAYCONFIG_MODE_INFO___--_Resize_realloca.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<DISPLAYCONFIG_MODE_INFO>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, a3 << 6);
}
