/*
 * XREFs of ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A5BE4
 * Callers:
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A53D0 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x1800A5880 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A5880.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1984 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator() @ 0x1800A4CE4 (_lambda_5d2a0d57000e9a8e56f274d64107aadc_--operator().c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800A5A28 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A6244 (-UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A6578 (-UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800A66B4 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800A6754 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Win.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAnalogCompositorManager::OnMonitorChangedNotification(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r15
  int VirtualMonitorManager; // ebx
  __int64 v4; // rdx
  RTL_SRWLOCK *v6; // r12
  int v7; // eax
  PVOID Ptr; // rdi
  __int64 (__fastcall *v9)(PVOID, __int64 *); // rbx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ebx
  int v13; // edi
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  UDwmTrace *v17; // rcx
  __int64 v18; // rcx
  UDwmTrace *v19; // rcx
  int v20; // eax
  int pdwType; // [rsp+20h] [rbp-59h]
  DWORD pcbData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h] BYREF
  __int64 *v24[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-9h] BYREF
  int v26; // [rsp+78h] [rbp-1h] BYREF
  int *v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+88h] [rbp+Fh]
  __int64 v29[8]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  char v31; // [rsp+E8h] [rbp+6Fh] BYREF
  RTL_SRWLOCK *pvData; // [rsp+F0h] [rbp+77h] BYREF
  int v33; // [rsp+F8h] [rbp+7Fh] BYREF

  LODWORD(pvData) = 0;
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"System\\CurrentControlSet\\Control\\GraphicsDrivers",
         L"IsVirtualMonitorsInstalled",
         0x18u,
         0LL,
         &pvData,
         &pcbData)
    || (_DWORD)pvData != 1 )
  {
    return 0LL;
  }
  AcquireSRWLockExclusive(this + 18);
  pvData = this + 18;
  v2 = this + 15;
  if ( !this[15].Ptr )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&this[15]);
    VirtualMonitorManager = CreateVirtualMonitorManager(&this[15]);
    if ( VirtualMonitorManager < 0 )
    {
      v4 = 315LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)VirtualMonitorManager);
LABEL_7:
      if ( this != (RTL_SRWLOCK *)-144LL )
        ReleaseSRWLockExclusive(this + 18);
      return (unsigned int)VirtualMonitorManager;
    }
  }
  v6 = this + 16;
  if ( this[16].Ptr
    || (v7 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, _QWORD, _QWORD))(*(_QWORD *)v2->Ptr + 24LL))(
               v2->Ptr,
               this + 16,
               0LL,
               0LL),
        VirtualMonitorManager = v7,
        v7 >= 0) )
  {
    v23 = 0LL;
    Ptr = this[10].Ptr;
    v9 = *(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    VirtualMonitorManager = v9(Ptr, &v23);
    if ( VirtualMonitorManager < 0 )
    {
      v10 = 327LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)VirtualMonitorManager);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      goto LABEL_7;
    }
    v33 = 0;
    v31 = 0;
    v25 = v23;
    v27 = &v33;
    v28 = 0;
    v29[0] = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 56LL))(v23, &v26);
    *v27 = v11;
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::get_at_current(
      &v25,
      0LL);
    v12 = 0;
    v13 = v26;
    while ( *v27 >= 0 )
    {
      if ( v12 == v13 )
        break;
      v24[0] = v29;
      v24[1] = (__int64 *)&v31;
      lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator()(v24);
      if ( v31 )
        break;
      wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::get_at_current(
        &v25,
        (unsigned int)++v12);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v29);
    VirtualMonitorManager = v33;
    if ( v33 < 0 )
    {
      v10 = 376LL;
      goto LABEL_19;
    }
    v15 = BYTE4(this[17].Ptr);
    if ( v31 )
    {
      if ( v15 )
      {
        if ( UDwmTrace::IsEnabled(v14) )
        {
          wil::details::static_lazy<UDwmTrace>::get(
            v18,
            _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
          UDwmTrace::UDwmRemovingVirtualMonitor_(v19);
        }
        v20 = (*(__int64 (__fastcall **)(PVOID, PVOID, _QWORD))(*(_QWORD *)v2->Ptr + 56LL))(
                v2->Ptr,
                v6->Ptr,
                LODWORD(this[17].Ptr));
        if ( v20 < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x18D,
            (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
            (const char *)(unsigned int)v20,
            pdwType);
        BYTE4(this[17].Ptr) = 0;
      }
    }
    else if ( !v15 )
    {
      if ( UDwmTrace::IsEnabled(v14) )
      {
        wil::details::static_lazy<UDwmTrace>::get(
          v16,
          _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
        UDwmTrace::UDwmCreatingVirtualMonitor_(v17);
      }
      VirtualMonitorManager = (*(__int64 (__fastcall **)(PVOID, PVOID, RTL_SRWLOCK *, __int64, int, int, int, int, _QWORD))(*(_QWORD *)v2->Ptr + 40LL))(
                                v2->Ptr,
                                v6->Ptr,
                                this + 17,
                                1280LL,
                                720,
                                100,
                                90,
                                1,
                                0LL);
      if ( VirtualMonitorManager < 0 )
      {
        v10 = 390LL;
        goto LABEL_19;
      }
      BYTE4(this[17].Ptr) = 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    if ( this != (RTL_SRWLOCK *)-144LL )
      ReleaseSRWLockExclusive(this + 18);
    return 0LL;
  }
  if ( v7 != -2147024891 )
  {
    v4 = 323LL;
    goto LABEL_6;
  }
  if ( this != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockExclusive(this + 18);
  return 2147942405LL;
}
