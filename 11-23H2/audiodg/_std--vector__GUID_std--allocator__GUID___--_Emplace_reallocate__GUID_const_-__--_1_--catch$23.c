/*
 * XREFs of _std::vector__GUID_std::allocator__GUID___::_Emplace_reallocate__GUID_const_&__::_1_::catch$23 @ 0x140064468
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__GUID_std::allocator__GUID___::_Emplace_reallocate__GUID_const____::_1_::catch_23(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 16LL * *(_QWORD *)(a2 + 80));
  throw;
}
