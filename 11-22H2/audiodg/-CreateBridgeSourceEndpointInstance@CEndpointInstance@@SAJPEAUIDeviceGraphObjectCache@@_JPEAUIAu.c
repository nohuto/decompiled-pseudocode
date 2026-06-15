/*
 * XREFs of ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x140060998
 * Callers:
 *     ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14005D7B4 (-CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     ?CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005DCA0 (-CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDe.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14001A82C (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Z @ 0x140078E6C (--$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointInstance::CreateBridgeSourceEndpointInstance(
        struct IDeviceGraphObjectCache *a1,
        __int64 a2,
        struct IAudioMediaType *a3,
        int a4,
        struct IUnknown *a5)
{
  struct IUnknown *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  CEndpointInstance *v9; // rax
  CEndpointInstance *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IAudioMediaType *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF
  struct IDeviceGraphObjectCache *v15; // [rsp+60h] [rbp+30h] BYREF
  int v16; // [rsp+68h] [rbp+38h] BYREF

  v5 = a5;
  a5->lpVtbl = 0LL;
  v16 = a4;
  v13 = a3;
  v14 = a2;
  v15 = a1;
  a5 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeSourceEndpoint,IAudioEndpointRT,IDeviceGraphObjectCache * &,__int64 &,IAudioMediaType * &,unsigned int &>(
         (unsigned int)&a5,
         (unsigned int)&v15,
         (unsigned int)&v14,
         (unsigned int)&v13,
         (__int64)&v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
      (const char *)(unsigned int)v6);
    v8 = 635LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v7);
    goto LABEL_9;
  }
  v9 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (struct IAudioMediaType *)v9;
  if ( !v9 )
  {
    v5->lpVtbl = 0LL;
    goto LABEL_7;
  }
  v10 = CEndpointInstance::CEndpointInstance(v9, a5, 0LL, 0LL);
  v5->lpVtbl = (struct IUnknownVtbl *)v10;
  if ( !v10 )
  {
LABEL_7:
    v7 = -2147024882;
    v8 = 639LL;
    goto LABEL_8;
  }
  v7 = 0;
LABEL_9:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&a5);
  return v7;
}
