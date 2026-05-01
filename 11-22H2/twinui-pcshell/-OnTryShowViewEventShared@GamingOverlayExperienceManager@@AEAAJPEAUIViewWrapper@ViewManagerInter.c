/*
 * XREFs of ?OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804033E4
 * Callers:
 *     ?OnApplicationViewSwitcherTryShowAsStandaloneViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804027D4 (-OnApplicationViewSwitcherTryShowAsStandaloneViewEvent@GamingOverlayExperienceManager@@AEAAJPEAU.c)
 *     ?OnApplicationViewSwitcherTryShowAsViewModeViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804028F8 (-OnApplicationViewSwitcherTryShowAsViewModeViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIV.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1804100C0 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180411CB8 (-Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::OnTryShowViewEventShared(
        GamingOverlayExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 result; // rax
  int v5; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v8; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v9; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v10; // r15
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v11; // r8
  signed __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v16; // [rsp+50h] [rbp+8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+10h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v18; // [rsp+60h] [rbp+18h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 448));
  if ( a2 )
  {
    try
    {
      v5 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 48LL))();
      v6 = v5;
      if ( v5 >= 0 )
      {
        v8 = 0LL;
        v18 = 0LL;
        AcquireSRWLockShared((PSRWLOCK)this + 174);
        v9 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 175);
        v10 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 176);
        while ( v9 != v10
             && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
                   *v9,
                   v16) )
          ++v9;
        if ( v9 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 176) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x81D,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)0x80070490LL);
          if ( this != (GamingOverlayExperienceManager *)-1392LL )
            ReleaseSRWLockShared((PSRWLOCK)this + 174);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          result = 2147943568LL;
        }
        else
        {
          v11 = *v9;
          if ( *v9 )
          {
            v18 = *v9;
            v12 = *((_QWORD *)v11 + 1);
            while ( v12 >= 0 )
            {
              v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 1, v12 + 1, v12);
              v13 = v12 == v14;
              v12 = v14;
              if ( v13 )
                goto LABEL_25;
            }
            _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v12 + 24), 1u);
LABEL_25:
            v8 = v18;
          }
          if ( this != (GamingOverlayExperienceManager *)-1392LL )
            ReleaseSRWLockShared((PSRWLOCK)this + 174);
          if ( v8 )
          {
            winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Show(v8);
            winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v18);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x821,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)0x80004003LL);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            result = 2147500035LL;
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x816,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        result = v6;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x824,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                             v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x814,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2147500035LL;
  }
  return result;
}
