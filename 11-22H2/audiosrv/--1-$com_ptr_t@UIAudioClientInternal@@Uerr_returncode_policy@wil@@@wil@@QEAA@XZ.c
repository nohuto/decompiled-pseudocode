/*
 * XREFs of ??1?$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180073A74
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180012FE0 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180039B90 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180073880 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 *     ?CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z @ 0x180073B44 (-CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z.c)
 *     _CVADServer::CreateBridgeSinkAudioClientForMicInjection_::_1_::dtor$0 @ 0x180073D47 (_CVADServer--CreateBridgeSinkAudioClientForMicInjection_--_1_--dtor$0.c)
 *     _CVADServer::CreateBridgeSinkAudioClientForMicInjection_::_1_::dtor$1 @ 0x180073D53 (_CVADServer--CreateBridgeSinkAudioClientForMicInjection_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
