/*
 * XREFs of ?OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803361DC
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803364BC (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b29e2c8ab88c1973ebb3fde9d29c8a78___ @ 0x180327280 (Windows--Internal--ComTaskPool--QueueTask__lambda_b29e2c8ab88c1973ebb3fde9d29c8a78___.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18032C7F0 (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ?UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033B0A4 (-UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ?erase@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@2@@Z @ 0x18033D0E0 (-erase@-$vector@U-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x180342430 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180342FB8 (-OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@Q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::OnViewDestroyedViewEvent(
        GamingOverlayExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v10; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v11; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v12; // r14
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v13; // rdx
  signed __int64 v14; // r8
  bool v15; // zf
  signed __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v26[8]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v27[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v29; // [rsp+90h] [rbp+40h] BYREF
  __int64 v30; // [rsp+98h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v31; // [rsp+A0h] [rbp+50h] BYREF
  RTL_SRWLOCK *v32; // [rsp+A8h] [rbp+58h] BYREF

  v31 = a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 408);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 408));
  v25 = v5;
  if ( !a2 )
  {
    v6 = -2147467261;
    v7 = 2147500035LL;
    v8 = 2059LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_37;
  }
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v31);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 2061LL;
    goto LABEL_5;
  }
  v10 = 0LL;
  v29 = 0LL;
  wil::AcquireSRWLockExclusive(&v32, (RTL_SRWLOCK *)this + 169);
  v11 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 170);
  v12 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 171);
  while ( v11 != v12
       && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
             *v11,
             (unsigned int)v31) )
    ++v11;
  if ( v11 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 171) )
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x814,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80070490LL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v32);
  }
  else
  {
    v13 = *v11;
    if ( *v11 )
    {
      v29 = *v11;
      v14 = *((_QWORD *)v13 + 1);
      while ( v14 >= 0 )
      {
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 1, v14 + 1, v14);
        v15 = v14 == v16;
        v14 = v16;
        if ( v15 )
          goto LABEL_18;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v14 + 24), 1u);
LABEL_18:
      v10 = v29;
    }
    std::vector<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>::erase(
      (char *)this + 1360,
      v26,
      v11);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v32);
    if ( v10 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 44) )
    {
      v18 = *((_QWORD *)this + 46);
      if ( v18 )
      {
        v19 = *((_QWORD *)this + 45);
        if ( v19 )
        {
          v27[0] = this;
          v27[1] = v18;
          v27[2] = v19;
          Windows::Internal::ComTaskPool::QueueTask__lambda_b29e2c8ab88c1973ebb3fde9d29c8a78___(
            v19,
            v17,
            *((_DWORD *)this + 335),
            (__int64)v27);
        }
      }
    }
    if ( v10 )
    {
      v22 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewDestroyed(v10);
      v6 = v22;
      if ( v22 >= 0 )
      {
        if ( v10 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 44) )
        {
          v30 = 0LL;
          winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
            (__int64 *)this + 44,
            &v30);
          if ( v30 )
            winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v30);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 43);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 37);
          updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeVisibility(this, 0);
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x832,
              (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)(unsigned int)updated);
          *((_BYTE *)this + 1104) = 1;
          v10 = v29;
        }
        v6 = 0;
        goto LABEL_35;
      }
      v20 = (unsigned int)v22;
      v21 = 2088LL;
    }
    else
    {
      v6 = -2147467261;
      v20 = 2147500035LL;
      v21 = 2087LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v20);
  }
LABEL_35:
  if ( v10 )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v29);
LABEL_37:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v25);
  return v6;
}
