/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180170D8C
 * Callers:
 *     ??0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z @ 0x18019B854 (--0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x18035667C (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnShown_--_2_--CCortanaSh.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>(
        _QWORD *a1)
{
  a1[3] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaShownEventArgs'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
