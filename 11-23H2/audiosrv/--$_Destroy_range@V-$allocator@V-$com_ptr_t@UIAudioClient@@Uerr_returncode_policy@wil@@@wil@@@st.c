/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180073850
 * Callers:
 *     _std::vector_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioClient_wil::err_returncode_policy__const_&__::_1_::catch$0 @ 0x18007398E (_std--vector_wil--com_ptr_t_IAudioClient_wil--err_returncode_policy__std--allocator_wil--com_ptr.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800739C8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 *     ??1?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180073AB4 (--1-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180073D70 (-_Change_array@-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180073A44 (--1-$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
