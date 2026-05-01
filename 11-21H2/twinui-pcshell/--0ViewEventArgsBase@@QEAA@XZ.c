/*
 * XREFs of ??0ViewEventArgsBase@@QEAA@XZ @ 0x18009C86C
 * Callers:
 *     ??0ViewEventArgsForSelectTargetView@@QEAA@XZ @ 0x180029D5C (--0ViewEventArgsForSelectTargetView@@QEAA@XZ.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x180059B78 (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x18009C7C4 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ??0ViewEventArgs@@QEAA@XZ @ 0x1803DE5E0 (--0ViewEventArgs@@QEAA@XZ.c)
 *     ??0ViewEventArgsForShowAsViewMode@@QEAA@XZ @ 0x1803DE728 (--0ViewEventArgsForShowAsViewMode@@QEAA@XZ.c)
 *     ??0ViewEventArgsForSwitch@@QEAA@XZ @ 0x1803DE818 (--0ViewEventArgsForSwitch@@QEAA@XZ.c)
 *     ??0ViewEventArgsForWindowingSettings@@QEAA@V?$map@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@UWindowingEnvironmentId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x1803DE8CC (--0ViewEventArgsForWindowingSettings@@QEAA@V-$map@V-$com_ptr_t@UIViewWrapper@ViewManagerInterop@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ViewEventArgsBase *__fastcall ViewEventArgsBase::ViewEventArgsBase(ViewEventArgsBase *this)
{
  Microsoft::WRL::FtmBase::FtmBase((ViewEventArgsBase *)((char *)this + 8));
  *(_QWORD *)this = &ViewEventArgsBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
