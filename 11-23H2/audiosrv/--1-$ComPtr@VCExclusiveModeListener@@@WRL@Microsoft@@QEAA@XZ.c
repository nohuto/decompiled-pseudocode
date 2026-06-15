/*
 * XREFs of ??1?$ComPtr@VCExclusiveModeListener@@@WRL@Microsoft@@QEAA@XZ @ 0x1801335C8
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x180133018 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__::_1_::dtor$2 @ 0x1801330E3 (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveModeListener_CExclusiveModeLi_ea_1801330E3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@UIMixedRealitySpatialAudioFormatPolicyChange@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180135F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMM_ea_180135F80.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CExclusiveModeListener>::~ComPtr<CExclusiveModeListener>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
