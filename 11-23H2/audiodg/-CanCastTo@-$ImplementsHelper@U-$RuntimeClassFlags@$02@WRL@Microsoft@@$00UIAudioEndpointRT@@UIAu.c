/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140079784
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIAudioEndpoint@@UIWeakReferenceSource@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1400797F4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIAudio.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140017FD8 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( InlineIsEqualGUID(a2, &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_ed9309d0_76d3_430a_a5b4_6ee21020fca5) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
