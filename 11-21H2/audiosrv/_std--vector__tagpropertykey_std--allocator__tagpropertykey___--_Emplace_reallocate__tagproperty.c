/*
 * XREFs of _std::vector__tagpropertykey_std::allocator__tagpropertykey___::_Emplace_reallocate__tagpropertykey_const_&__::_1_::catch$0 @ 0x18014E36C
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__tagpropertykey_std::allocator__tagpropertykey___::_Emplace_reallocate__tagpropertykey_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 20LL * *(_QWORD *)(a2 + 80));
  throw;
}
