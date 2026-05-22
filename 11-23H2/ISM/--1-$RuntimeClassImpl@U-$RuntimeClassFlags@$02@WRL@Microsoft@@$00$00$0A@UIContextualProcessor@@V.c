/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIContextualProcessor@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800BA8B8
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1800BA8AC (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@M.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BA974 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800BAAF0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@.c)
 *     ??1CursorSuppressionProcessor@@UEAA@XZ @ 0x1801581B0 (--1CursorSuppressionProcessor@@UEAA@XZ.c)
 *     ??1CursorProcessor@@UEAA@XZ @ 0x1801589E4 (--1CursorProcessor@@UEAA@XZ.c)
 *     ??_EActivationContext@@UEAAPEAXI@Z @ 0x1801B8480 (--_EActivationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IContextualProcessor,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IContextualProcessor,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a1 + 48));
}
