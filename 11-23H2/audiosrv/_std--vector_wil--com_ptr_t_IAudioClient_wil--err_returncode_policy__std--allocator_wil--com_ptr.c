/*
 * XREFs of _std::vector_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy__const_&__::_1_::catch$0 @ 0x18007398E
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180073850 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180073F60 (-deallocate@-$allocator@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA.c)
 *     _CxxThrowException_0 @ 0x1800759A0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy__const____::_1_::catch_0(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>>(a2[14], a2[17]);
  std::allocator<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::deallocate(v3, a2[4], a2[15]);
  throw;
}
