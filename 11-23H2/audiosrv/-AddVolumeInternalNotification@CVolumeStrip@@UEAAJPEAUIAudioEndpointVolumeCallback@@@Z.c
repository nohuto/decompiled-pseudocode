/*
 * XREFs of ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x18012A760
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z @ 0x18012A4C8 (--0-$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x18012A65C (-AddInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$CCo.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeInternalNotification(
        struct _RTL_CRITICAL_SECTION *this,
        struct IAudioEndpointVolumeCallback *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComPtrBase<IAudioEndpointVolumeCallback>::CComPtrBase<IAudioEndpointVolumeCallback>(&v4, (__int64)a2);
  return CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::AddInterface(this + 2, &v4);
}
