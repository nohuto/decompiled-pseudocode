/*
 * XREFs of _std::vector__GUID_std::allocator__GUID___::_Emplace_reallocate__GUID_const_&__::_1_::catch$1 @ 0x140060894
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__GUID_std::allocator__GUID___::_Emplace_reallocate__GUID_const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 16LL * *(_QWORD *)(a2 + 80));
  throw;
}
