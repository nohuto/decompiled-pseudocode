/*
 * XREFs of ?Create@CFlipConsumerMessage@Flip@@SAJPEAVCFlipProducer@2@PEAPEAV12@@Z @ 0x1801AC828
 * Callers:
 *     ?DequeueMessageFromConsumer@CFlipProducer@Flip@@UEAAJPEAPEAUIFlipMessageFromConsumer@@@Z @ 0x1801AA620 (-DequeueMessageFromConsumer@CFlipProducer@Flip@@UEAAJPEAPEAUIFlipMessageFromConsumer@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?Initialize@CFlipConsumerMessage@Flip@@AEAAJPEAVCFlipProducer@2@@Z @ 0x1801AC948 (-Initialize@CFlipConsumerMessage@Flip@@AEAAJPEAVCFlipProducer@2@@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumerMessage::Create(
        struct Flip::CFlipProducer *a1,
        struct Flip::CFlipConsumerMessage **a2)
{
  Flip::CFlipConsumerMessage *v4; // rax
  Flip::CFlipConsumerMessage *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  const void *retaddr; // [rsp+28h] [rbp+0h]
  Flip::CFlipConsumerMessage *v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = (Flip::CFlipConsumerMessage *)DefaultHeap::AllocClear(0x48uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v4 + 2) = 0;
  *(_QWORD *)v4 = &Flip::CFlipConsumerMessage::`vftable';
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  *((_DWORD *)v4 + 9) = 0;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 16) = 0;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 6) = &Flip::CFlipPropertySet::`vftable';
  v6 = *(_QWORD *)v4;
  v11 = v5;
  (*(void (__fastcall **)(Flip::CFlipConsumerMessage *))(v6 + 8))(v5);
  v7 = Flip::CFlipConsumerMessage::Initialize(v5, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x16u);
  }
  else
  {
    v11 = 0LL;
    *a2 = v5;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v11);
  return v8;
}
