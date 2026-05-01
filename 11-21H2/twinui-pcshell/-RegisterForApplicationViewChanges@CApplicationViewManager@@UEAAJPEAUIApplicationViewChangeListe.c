/*
 * XREFs of ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180111940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180111B54 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180111C84 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18022A3F4 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationViewManager::RegisterForApplicationViewChanges(
        CApplicationViewManager *this,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  char *v6; // rdi
  __int64 *v7; // rsi
  LPUNKNOWN v8; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r14
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  struct IUnknown *v13; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  struct IUnknown *v17; // [rsp+20h] [rbp-20h] BYREF
  char *v18; // [rsp+28h] [rbp-18h] BYREF
  char *v19; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  LPUNKNOWN ppunkMarshal; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  v6 = (char *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v6;
  ppunkMarshal = (LPUNKNOWN)v6;
  if ( !v6 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
    v11 = -2147024882;
    goto LABEL_16;
  }
  *((_QWORD *)v6 + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v7 = (__int64 *)(v6 + 32);
  *((_QWORD *)v6 + 4) = 0LL;
  ppunkMarshal = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v8 = ppunkMarshal;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    v10 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))QueryInterface)(
      v8,
      &GUID_00000003_0000_0000_c000_000000000046,
      v6 + 32);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  *((_DWORD *)v6 + 11) = 1;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)v6 + 1) = &AgileApplicationViewChangeListenerConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)v6 + 22) = -2;
  *((_DWORD *)v6 + 23) = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
  *(_QWORD *)v6 = &AgileApplicationViewChangeListenerConverter::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)v6 + 1) = &AgileApplicationViewChangeListenerConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v6 + 12) = 0LL;
  *((_QWORD *)v6 + 13) = 0LL;
  v19 = v6;
  v18 = 0LL;
  v11 = AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(
          (AgileApplicationViewChangeListenerConverter *)v6,
          a2);
  if ( v11 < 0 )
  {
    Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v19);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
    goto LABEL_16;
  }
  v11 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IUnknown **))v6)(
          v6,
          &GUID_727f9e97_76ee_497b_a942_b6371328485c,
          &v17);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v11 < 0 )
  {
LABEL_16:
    v15 = (unsigned int)v11;
    v16 = 508LL;
    goto LABEL_18;
  }
  v12 = AgileRegistrationList::Register((CApplicationViewManager *)((char *)this + 96), v17, a3);
  v11 = v12;
  if ( v12 >= 0 )
    goto LABEL_11;
  v15 = (unsigned int)v12;
  v16 = 510LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)v15);
LABEL_11:
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
  }
  return (unsigned int)v11;
}
