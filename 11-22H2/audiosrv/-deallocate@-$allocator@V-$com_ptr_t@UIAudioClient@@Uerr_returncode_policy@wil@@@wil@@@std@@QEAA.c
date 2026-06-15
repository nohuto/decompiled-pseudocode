/*
 * XREFs of ?deallocate@?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180073F90
 * Callers:
 *     _std::vector_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy__const_&__::_1_::catch$0 @ 0x1800739BE (_std--vector_wil--com_ptr_t_IAudioClient_wil--err_returncode_policy__std--allocator_wil--com_ptr.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, 8 * a3);
}
