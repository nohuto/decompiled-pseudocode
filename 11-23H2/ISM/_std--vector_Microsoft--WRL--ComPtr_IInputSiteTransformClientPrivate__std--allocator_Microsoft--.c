/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IInputSiteTransformClientPrivate__std::allocator_Microsoft::WRL::ComPtr_IInputSiteTransformClientPrivate_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IInputSiteTransformClientPrivate__const_&__::_1_::catch$1 @ 0x18013ED97
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x1800B3D4C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IInputSiteTransformClientPrivate__std::allocator_Microsoft::WRL::ComPtr_IInputSiteTransformClientPrivate_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IInputSiteTransformClientPrivate__const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
