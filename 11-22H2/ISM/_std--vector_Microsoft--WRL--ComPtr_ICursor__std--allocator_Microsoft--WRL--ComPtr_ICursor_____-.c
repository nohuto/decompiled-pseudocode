/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_ICursor__std::allocator_Microsoft::WRL::ComPtr_ICursor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ICursor____::_1_::catch$0 @ 0x1801C4F09
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18010C644 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_ICursor__std::allocator_Microsoft::WRL::ComPtr_ICursor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ICursor____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(*(__int64 **)(a2 + 112), *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
