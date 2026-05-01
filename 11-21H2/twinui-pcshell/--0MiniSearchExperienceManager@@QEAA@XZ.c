/*
 * XREFs of ??0MiniSearchExperienceManager@@QEAA@XZ @ 0x180101578
 * Callers:
 *     ??$MakeAndInitialize@VMiniSearchExperienceManager@@VIMiniSearch@@AEAPEAUIServiceProvider@@$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVIMiniSearch@@AEAPEAUIServiceProvider@@$$QEA$$T2@Z @ 0x18005DB54 (--$MakeAndInitialize@VMiniSearchExperienceManager@@VIMiniSearch@@AEAPEAUIServiceProvider@@$$T$$T.c)
 * Callees:
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
MiniSearchExperienceManager *__fastcall MiniSearchExperienceManager::MiniSearchExperienceManager(
        MiniSearchExperienceManager *this)
{
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMiniSearch>::`vftable'{for `IMiniSearch'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMiniSearch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MiniSearchExperienceManager::`vftable'{for `IMiniSearch'};
  *((_QWORD *)this + 1) = &MiniSearchExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = SHTaskPoolGetUniqueContext();
  *((_QWORD *)this + 14) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = GetCurrentThreadId();
  *((_WORD *)this + 74) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 160) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 224) = 0;
  winrt::impl::resume_apartment_context::resume_apartment_context((MiniSearchExperienceManager *)((char *)this + 232));
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  return this;
}
