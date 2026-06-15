/*
 * XREFs of ??$com_query_to@UIAudioDeviceEndpoint2@@AEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@wil@@@wil@@YAXAEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@0@PEAPEAUIAudioDeviceEndpoint2@@@Z @ 0x140056E04
 * Callers:
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140057740 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400584C4 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::com_query_to<IAudioDeviceEndpoint2,wil::com_ptr_t<IAudioDeviceEndpoint,wil::err_exception_policy> &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(
             *a1,
             &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
             a2);
  if ( (int)result < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x4F5,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)result,
      v3);
  return result;
}
