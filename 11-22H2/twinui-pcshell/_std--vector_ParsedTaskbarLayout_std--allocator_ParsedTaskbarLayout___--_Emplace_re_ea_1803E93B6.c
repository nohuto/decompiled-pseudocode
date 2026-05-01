/*
 * XREFs of _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::catch$2 @ 0x1803E93B6
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x1803E8DFC (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEA.c)
 */

void __fastcall __noreturn std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 136LL * *(_QWORD *)(a2 + 152));
  throw;
}
