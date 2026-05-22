/*
 * XREFs of ?Create@CSynchronizationContext@Flip@@SAJPEAUIUnknown@@PEAPEAV12@@Z @ 0x1801AC238
 * Callers:
 *     ?BindD3DDevice@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@@Z @ 0x1801AA320 (-BindD3DDevice@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?EnsureSynchronizationContext@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@@Z @ 0x1801AAFDC (-EnsureSynchronizationContext@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?Initialize@CSynchronizationContext@Flip@@IEAAJPEAUIUnknown@@@Z @ 0x1801AC2CC (-Initialize@CSynchronizationContext@Flip@@IEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Flip::CSynchronizationContext::Create(struct IUnknown *a1, struct CSynchronizationContext **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (__int64 *)DefaultHeap::AllocClear(0x10uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v4 = 0LL;
  v4[1] = 0LL;
  v6 = Flip::CSynchronizationContext::Initialize((Flip::CSynchronizationContext *)v4, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x13u);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v5 + 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v5);
    operator delete(v5);
  }
  else
  {
    *a2 = (struct CSynchronizationContext *)v5;
  }
  return v7;
}
