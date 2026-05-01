/*
 * XREFs of ??0?$EventInvocationContext@$00@details@wil@@QEAA@XZ @ 0x1804A9954
 * Callers:
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x1804A8100 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::EventInvocationContext<1>::EventInvocationContext<1>(__int64 a1)
{
  _QWORD *v2; // rdi

  *(_QWORD *)a1 = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  v2 = (_QWORD *)(a1 + 16);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<wil::details::IEventInvocationContext,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<wil::details::IEventInvocationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<wil::details::IEventInvocationContext,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &wil::details::EventInvocationContext<1>::`vftable';
  *(_QWORD *)(a1 + 8) = &wil::details::EventInvocationContext<1>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &wil::details::EventInvocationContext<1>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  return a1;
}
