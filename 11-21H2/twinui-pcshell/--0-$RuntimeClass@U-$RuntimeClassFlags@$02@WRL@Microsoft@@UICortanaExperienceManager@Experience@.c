/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@WRL@Microsoft@@QEAA@XZ @ 0x180357440
 * Callers:
 *     ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x180357560 (--0CortanaSharedExperienceManager@@QEAA@XZ.c)
 *     ??0SearchAppExperienceManager@@QEAA@XZ @ 0x18038973C (--0SearchAppExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>(
        _QWORD *a1)
{
  a1[5] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaExperienceManager'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::`vftable'{for `Windows::Foundation::IClosable'};
  a1[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInitializeTrustedComponentForegroundControl>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
