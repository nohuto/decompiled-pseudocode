/*
 * XREFs of _std::vector__PDH_RAW_COUNTER_ITEM_W_std::allocator__PDH_RAW_COUNTER_ITEM_W___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$3 @ 0x1803F6427
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__PDH_RAW_COUNTER_ITEM_W_std::allocator__PDH_RAW_COUNTER_ITEM_W___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 72), 48LL * *(_QWORD *)(a2 + 80));
  throw;
}
