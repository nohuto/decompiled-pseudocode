/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x180011B70
 * Callers:
 *     ??0CSharedStreamGroupProxy@@QEAA@XZ @ 0x1800123A0 (--0CSharedStreamGroupProxy@@QEAA@XZ.c)
 *     ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x1801043F0 (--0CExclusiveStreamGroupProxy@@QEAA@XZ.c)
 * Callees:
 *     ??0CBaseStreamGroupProxy@@QEAA@XZ @ 0x180010DAC (--0CBaseStreamGroupProxy@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>(
        _QWORD *a1)
{
  CBaseStreamGroupProxy::CBaseStreamGroupProxy((CBaseStreamGroupProxy *)(a1 + 1));
  a1[43] = 1LL;
  *a1 = &CSharedStreamGroupProxy::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IStreamGroupProxy'};
  a1[2] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  a1[40] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  a1[41] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
