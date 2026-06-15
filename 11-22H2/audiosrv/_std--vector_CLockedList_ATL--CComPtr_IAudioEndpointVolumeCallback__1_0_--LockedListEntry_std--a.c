/*
 * XREFs of _std::vector_CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::LockedListEntry_std::allocator_CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_IAudioEndpointVolumeCallback__&_int__::_1_::catch$2 @ 0x18012A304
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800759D0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::LockedListEntry_std::allocator_CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_IAudioEndpointVolumeCallback____int__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a2 + 112); i != *(__int64 **)(a2 + 120); i += 2 )
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(i);
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 16LL * *(_QWORD *)(a2 + 32));
  throw;
}
