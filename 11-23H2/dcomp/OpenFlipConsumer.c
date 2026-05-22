/*
 * XREFs of OpenFlipConsumer @ 0x1801AA0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Create@CFlipConsumer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z @ 0x1801AAC6C (-Create@CFlipConsumer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z.c)
 */

__int64 __fastcall OpenFlipConsumer(void *a1, struct Flip::CFlipConsumer **a2, void **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct Flip::CFlipConsumer *v8; // rcx
  struct Flip::CFlipConsumer *v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
  v6 = Flip::CFlipConsumer::Create(a1, &v10, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x5Cu);
  }
  else
  {
    v8 = v10;
    v10 = 0LL;
    *a2 = v8;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
  return v7;
}
