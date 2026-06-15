/*
 * XREFs of ??$try_copy@UIApoAuxiliaryInputConfiguration@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18004B180
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N_N66W4_BridgeStreamProperties@@6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x18006F1BC (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAuxiliaryInputConfiguration>(
        void (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a1;
  *a2 = 0LL;
  if ( v3 )
    (**v3)(v3, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, a2);
  return a2;
}
