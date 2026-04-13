/*
 * XREFs of ??$MakeAndInitialize@VAppManager@ContentManagement@@UIAppManager@2@AEAPEAUIUser@System@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIAppManager@ContentManagement@@@WRL@Microsoft@@@012@AEAPEAUIUser@System@Windows@@@Z @ 0x180085024
 * Callers:
 *     ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x180048F10 (-get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppManager,ContentManagement::IAppManager,Windows::System::IUser * &>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  RTL_SRWLOCK *v5; // rax
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // ebx
  RTL_SRWLOCK *v8; // rsi
  void *v9; // rsi
  PVOID Ptr; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = 0LL;
  v5 = (RTL_SRWLOCK *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v8 = v5 + 1;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v5[1]);
    v6[8].Ptr = (PVOID)1;
    v6->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `IInspectable'};
    v8->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppManager>'};
    v6[5].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `IWeakReferenceSource'};
    v6[6].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppManager>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6->Ptr = &ContentManagement::AppManager::`vftable'{for `IInspectable'};
    v8->Ptr = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppManager>'};
    v6[5].Ptr = &ContentManagement::AppManager::`vftable'{for `IWeakReferenceSource'};
    v6[6].Ptr = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppManager>'};
    v6[9].Ptr = 0LL;
    v6[10].Ptr = 0LL;
    InitializeSRWLock(v6 + 11);
    v9 = (void *)*a2;
    Ptr = v6[10].Ptr;
    if ( Ptr != (PVOID)*a2 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*a2);
        Ptr = v6[10].Ptr;
      }
      v6[10].Ptr = v9;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    v7 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, __int64 *))v6->Ptr)(
           v6,
           &GUID_8c1d35c6_1c6c_4e16_9799_12b4f4b195b2,
           a1);
    (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 2))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
