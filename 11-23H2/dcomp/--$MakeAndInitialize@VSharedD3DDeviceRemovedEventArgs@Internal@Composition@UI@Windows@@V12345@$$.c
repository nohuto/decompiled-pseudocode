/*
 * XREFs of ??$MakeAndInitialize@VSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Z @ 0x1800A449C
 * Callers:
 *     ?DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1800A5CF4 (-DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV-$.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs,Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = DefaultHeap::Alloc(0x48uLL);
  v8 = v3;
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 1;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>::`vftable'{for `IInspectable'};
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>'};
    v4[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>::`vftable'{for `IWeakReferenceSource'};
    v4[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>'};
    v4[8] = 1LL;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = 0LL;
    *v4 = &Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs::`vftable'{for `IInspectable'};
    *v5 = &Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>'};
    v4[5] = &Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs::`vftable'{for `IWeakReferenceSource'};
    v4[6] = &Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>'};
    ((void (__fastcall *)(_QWORD *))Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::AddRef)(v4);
    *a1 = v4;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v8);
  return v1;
}
