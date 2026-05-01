/*
 * XREFs of ??0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z @ 0x18011318C
 * Callers:
 *     ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x180110B68 (-CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtual.c)
 *     ??0CVirtualDesktop@@QEAA@XZ @ 0x18011310C (--0CVirtualDesktop@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CVirtualDesktop *__fastcall CVirtualDesktop::CVirtualDesktop(CVirtualDesktop *this, const struct _GUID *a2)
{
  _QWORD *v4; // rdi

  v4 = (_QWORD *)((char *)this + 32);
  Microsoft::WRL::FtmBase::FtmBase((CVirtualDesktop *)((char *)this + 32));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktop,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktop,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `IVirtualDesktop'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktop,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktop,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `IVirtualDesktopPrivate'};
  *v4 = &CVirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVirtualDesktop::`vftable';
  *((_QWORD *)this + 1) = &CVirtualDesktop::`vftable'{for `IVirtualDesktop'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktop,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &CVirtualDesktop::`vftable'{for `IVirtualDesktopPrivate'};
  *v4 = &CVirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((struct _GUID *)this + 6) = *a2;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return this;
}
