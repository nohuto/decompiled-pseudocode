/*
 * XREFs of _std::vector_Microsoft::BamoImpl::RemoteCallBuffer___std::allocator_Microsoft::BamoImpl::RemoteCallBuffer_____::_Emplace_reallocate_Microsoft::BamoImpl::RemoteCallBuffer___const_&__::_1_::catch$0 @ 0x1800895E3
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::BamoImpl::RemoteCallBuffer___std::allocator_Microsoft::BamoImpl::RemoteCallBuffer_____::_Emplace_reallocate_Microsoft::BamoImpl::RemoteCallBuffer___const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 8LL * *(_QWORD *)(a2 + 80));
  throw;
}
