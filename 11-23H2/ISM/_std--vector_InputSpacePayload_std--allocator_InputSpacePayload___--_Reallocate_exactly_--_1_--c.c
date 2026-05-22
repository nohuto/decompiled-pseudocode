/*
 * XREFs of _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Reallocate_exactly_::_1_::catch$0 @ 0x1801A41DB
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Reallocate_exactly_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), 40LL * *(_QWORD *)(a2 + 72));
  throw;
}
