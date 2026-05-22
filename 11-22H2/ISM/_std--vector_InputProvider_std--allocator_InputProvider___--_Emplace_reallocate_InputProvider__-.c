/*
 * XREFs of _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$5 @ 0x180081D95
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A9184 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV-$all.c)
 */

void __fastcall __noreturn std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<InputProvider>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 24LL * *(_QWORD *)(a2 + 120));
  throw;
}
