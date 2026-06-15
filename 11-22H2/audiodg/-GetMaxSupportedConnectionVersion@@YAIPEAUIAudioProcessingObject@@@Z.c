/*
 * XREFs of ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x14000F540
 * Callers:
 *     ??0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAudioProcessingObjectNotifications@@PEAUIAPOProcessingHost@@@Z @ 0x14000FF64 (--0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudi.c)
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004F5DC (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIApoAcousticEchoCancellation@@$1?_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000F5E0 (--0-$CComQIPtr@UIApoAcousticEchoCancellation@@$1-_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U_.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000F628 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetMaxSupportedConnectionVersion(struct IAudioProcessingObject *a1)
{
  char v2; // al
  unsigned int v3; // ebx
  int v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  ATL::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>(
    &v7,
    a1);
  ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
    &v6,
    a1);
  v2 = 0;
  v5 = 0;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v5);
    v2 = v5;
  }
  if ( (v2 & 2) != 0 )
  {
    v3 = 0x7FFFFFFF;
  }
  else if ( v7 || (v3 = 1, (v2 & 1) != 0) )
  {
    v3 = 2;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v6);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v7);
  return v3;
}
