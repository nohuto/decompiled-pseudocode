/*
 * XREFs of _std::vector_tagCOMPOSITION_TARGET_ID_std::allocator_tagCOMPOSITION_TARGET_ID___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$7 @ 0x18007285C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@QEAAXQEAUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x180073C50 (-deallocate@-$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@QEAAXQEAUtagCOMPOSITION_TARGET_ID@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_tagCOMPOSITION_TARGET_ID_std::allocator_tagCOMPOSITION_TARGET_ID___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  std::allocator<tagCOMPOSITION_TARGET_ID>::deallocate(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  throw;
}
