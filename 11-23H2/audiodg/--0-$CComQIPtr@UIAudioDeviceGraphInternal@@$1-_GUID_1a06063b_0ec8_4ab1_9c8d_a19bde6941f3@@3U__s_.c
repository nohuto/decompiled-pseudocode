/*
 * XREFs of ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140020CFC
 * Callers:
 *     ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400209D0 (-GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?RemovePipeFromMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140020A90 (-RemovePipeFromMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140020B60 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140020C20 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140058780 (-AddPipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140058860 (-AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x1400592A0 (-GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140059AC0 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipeFromLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140059B90 (-RemovePipeFromLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3, a1);
  return a1;
}
