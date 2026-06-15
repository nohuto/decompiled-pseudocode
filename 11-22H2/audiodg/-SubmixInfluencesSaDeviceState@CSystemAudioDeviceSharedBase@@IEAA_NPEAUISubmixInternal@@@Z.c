/*
 * XREFs of ?SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z @ 0x140008CDC
 * Callers:
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000A030 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000A150 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x14002AC80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CSystemAudioDeviceSharedBase::SubmixInfluencesSaDeviceState(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  char v4; // bl
  bool v5; // zf

  v4 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)this + 88) )
      return v4;
    v5 = (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 192LL))(a2) == 0;
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 128LL))(a2) )
      return 1;
    v5 = *((_DWORD *)this + 88) == 0;
  }
  if ( !v5 )
    return 1;
  return v4;
}
