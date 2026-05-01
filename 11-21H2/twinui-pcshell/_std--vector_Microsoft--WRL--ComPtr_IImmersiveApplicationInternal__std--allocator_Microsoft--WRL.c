/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal__std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal____::_1_::catch$0 @ 0x1802DE811
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@0@@Z @ 0x1802DE558 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal__std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
