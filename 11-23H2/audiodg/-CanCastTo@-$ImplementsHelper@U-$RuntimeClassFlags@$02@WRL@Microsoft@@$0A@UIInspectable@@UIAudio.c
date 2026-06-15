/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIAudioEndpoint@@UIWeakReferenceSource@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1400797F4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140079B60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_140079B60.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140017FD8 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140079784 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAudioEndpointRT@@UIAu.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,IAudioEndpoint,IWeakReferenceSource,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  const struct _GUID *v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_30a99515_1527_4451_af9f_00c5f0234daf)
      || InlineIsEqualGUID(v6, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
