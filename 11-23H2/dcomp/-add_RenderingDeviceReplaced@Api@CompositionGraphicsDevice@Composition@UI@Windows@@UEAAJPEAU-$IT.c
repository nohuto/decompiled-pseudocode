/*
 * XREFs of ?add_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800B7940
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800B775C (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180115B9C (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::Api::add_RenderingDeviceReplaced(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v7; // esi
  int v8; // edi
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 112);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(a1 - 104) & 2) != 0 )
  {
    if ( a2 )
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
      v8 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>>(
             a2,
             &v10);
      if ( v8 >= 0 )
      {
        if ( v10 )
          v8 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
                 a1 + 96,
                 v10,
                 *(_QWORD *)(*(_QWORD *)a2 + 24LL),
                 a3);
        else
          v8 = -2147024809;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
      v7 = v8;
      if ( v8 >= 0 )
      {
        v7 = 0;
        goto LABEL_6;
      }
    }
    else
    {
      v8 = -2147024809;
      v7 = -2147024809;
    }
    DoStackCaptureDirect(v8, 0x30Fu);
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
