/*
 * XREFs of ??4?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180059AEC
 * Callers:
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x180059A48 (-RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ??0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802EC70C (--0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@In.c)
 *     ??0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@I@Z @ 0x1802EC7AC (--0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInt_ea_1802EC7AC.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@W4ViewSizePreference@896@3USize@Foundation@6@W4ViewGrouping@896@PEAUIAsyncCallback@@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x1803E63F8 (-RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?StashWindowingEnvironmentSettings@WindowWrapperBase@@UEAAXPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18040C7A0 (-StashWindowingEnvironmentSettings@WindowWrapperBase@@UEAAXPEAUIWindowingEnvironmentSettings@Vie.c)
 *     ?StashWindowingEnvironmentSettings@UwpWindowWrapperBase@@UEAAXPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180418440 (-StashWindowingEnvironmentSettings@UwpWindowWrapperBase@@UEAAXPEAUIWindowingEnvironmentSettings@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
