/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18002D900
 * Callers:
 *     ?add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x1800115CC (-add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU-$ITypedEventHandler@PEAUIInspe.c)
 *     ?add_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18002D810 (-add_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJPEAU-$ITypedEventHandler@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>>(
        __int64 a1,
        IUnknown **a2)
{
  int AgileReference; // ebx
  IUnknown *v4; // rbx
  struct IUnknownVtbl *v5; // rdi
  HANDLE ProcessHeap; // rax
  IUnknown *v7; // rsi
  LPUNKNOWN v8; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v11; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v12; // rcx
  struct IUnknownVtbl *v13; // rcx
  struct IUnknownVtbl *v15; // [rsp+60h] [rbp+8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  if ( a1 )
  {
    AgileReference = RoGetAgileReference(0LL, &GUID_9df03456_3383_508b_9c75_ee840a7e1a39, a1, &v15);
    if ( AgileReference < 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
      return (unsigned int)AgileReference;
    }
  }
  else
  {
    v18 = 0LL;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
  }
  v4 = 0LL;
  v5 = v15;
  v15 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (IUnknown *)HeapAlloc(ProcessHeap, 0, 0x48uLL);
  if ( v7 )
  {
    v7->lpVtbl = (struct IUnknownVtbl *)&Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>::`vftable';
    ppunkMarshal = 0LL;
    v7[1].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::FtmBase::`vftable';
    v7[4].lpVtbl = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v8 = ppunkMarshal;
      lpVtbl = v7[4].lpVtbl;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      if ( lpVtbl )
      {
        v7[4].lpVtbl = 0LL;
        (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, IUnknown *))QueryInterface)(
        v8,
        &GUID_00000003_0000_0000_c000_000000000046,
        &v7[4]);
    }
    v11 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    v12 = Microsoft::WRL::Details::ModuleBase::module_;
    v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>'};
    v7[1].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    HIDWORD(v7[7].lpVtbl) = 1;
    if ( v12 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v12 + 8LL))(v12);
    v7[8].lpVtbl = 0LL;
    if ( &v7[8] != (IUnknown *)&ppunkMarshal )
    {
      v7[8].lpVtbl = v5;
      v5 = 0LL;
    }
    v4 = v7;
    v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<IInspectable *,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionBatchCompletedEventArgs *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *>>::*)(IInspectable *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_644c307dd9b9cb2023e3dcd56f2b9d4c_,-1,IInspectable *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *>::`vftable'{for `Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>'};
    v7[1].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  }
  ppunkMarshal = v4;
  if ( v5 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v5->QueryInterface + 2))(v5);
  if ( v4 )
  {
    v13 = v15;
    *a2 = v4;
    if ( v13 )
    {
      v15 = 0LL;
      (*((void (__fastcall **)(struct IUnknownVtbl *))v13->QueryInterface + 2))(v13);
    }
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&ppunkMarshal);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
    return 2147942414LL;
  }
}
