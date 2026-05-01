/*
 * XREFs of ?OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180336664
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803364BC (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4c76958155d905f9845754a099fa7af4___ @ 0x18032706C (Windows--Internal--ComTaskPool--QueueTask__lambda_4c76958155d905f9845754a099fa7af4___.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x180342430 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GamingOverlayExperienceManager::OnWindowChangedViewEvent(
        GamingOverlayExperienceManager *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, RTL_SRWLOCK **),
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v8; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v9; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v10; // r14
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v11; // r8
  signed __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  __int64 (__fastcall *v15)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, RTL_SRWLOCK **); // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  GamingOverlayExperienceManager *v21; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  int v24; // [rsp+70h] [rbp+38h] BYREF
  RTL_SRWLOCK *v25; // [rsp+78h] [rbp+40h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v26; // [rsp+80h] [rbp+48h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v27; // [rsp+88h] [rbp+50h] BYREF

  v26 = a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 408);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 408));
  v22 = v5;
  v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, RTL_SRWLOCK **), struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **))(*a2)[6])(
         a2,
         &v26);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x790,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_26;
  }
  v8 = 0LL;
  v27 = 0LL;
  wil::AcquireSRWLockExclusive(&v25, (RTL_SRWLOCK *)this + 169);
  v9 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 170);
  v10 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 171);
  while ( v9 != v10
       && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
             *v9,
             (unsigned int)v26) )
    ++v9;
  if ( v9 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 171) )
  {
    v7 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x797,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80070490LL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v25);
    goto LABEL_24;
  }
  v11 = *v9;
  if ( *v9 )
  {
    v27 = *v9;
    v12 = *((_QWORD *)v11 + 1);
    while ( v12 >= 0 )
    {
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 1, v12 + 1, v12);
      v13 = v12 == v14;
      v12 = v14;
      if ( v13 )
        goto LABEL_15;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v12 + 24), 1u);
LABEL_15:
    v8 = v27;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v25);
  if ( v8 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 44) )
  {
    v25 = 0LL;
    v15 = **a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    v16 = v15(
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
            &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
            &v25);
    v7 = v16;
    if ( v16 < 0 )
    {
      v17 = 1951LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      goto LABEL_24;
    }
    v16 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, int *))v25->Ptr + 6))(v25, &v24);
    v7 = v16;
    if ( v16 < 0 )
    {
      v17 = 1952LL;
      goto LABEL_21;
    }
    *((_QWORD *)this + 45) = v24;
    v21 = this;
    Windows::Internal::ComTaskPool::QueueTask__lambda_4c76958155d905f9845754a099fa7af4___(
      v19,
      v18,
      *((_DWORD *)this + 335),
      &v21);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
  }
  v7 = 0;
LABEL_24:
  if ( v8 )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v27);
LABEL_26:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v22);
  return v7;
}
