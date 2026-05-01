/*
 * XREFs of ??0AllUpViewUriHandler@@QEAA@XZ @ 0x18054972C
 * Callers:
 *     ??$MakeAndInitialize@VAllUpViewUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18054969C (--$MakeAndInitialize@VAllUpViewUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ED51C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$CloakedIid@UIConfigureWindow.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

AllUpViewUriHandler *__fastcall AllUpViewUriHandler::AllUpViewUriHandler(AllUpViewUriHandler *this)
{
  _QWORD *v2; // rdi

  *(_QWORD *)this = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *((_QWORD *)this + 2) = 0LL;
  v2 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>((__int64)this + 24);
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IExecuteCommand,IObjectWithSelection>::`vftable';
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IExecuteCommand,IObjectWithSelection>::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IExecuteCommand,IObjectWithSelection>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSelection>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &AllUpViewUriHandler::`vftable';
  *v2 = &AllUpViewUriHandler::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 4) = &AllUpViewUriHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSelection>'};
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
