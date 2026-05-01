/*
 * XREFs of ??0CPrivilegedForegroundOperations@@QEAA@XZ @ 0x1800B2328
 * Callers:
 *     ??$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedForegroundOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x1800B1AF4 (--$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperat.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

CPrivilegedForegroundOperations *__fastcall CPrivilegedForegroundOperations::CPrivilegedForegroundOperations(
        CPrivilegedForegroundOperations *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((CPrivilegedForegroundOperations *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedForegroundOperations,Microsoft::WRL::FtmBase>::`vftable'{for `IPrivilegedForegroundOperations'};
  *v2 = &CPrivilegedForegroundOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &CPrivilegedForegroundOperations::`vftable'{for `IPrivilegedForegroundOperations'};
  *v2 = &CPrivilegedForegroundOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
