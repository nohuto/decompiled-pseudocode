/*
 * XREFs of ?GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z @ 0x18014CCD8
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::GetMMDevice(CEndpointCharacteristics *this, struct IMMDevice **a2)
{
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>((__int64 *)this + 5, a2);
}
