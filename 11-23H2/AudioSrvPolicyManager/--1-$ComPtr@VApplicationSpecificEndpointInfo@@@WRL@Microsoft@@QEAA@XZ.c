/*
 * XREFs of ??1?$ComPtr@VApplicationSpecificEndpointInfo@@@WRL@Microsoft@@QEAA@XZ @ 0x18001BC90
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSessionInfo_IAudioProcess___&_unsigned_short_const___&_bool_bool_enum__AudioSessionState__::_1_::dtor$1 @ 0x180048897 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSes_ea_180048897.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAastPreStartContext_IAudioStreamPreStartContext_IAudioStreamInfo___&__::_1_::dtor$1 @ 0x180048EBB (_Microsoft--WRL--Details--MakeAndInitialize_CAastPreStartContext_IAudioStreamPreStartContext_IAu.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<ApplicationSpecificEndpointInfo>::~ComPtr<ApplicationSpecificEndpointInfo>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
