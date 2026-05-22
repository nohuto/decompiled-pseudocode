/*
 * XREFs of ?DequeueMessageFromConsumer@CFlipProducer@Flip@@UEAAJPEAPEAUIFlipMessageFromConsumer@@@Z @ 0x1801AA620
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Create@CFlipConsumerMessage@Flip@@SAJPEAVCFlipProducer@2@PEAPEAV12@@Z @ 0x1801AC828 (-Create@CFlipConsumerMessage@Flip@@SAJPEAVCFlipProducer@2@PEAPEAV12@@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::DequeueMessageFromConsumer(
        Flip::CFlipProducer *this,
        struct IFlipMessageFromConsumer **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct Flip::CFlipConsumerMessage *v6; // rcx
  struct Flip::CFlipConsumerMessage *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v8);
  v4 = Flip::CFlipConsumerMessage::Create(this, &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    DoStackCaptureDirect(v4, 0x10Eu);
  }
  else
  {
    v6 = v8;
    v8 = 0LL;
    *a2 = v6;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v8);
  return v5;
}
