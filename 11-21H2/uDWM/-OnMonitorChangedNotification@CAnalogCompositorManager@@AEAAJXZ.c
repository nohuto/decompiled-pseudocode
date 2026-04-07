/*
 * XREFs of ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x18009D6A0
 * Callers:
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x18009CE90 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x18009D340 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18009D340.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800628A4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator() @ 0x18009C5AC (_lambda_5d2a0d57000e9a8e56f274d64107aadc_--operator().c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x18009D4E8 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x18009DD48 (-UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x18009E040 (-UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18009E190 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18009E230 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Win.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAnalogCompositorManager::OnMonitorChangedNotification(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r14
  int VirtualMonitorManager; // eax
  unsigned int v4; // ebx
  RTL_SRWLOCK *v5; // r15
  int v6; // eax
  unsigned int v7; // edi
  PVOID Ptr; // rdi
  __int64 (__fastcall *v9)(PVOID, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ebx
  int v14; // edi
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  UDwmTrace *v18; // rcx
  __int64 v19; // rcx
  UDwmTrace *v20; // rcx
  int v21; // eax
  int pdwType; // [rsp+20h] [rbp-59h]
  DWORD pcbData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v25; // [rsp+58h] [rbp-21h] BYREF
  __int64 *v26[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v27; // [rsp+70h] [rbp-9h] BYREF
  int v28; // [rsp+78h] [rbp-1h] BYREF
  int *v29; // [rsp+80h] [rbp+7h]
  int v30; // [rsp+88h] [rbp+Fh]
  __int64 v31[8]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  char v33; // [rsp+E8h] [rbp+6Fh] BYREF
  RTL_SRWLOCK *pvData; // [rsp+F0h] [rbp+77h] BYREF
  int v35; // [rsp+F8h] [rbp+7Fh] BYREF

  LODWORD(pvData) = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"System\\CurrentControlSet\\Control\\GraphicsDrivers",
          L"IsVirtualMonitorsInstalled",
          0x18u,
          0LL,
          &pvData,
          &pcbData)
    && (_DWORD)pvData == 1 )
  {
    wil::AcquireSRWLockExclusive(&pvData, this + 18);
    v2 = this + 15;
    if ( !this[15].Ptr )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&this[15]);
      VirtualMonitorManager = CreateVirtualMonitorManager((struct IVirtualMonitorManagerApi **)&this[15]);
      v4 = VirtualMonitorManager;
      if ( VirtualMonitorManager < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13B,
          (int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)(unsigned int)VirtualMonitorManager);
LABEL_36:
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&pvData);
        return v4;
      }
    }
    v5 = this + 16;
    if ( !this[16].Ptr )
    {
      v6 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, _QWORD, _QWORD))(*(_QWORD *)v2->Ptr + 24LL))(
             v2->Ptr,
             this + 16,
             0LL,
             0LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v4 = -2147024891;
        if ( v6 != -2147024891 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x143,
            (int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
            (const char *)(unsigned int)v6);
          v4 = v7;
        }
        goto LABEL_36;
      }
    }
    v25 = 0LL;
    Ptr = this[10].Ptr;
    v9 = *(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    v10 = v9(Ptr, &v25);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 327LL;
LABEL_25:
      v16 = (unsigned int)v10;
      goto LABEL_26;
    }
    v35 = 0;
    v33 = 0;
    v27 = v25;
    v29 = &v35;
    v30 = 0;
    v31[0] = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 56LL))(v25, &v28);
    *v29 = v12;
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::get_at_current(
      &v27,
      0LL);
    v13 = 0;
    v14 = v28;
    while ( *v29 >= 0 )
    {
      if ( v13 == v14 )
        break;
      v26[0] = v31;
      v26[1] = (__int64 *)&v33;
      lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator()(v26);
      if ( v33 )
        break;
      wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::get_at_current(
        &v27,
        (unsigned int)++v13);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v31);
    v4 = v35;
    if ( v35 < 0 )
    {
      v16 = (unsigned int)v35;
      v11 = 376LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)v16);
LABEL_35:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      goto LABEL_36;
    }
    if ( v33 )
    {
      if ( BYTE4(this[17].Ptr) )
      {
        if ( UDwmTrace::IsEnabled(v15) )
        {
          wil::details::static_lazy<UDwmTrace>::get(
            v19,
            _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
          UDwmTrace::UDwmRemovingVirtualMonitor_(v20);
        }
        v21 = (*(__int64 (__fastcall **)(PVOID, PVOID, _QWORD))(*(_QWORD *)v2->Ptr + 56LL))(
                v2->Ptr,
                v5->Ptr,
                LODWORD(this[17].Ptr));
        if ( v21 < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x18D,
            (int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
            (const char *)(unsigned int)v21,
            pdwType);
        BYTE4(this[17].Ptr) = 0;
      }
    }
    else if ( !BYTE4(this[17].Ptr) )
    {
      if ( UDwmTrace::IsEnabled(v15) )
      {
        wil::details::static_lazy<UDwmTrace>::get(
          v17,
          _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
        UDwmTrace::UDwmCreatingVirtualMonitor_(v18);
      }
      v10 = (*(__int64 (__fastcall **)(PVOID, PVOID, RTL_SRWLOCK *, __int64, int, int, int, int, _QWORD))(*(_QWORD *)v2->Ptr + 40LL))(
              v2->Ptr,
              v5->Ptr,
              this + 17,
              1280LL,
              720,
              100,
              90,
              1,
              0LL);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 390LL;
        goto LABEL_25;
      }
      BYTE4(this[17].Ptr) = 1;
    }
    v4 = 0;
    goto LABEL_35;
  }
  return 0LL;
}
