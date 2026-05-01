/*
 * XREFs of ??0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1803A5388
 * Callers:
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x180394754 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPresentationRequestedArgs@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1803A5304 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPresentationRequested.c)
 *     ??4?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationView@@@Z @ 0x1803A5520 (--4-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationVi.c)
 *     ??4?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A5588 (--4-$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_ex.c)
 */

PresentationRequestedArgs *__fastcall PresentationRequestedArgs::PresentationRequestedArgs(
        PresentationRequestedArgs *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *a2,
        struct IApplicationView *a3)
{
  PresentationRequestedArgs *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>(this);
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)this = &PresentationRequestedArgs::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &PresentationRequestedArgs::`vftable'{for `IPresentationRequestedArgs'};
  *((_QWORD *)this + 3) = &PresentationRequestedArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_BYTE *)this + 92) = 0;
  wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::operator=((char *)this + 80, a3);
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::operator=(
    (char *)this + 72,
    a2);
  result = this;
  *((_BYTE *)this + 92) = 0;
  return result;
}
