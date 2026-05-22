/*
 * XREFs of ?Create@CFlipContent@Flip@@SAJPEAVCFlipProducer@2@_KIPEAUFlipPropertyItem@@PEAPEAV12@@Z @ 0x1801AC04C
 * Callers:
 *     ?CreateContent@CFlipProducer@Flip@@UEAAJIPEAUFlipPropertyItem@@PEAPEAUIFlipContent@@@Z @ 0x1801AA580 (-CreateContent@CFlipProducer@Flip@@UEAAJIPEAUFlipPropertyItem@@PEAPEAUIFlipContent@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ??0CFlipContent@Flip@@AEAA@PEAVCFlipProducer@1@_K@Z @ 0x1801ABF2C (--0CFlipContent@Flip@@AEAA@PEAVCFlipProducer@1@_K@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipContent::Create(
        struct Flip::CFlipProducer *a1,
        __int64 a2,
        unsigned int a3,
        struct FlipPropertyItem *a4,
        struct Flip::CFlipContent **a5)
{
  Flip::CFlipContent *v9; // rax
  Flip::CFlipContent *v10; // rax
  struct Flip::CFlipContent *v11; // rdi
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+28h] [rbp-10h] BYREF
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v17 = 0LL;
  v9 = (Flip::CFlipContent *)DefaultHeap::AllocClear(0x28uLL);
  if ( !v9 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v10 = Flip::CFlipContent::CFlipContent(v9, a1, a2);
  v11 = v10;
  if ( !v10 )
  {
    v14 = -2147024882;
    v15 = 37;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(Flip::CFlipContent *))(*(_QWORD *)v10 + 8LL))(v10);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v18);
  v12 = NtFlipObjectAddContent(*(_QWORD *)(*((_QWORD *)v11 + 3) + 24LL), (char *)v11 + 16, a3, a4, v11);
  v13 = HRESULTFromNTSTATUS(v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    DoStackCaptureDirect(v13, 0x65u);
    v15 = 40;
LABEL_8:
    DoStackCaptureDirect(v14, v15);
    goto LABEL_9;
  }
  v17 = 0LL;
  *a5 = v11;
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v17);
  return v14;
}
