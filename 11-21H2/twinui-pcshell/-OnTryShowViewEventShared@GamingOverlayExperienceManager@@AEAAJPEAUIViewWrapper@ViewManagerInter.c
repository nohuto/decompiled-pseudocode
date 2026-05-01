/*
 * XREFs of ?OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180335A84
 * Callers:
 *     ?OnApplicationViewSwitcherTryShowAsStandaloneViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180334DEC (-OnApplicationViewSwitcherTryShowAsStandaloneViewEvent@GamingOverlayExperienceManager@@AEAAJPEAU.c)
 *     ?OnApplicationViewSwitcherTryShowAsViewModeViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180334F10 (-OnApplicationViewSwitcherTryShowAsViewModeViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x180342430 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180343F28 (-Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::OnTryShowViewEventShared(
        GamingOverlayExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v9; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v10; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v11; // r14
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v12; // r8
  signed __int64 v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v17; // [rsp+50h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+10h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v19; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v20; // [rsp+68h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 408);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 408));
  v18 = v4;
  if ( a2 )
  {
    try
    {
      v6 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 48LL))();
      v7 = v6;
      if ( v6 >= 0 )
      {
        v9 = 0LL;
        v19 = 0LL;
        AcquireSRWLockShared((PSRWLOCK)this + 169);
        v20 = (RTL_SRWLOCK *)((char *)this + 1352);
        v10 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 170);
        v11 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 171);
        while ( v10 != v11
             && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
                   *v10,
                   v17) )
          ++v10;
        if ( v10 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 171) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7C5,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)0x80070490LL);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
          result = 2147943568LL;
        }
        else
        {
          v12 = *v10;
          if ( *v10 )
          {
            v19 = *v10;
            v13 = *((_QWORD *)v12 + 1);
            while ( v13 >= 0 )
            {
              v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 1, v13 + 1, v13);
              v14 = v13 == v15;
              v13 = v15;
              if ( v14 )
                goto LABEL_17;
            }
            _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v13 + 24), 1u);
LABEL_17:
            v9 = v19;
          }
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
          if ( v9 )
          {
            winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Show(v9);
            winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v19);
            wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7C9,
              (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)0x80004003LL);
            wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
            result = 2147500035LL;
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7BE,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
        result = v7;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x7CC,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                             v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BC,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
    return 2147500035LL;
  }
  return result;
}
