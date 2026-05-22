/*
 * XREFs of ?BindD3DDevice@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@@Z @ 0x1801AA320
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CSynchronizationContext@Flip@@SAJPEAUIUnknown@@PEAPEAV12@@Z @ 0x1801AC238 (-Create@CSynchronizationContext@Flip@@SAJPEAUIUnknown@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::BindD3DDevice(Flip::CFlipProducer *this, struct IUnknown *a2)
{
  void *v2; // rax
  int v3; // edi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  unsigned int v7; // edx
  __int64 *v8; // rbx
  __int64 *v9; // rbx
  struct CSynchronizationContext *v11; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  void *lpMem; // [rsp+70h] [rbp+30h]

  v2 = 0LL;
  v3 = 0;
  lpMem = 0LL;
  if ( a2 )
  {
    v13 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v13);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
           a2,
           &GUID_db6f6ddb_ac77_4e88_8253_819df9bbf140,
           &v13) < 0 )
    {
      v3 = -2147024809;
      v7 = 121;
LABEL_4:
      DoStackCaptureDirect(v3, v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v13);
      v8 = (__int64 *)lpMem;
      goto LABEL_11;
    }
    v11 = 0LL;
    v12 = 1;
    v3 = Flip::CSynchronizationContext::Create(a2, &v11);
    if ( v12 )
    {
      v9 = (__int64 *)lpMem;
      lpMem = v11;
      if ( v9 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v9 + 1);
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v9);
        operator delete(v9);
      }
    }
    if ( v3 < 0 )
    {
      v7 = 127;
      goto LABEL_4;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v13);
    v2 = lpMem;
  }
  v8 = (__int64 *)*((_QWORD *)this + 11);
  lpMem = v8;
  *((_QWORD *)this + 11) = v2;
LABEL_11:
  if ( v8 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v8 + 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v8);
    operator delete(v8);
  }
  return (unsigned int)v3;
}
