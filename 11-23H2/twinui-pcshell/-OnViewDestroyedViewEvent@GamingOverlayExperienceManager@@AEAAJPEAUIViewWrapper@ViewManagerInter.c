/*
 * XREFs of ?OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180403EEC
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804041EC (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2eca7fdb43b57a3ea66f328ce790c985___ @ 0x1801D9BD4 (Windows--Internal--ComTaskPool--QueueTask__lambda_2eca7fdb43b57a3ea66f328ce790c985___.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x1802D33D8 (-UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803F9E3C (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ?erase@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@2@@Z @ 0x18040AD68 (-erase@-$vector@U-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1804100C0 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180410E0C (-OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@Q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::OnViewDestroyedViewEvent(
        GamingOverlayExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  unsigned int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v9; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v10; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v11; // r15
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v12; // rdx
  signed __int64 v13; // r8
  bool v14; // zf
  signed __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  int updated; // eax
  _BYTE v24[8]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v25[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v27; // [rsp+80h] [rbp+40h] BYREF
  volatile __int64 *v28; // [rsp+88h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v29; // [rsp+90h] [rbp+50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp+58h] BYREF

  v29 = a3;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 448));
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 2147500035LL;
    v7 = 2147LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_40;
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v29);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 2149LL;
    goto LABEL_5;
  }
  v9 = 0LL;
  v27 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 174);
  v10 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 175);
  v11 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 176);
  while ( v10 != v11
       && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
             *v10,
             (unsigned int)v29) )
    ++v10;
  if ( v10 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 176) )
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86C,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80070490LL);
    if ( this != (GamingOverlayExperienceManager *)-1392LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 174);
  }
  else
  {
    v12 = *v10;
    if ( *v10 )
    {
      v27 = *v10;
      v13 = *((_QWORD *)v12 + 1);
      while ( v13 >= 0 )
      {
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 1, v13 + 1, v13);
        v14 = v13 == v15;
        v13 = v15;
        if ( v14 )
          goto LABEL_19;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v13 + 24), 1u);
LABEL_19:
      v9 = v27;
    }
    std::vector<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>::erase(
      (char *)this + 1400,
      v24,
      v10);
    if ( this != (GamingOverlayExperienceManager *)-1392LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 174);
    if ( v9 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 49) )
    {
      v17 = *((_QWORD *)this + 51);
      if ( v17 )
      {
        v18 = *((_QWORD *)this + 50);
        if ( v18 )
        {
          v25[0] = this;
          v25[1] = v17;
          v25[2] = v18;
          Windows::Internal::ComTaskPool::QueueTask__lambda_2eca7fdb43b57a3ea66f328ce790c985___(
            v18,
            v16,
            *((_DWORD *)this + 345),
            (__int64)v25);
        }
      }
    }
    if ( v9 )
    {
      v21 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewDestroyed(v9);
      v5 = v21;
      if ( v21 >= 0 )
      {
        if ( v9 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 49) )
        {
          v28 = 0LL;
          winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
            (volatile __int64 **)this + 49,
            &v28);
          if ( v28 )
            winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v28);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 48);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 42);
          updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeVisibility(this, 0);
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x88A,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)(unsigned int)updated);
          *((_BYTE *)this + 1144) = 1;
          v9 = v27;
        }
        v5 = 0;
        goto LABEL_38;
      }
      v19 = (unsigned int)v21;
      v20 = 2176LL;
    }
    else
    {
      v5 = -2147467261;
      v19 = 2147500035LL;
      v20 = 2175LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v19);
  }
LABEL_38:
  if ( v9 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v27);
LABEL_40:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
