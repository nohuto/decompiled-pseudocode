/*
 * XREFs of ?CreateContent@CFlipProducer@Flip@@UEAAJIPEAUFlipPropertyItem@@PEAPEAUIFlipContent@@@Z @ 0x1801AA580
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Create@CFlipContent@Flip@@SAJPEAVCFlipProducer@2@_KIPEAUFlipPropertyItem@@PEAPEAV12@@Z @ 0x1801AC04C (-Create@CFlipContent@Flip@@SAJPEAVCFlipProducer@2@_KIPEAUFlipPropertyItem@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::CreateContent(
        Flip::CFlipProducer *this,
        unsigned int a2,
        struct FlipPropertyItem *a3,
        struct IFlipContent **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct Flip::CFlipContent *v10; // rcx
  struct Flip::CFlipContent *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v12);
  v8 = Flip::CFlipContent::Create(this, *((_QWORD *)this + 4), a2, a3, &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    DoStackCaptureDirect(v8, 0x62u);
  }
  else
  {
    ++*((_QWORD *)this + 4);
    v10 = v12;
    v12 = 0LL;
    *a4 = v10;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v12);
  return v9;
}
