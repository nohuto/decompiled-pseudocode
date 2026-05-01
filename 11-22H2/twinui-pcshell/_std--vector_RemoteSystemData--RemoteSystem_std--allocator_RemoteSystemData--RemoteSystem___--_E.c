/*
 * XREFs of _std::vector_RemoteSystemData::RemoteSystem_std::allocator_RemoteSystemData::RemoteSystem___::_Emplace_reallocate_RemoteSystemData::RemoteSystem_&__::_1_::catch$2 @ 0x18070A48A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x18070A098 (--$_Destroy_range@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@R.c)
 */

void __fastcall __noreturn std::vector_RemoteSystemData::RemoteSystem_std::allocator_RemoteSystemData::RemoteSystem___::_Emplace_reallocate_RemoteSystemData::RemoteSystem____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(
    *(volatile signed __int32 ***)(a2 + 112),
    *(volatile signed __int32 ***)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 32LL * *(_QWORD *)(a2 + 120));
  throw;
}
