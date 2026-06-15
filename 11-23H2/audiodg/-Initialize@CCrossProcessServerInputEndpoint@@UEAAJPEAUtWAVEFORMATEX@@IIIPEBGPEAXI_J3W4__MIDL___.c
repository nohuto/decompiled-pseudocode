/*
 * XREFs of ?Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140025470
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400171E0 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___M.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x14002AC3C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 */

__int64 __fastcall CCrossProcessServerInputEndpoint::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 *a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14,
        _QWORD *a15)
{
  unsigned int v16; // esi
  __int64 v18; // [rsp+50h] [rbp-38h]

  LODWORD(v18) = a11;
  v16 = CCrossProcessBaseServerEndpoint::Initialize(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v18, a12, a13, a14, a15);
  *(_BYTE *)(a1 + 140) = a11 & 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl) )
    *(_BYTE *)(a1 + 141) = (a11 & 2) != 0;
  return v16;
}
