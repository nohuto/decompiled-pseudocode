/*
 * XREFs of ??1?$ComPtr@VCVADServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18011C604
 * Callers:
 *     ??$MakeAndInitialize@VCVADServer@@V1@PEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVCVADServer@@$$QEAPEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Z @ 0x18003DAC0 (--$MakeAndInitialize@VCVADServer@@V1@PEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVADServer_CVADServer_IAudioProcess___unsigned_short_const___&_enum__AUDCLNT_SHAREMODE_&_unsigned_long_&_tWAVEFORMATEX_const___&__GUID_const___&_VadServerSettings___&_unsigned_short_____&_IProcessSubmixProxy___&__::_1_::dtor$2 @ 0x18007C084 (_Microsoft--WRL--Details--MakeAndInitialize_CVADServer_CVADServer_IAudioProcess___u_ea_18007C084.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012B00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVADServer>::~ComPtr<CVADServer>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(result);
  }
  return result;
}
