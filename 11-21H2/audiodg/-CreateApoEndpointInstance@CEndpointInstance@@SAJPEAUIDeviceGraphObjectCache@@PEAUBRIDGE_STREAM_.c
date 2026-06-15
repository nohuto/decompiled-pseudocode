/*
 * XREFs of ?CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14005C9BC
 * Callers:
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005939C (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x140004A80 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CreateApoEndpoint@@YAJPEAPEAUIAudioEndpointRT@@PEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004FB9C (-CreateApoEndpoint@@YAJPEAPEAUIAudioEndpointRT@@PEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointInstance::CreateApoEndpointInstance(
        struct IDeviceGraphObjectCache *a1,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IAudioProcessingObject *a3,
        struct IAudioMediaType *a4,
        int a5,
        struct IAudioEndpointRT *a6)
{
  struct IAudioEndpointRT *v6; // rdi
  int v7; // ebx
  CEndpointInstance *v8; // rax
  CEndpointInstance *v9; // rax

  v6 = a6;
  a6->lpVtbl = 0LL;
  a6 = 0LL;
  v7 = CreateApoEndpoint(&a6, a1, a2, a3, a4, a5, 0LL);
  if ( v7 < 0 )
    goto LABEL_6;
  v8 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 || (v9 = CEndpointInstance::CEndpointInstance(v8, (struct IUnknown *)a6, 0LL, 0LL)) == 0LL )
  {
    v7 = -2147024882;
LABEL_6:
    AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateApoEndpointInstance", 0x27Du, v7);
    goto LABEL_7;
  }
  v6->lpVtbl = (struct IAudioEndpointRTVtbl *)v9;
LABEL_7:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&a6);
  return (unsigned int)v7;
}
