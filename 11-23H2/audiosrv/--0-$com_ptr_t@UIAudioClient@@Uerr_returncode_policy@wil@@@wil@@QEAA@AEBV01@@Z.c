/*
 * XREFs of ??0?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180073A08
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180012FE0 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180039B90 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180073888 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 *     ?CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z @ 0x180073B14 (-CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>::com_ptr_t<IAudioClient,wil::err_returncode_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
