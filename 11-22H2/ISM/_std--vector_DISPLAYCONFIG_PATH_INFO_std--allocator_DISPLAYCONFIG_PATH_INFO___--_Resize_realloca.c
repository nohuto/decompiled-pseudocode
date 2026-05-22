/*
 * XREFs of _std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$7 @ 0x18006DDD2
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_PATH_INFO@@_K@Z @ 0x18006F494 (-deallocate@-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_PATH_INFO@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  std::allocator<DISPLAYCONFIG_PATH_INFO>::deallocate(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  throw;
}
