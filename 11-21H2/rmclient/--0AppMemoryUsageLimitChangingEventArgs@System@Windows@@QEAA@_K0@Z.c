/*
 * XREFs of ??0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z @ 0x1800030E4
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180002EB0 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004320 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::System::AppMemoryUsageLimitChangingEventArgs *__fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::AppMemoryUsageLimitChangingEventArgs(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx

  v3 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::System::AppMemoryUsageLimitChangingEventArgs *)((char *)this + 16));
  v7 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
  *((_QWORD *)this + 8) = a2;
  *(_QWORD *)this = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 9) = a3;
  *v3 = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
