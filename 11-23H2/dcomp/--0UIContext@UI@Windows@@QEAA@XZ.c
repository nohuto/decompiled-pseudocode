/*
 * XREFs of ??0UIContext@UI@Windows@@QEAA@XZ @ 0x180018B74
 * Callers:
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@$$QEAPEAVAppContentRoot@45@@Z @ 0x180018860 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@Y.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUICoreWindow@Core@45@@Z @ 0x180018AA8 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microso.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUIUIContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUIUIContentRoot@45@@Z @ 0x18011AD58 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUIUIContentRoot@23@@Details@WRL@Microsoft.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::UIContext *__fastcall Windows::UI::UIContext::UIContext(Windows::UI::UIContext *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  Windows::UI::UIContext *result; // rax

  v1 = (_QWORD *)((char *)this + 32);
  Microsoft::WRL::FtmBase::FtmBase((Windows::UI::UIContext *)((char *)this + 32));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::IUIContextInternal>'};
  *v1 = &Microsoft::WRL::RuntimeClass<Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &Windows::UI::UIContext::`vftable';
  *((_QWORD *)this + 1) = &Windows::UI::UIContext::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::UI::UIContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Windows::UI::UIContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::IUIContextInternal>'};
  *v1 = &Windows::UI::UIContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
