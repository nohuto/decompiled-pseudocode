/*
 * XREFs of ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18014DAE8
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801463A8 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180146A08 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180146F24 (-DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ValidateAPOInputFormat(struct IAudioMediaType *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  double v4; // xmm1_8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a1->lpVtbl->GetAudioFormat)(a1);
  if ( !v1 )
  {
    v2 = 6993LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL);
    return 2290679816LL;
  }
  v4 = (double)*(int *)(v1 + 4);
  if ( v4 > 384000.0 )
  {
    v2 = 6996LL;
    goto LABEL_3;
  }
  if ( v4 < 10.0 )
  {
    v2 = 6997LL;
    goto LABEL_3;
  }
  if ( *(_WORD *)(v1 + 2) > 0x1000u )
  {
    v2 = 6998LL;
    goto LABEL_3;
  }
  if ( !*(_WORD *)(v1 + 2) )
  {
    v2 = 6999LL;
    goto LABEL_3;
  }
  return 0LL;
}
