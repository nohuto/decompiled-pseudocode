/*
 * XREFs of ?RaiseEvents@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@@Z @ 0x18016100C
 * Callers:
 *     ?OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ @ 0x180160F4C (-OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDispatcherQueueHandler@System@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801152A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeC_ea_1801152A0.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesEvent::RaiseEvents(
        Windows::UI::Composition::CompositionCapabilitiesEvent *this,
        struct Windows::System::IDispatcherQueue *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v4 = DefaultHeap::Alloc(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>>((__int64)v4);
    v5[8] = this;
    *v5 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::System::IDispatcherQueueHandler::*)(void)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>,_lambda_45408fcd3a1e321ae85b6197296025bf_ &,-1,>::`vftable'{for `Windows::System::IDispatcherQueueHandler'};
    v5[1] = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::System::IDispatcherQueueHandler::*)(void)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>,_lambda_45408fcd3a1e321ae85b6197296025bf_ &,-1,>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v6 = (*(__int64 (__fastcall **)(struct Windows::System::IDispatcherQueue *, _QWORD *, char *))(*(_QWORD *)a2 + 56LL))(
           a2,
           v5,
           &v9);
    v7 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x1A1u);
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    v7 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0x19Fu);
  }
  return v7;
}
