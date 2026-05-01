/*
 * XREFs of _std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch$0 @ 0x18004D87B
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z @ 0x18001B160 (-deallocate@-$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004C640 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<_GUID>::deallocate(a1, *(void **)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
