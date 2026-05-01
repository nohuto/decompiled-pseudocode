/*
 * XREFs of ??4?$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18040C728
 * Callers:
 *     ?GetEndpointSessions@AppList@GamingAudio@@AEAAXV?$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z @ 0x18040CDE8 (-GetEndpointSessions@AppList@GamingAudio@@AEAAXV-$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z.c)
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18040D900 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x18056D030 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1805D2678 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IAudioSessionControl>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  return a1;
}
