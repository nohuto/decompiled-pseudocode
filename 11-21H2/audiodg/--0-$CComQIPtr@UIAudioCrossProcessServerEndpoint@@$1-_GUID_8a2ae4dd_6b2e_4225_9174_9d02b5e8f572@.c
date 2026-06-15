/*
 * XREFs of ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000A530
 * Callers:
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14000A294 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x140024C6C (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572, a1);
  return a1;
}
