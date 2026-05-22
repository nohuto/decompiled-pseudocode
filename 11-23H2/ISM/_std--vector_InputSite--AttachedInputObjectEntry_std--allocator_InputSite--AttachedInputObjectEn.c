/*
 * XREFs of _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch$5 @ 0x18006D910
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@QEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18013EC30 (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 */

void __fastcall __noreturn std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  std::_Deallocate<16,0>(*(void **)(a2 + 152), 16LL * *(_QWORD *)(a2 + 128));
  throw;
}
