/*
 * XREFs of _std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$7 @ 0x18006DCC6
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K@Z @ 0x18006F47C (-deallocate@-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  std::allocator<DISPLAYCONFIG_MODE_INFO>::deallocate(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  throw;
}
