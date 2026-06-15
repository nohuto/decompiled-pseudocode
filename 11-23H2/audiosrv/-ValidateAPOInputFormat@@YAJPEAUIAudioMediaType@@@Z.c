/*
 * XREFs of ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180056C34
 * Callers:
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18005691C (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18005E0C4 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18014BA68 (-DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateAPOInputFormat(struct IAudioMediaType *a1)
{
  __int64 v1; // rax
  double v2; // xmm1_8
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a1->lpVtbl->GetAudioFormat)(a1);
  if ( v1 )
  {
    v2 = (double)*(int *)(v1 + 4);
    if ( v2 > 384000.0 )
    {
      v4 = 7434LL;
    }
    else if ( v2 < 10.0 )
    {
      v4 = 7435LL;
    }
    else if ( *(_WORD *)(v1 + 2) > 0x1000u )
    {
      v4 = 7436LL;
    }
    else
    {
      if ( *(_WORD *)(v1 + 2) )
        return 0LL;
      v4 = 7437LL;
    }
  }
  else
  {
    v4 = 7431LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x88890008LL);
  return 2290679816LL;
}
