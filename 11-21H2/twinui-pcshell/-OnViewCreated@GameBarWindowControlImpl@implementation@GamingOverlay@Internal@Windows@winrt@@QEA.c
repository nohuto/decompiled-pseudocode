/*
 * XREFs of ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1803428E4
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180335CC0 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1803410D0 (--$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown.c)
 *     ??$get_weak@VSnapFlyoutHost@@@?$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1803411C8 (--$get_weak@VSnapFlyoutHost@@@-$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Window.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180341874 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180343F74 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x1803440CC (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewCreated(
        RTL_SRWLOCK *this,
        struct IApplicationFrameWrapper **a2)
{
  __int64 (*v4)(void); // rbx
  struct IApplicationFrameWrapper **v5; // r15
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  struct IApplicationFrameWrapper *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rax
  signed int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  __int64 v27; // r8
  const char *v28; // r9
  const char *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v33[24]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+48h] [rbp-60h] BYREF
  __int128 v36; // [rsp+50h] [rbp-58h] BYREF
  __int128 v37; // [rsp+60h] [rbp-48h] BYREF
  __int64 v38; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  RTL_SRWLOCK *v40; // [rsp+B0h] [rbp+8h] BYREF
  _BYTE *v41; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+20h] BYREF

  wil::AcquireSRWLockExclusive(&v40, this + 22);
  v4 = *(__int64 (**)(void))(*(_QWORD *)this[4].Ptr + 24LL);
  v5 = (struct IApplicationFrameWrapper **)&this[5];
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&this[5]);
  try
  {
    v6 = v4();
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v6);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v40);
      return v7;
    }
    if ( a2 )
    {
      v10 = *v5;
      if ( *v5 )
      {
        *a2 = v10;
        (*(void (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      else
      {
        *a2 = 0LL;
      }
    }
    v42 = 0LL;
    v11 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)*v5 + 32LL))(*v5, &v42);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v11);
      if ( v42 )
        goto LABEL_25;
      goto LABEL_26;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64))(*(_QWORD *)v42 + 72LL))(
            v42,
            L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
            1LL);
    v12 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFA,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v13);
      if ( v42 )
        goto LABEL_25;
      goto LABEL_26;
    }
    v14 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)*v5 + 120LL))(*v5, 1LL);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v14);
      if ( v42 )
        goto LABEL_25;
      goto LABEL_26;
    }
    v15 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)*v5 + 48LL))(*v5, 4LL);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x100,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v15);
      if ( v42 )
        goto LABEL_25;
      goto LABEL_26;
    }
    v16 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, PVOID))(*(_QWORD *)*v5 + 104LL))(
            *v5,
            this[3].Ptr);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v16);
      if ( v42 )
        goto LABEL_25;
      goto LABEL_26;
    }
    v17 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, _QWORD))(*(_QWORD *)*v5 + 128LL))(*v5, 0LL);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x106,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v17);
      if ( v42 )
LABEL_25:
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v42);
LABEL_26:
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v40);
      return v12;
    }
    winrt::impl::as<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v34,
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))this[3].Ptr);
    *(_QWORD *)&v36 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnClientWindowReadyForPresentationChanged;
    DWORD2(v36) = 0;
    winrt::impl::root_implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak<SnapFlyoutHost>(
      (volatile signed __int64 *)this,
      v32);
    v18 = *(_QWORD *)v32;
    *(_QWORD *)v32 = 0LL;
    *(_QWORD *)v33 = v18;
    *(_OWORD *)&v33[8] = v36;
    v41 = v33;
    v19 = operator new(0x28uLL);
    v20 = *(_QWORD *)v33;
    *(_QWORD *)v33 = 0LL;
    v19[1] = v20;
    *((_OWORD *)v19 + 1) = *(_OWORD *)&v33[8];
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *((_DWORD *)v19 + 8) = 1;
    *v19 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs>,_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_>::`vftable';
    *(_QWORD *)&v36 = v19;
    if ( *(_QWORD *)v33 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)v33);
    if ( *(_QWORD *)v32 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)v32);
    v41 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _BYTE **))(*(_QWORD *)v34 + 80LL))(v34, v19, &v41);
    if ( v21 < 0 )
      winrt::throw_hresult(v21);
    this[21].Ptr = v41;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 24LL))(v42, &v35);
    v26 = v22;
    if ( v22 >= 0 )
    {
      if ( v35 )
      {
        LODWORD(v41) = 1;
        LODWORD(v37) = 24;
        *((_QWORD *)&v37 + 1) = &v41;
        LODWORD(v38) = 4;
        if ( !(unsigned int)SetWindowCompositionAttribute(v35, &v37, v24, v25) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x11F,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
            v28);
        *(_DWORD *)v33 = 25;
        *(_QWORD *)&v33[8] = &v41;
        *(_DWORD *)&v33[16] = 4;
        v37 = *(_OWORD *)v33;
        v38 = *(_QWORD *)&v33[16];
        if ( !(unsigned int)SetWindowCompositionAttribute(v35, &v37, v27, v28) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x12A,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
            v29);
      }
      LOBYTE(v23) = (_BYTE)v40;
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(this, v23);
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(
        this,
        v30,
        1LL);
      if ( BYTE1(this[13].Ptr) && LOBYTE(this[13].Ptr) )
      {
        LOBYTE(v31) = (_BYTE)v40;
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(this, v31);
      }
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v34);
      if ( v42 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v42);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v40);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v22);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v34);
      if ( v42 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v42);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v40);
      result = v26;
    }
  }
  catch ( ... )
  {
    LODWORD(v40) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x139,
                     (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                     v8);
    return (unsigned int)v40;
  }
  return result;
}
