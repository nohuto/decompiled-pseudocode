/*
 * XREFs of ?OnConsolidationRequestedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180402BA4
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804041EC (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Hide@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x1802D3902 (-Hide@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1804100C0 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GamingOverlayExperienceManager::OnConsolidationRequestedViewEvent(
        GamingOverlayExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        __int64 (__fastcall ***a3)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))
{
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  RTL_SRWLOCK *v10; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v11; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v12; // r12
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v13; // r8
  signed __int64 v14; // rdx
  bool v15; // zf
  signed __int64 v16; // rax
  __int64 (__fastcall *v17)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *); // rbx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  int v22[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v25; // [rsp+60h] [rbp+8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+10h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 448));
  if ( a2 )
  {
    try
    {
      v7 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 48LL))();
      v8 = v7;
      if ( v7 >= 0 )
      {
        v10 = 0LL;
        *(_QWORD *)v22 = 0LL;
        AcquireSRWLockShared((PSRWLOCK)this + 174);
        v11 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 175);
        v12 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 176);
        while ( v11 != v12
             && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
                   *v11,
                   v25) )
          ++v11;
        if ( v11 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 176) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x84F,
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
          v13 = *v11;
          if ( *v11 )
          {
            *(_QWORD *)v22 = *v11;
            v14 = *((_QWORD *)v13 + 1);
            while ( v14 >= 0 )
            {
              v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 1, v14 + 1, v14);
              v15 = v14 == v16;
              v14 = v16;
              if ( v15 )
                goto LABEL_25;
            }
            _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v14 + 24), 1u);
LABEL_25:
            v10 = *(RTL_SRWLOCK **)v22;
          }
          if ( this != (GamingOverlayExperienceManager *)-1392LL )
            ReleaseSRWLockShared((PSRWLOCK)this + 174);
          if ( v10 )
          {
            winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Hide(v10);
            v23[0] = (__int64)a3;
            if ( a3 )
              ((void (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *)))(*a3)[1])(a3);
            v27 = 0LL;
            v17 = **a3;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
            v18 = v17(
                    (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                    &GUID_30ae48b3_c6d3_50b7_a944_20bb1f42d9bb,
                    &v27);
            v19 = v18;
            if ( v18 >= 0 )
            {
              v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 48LL))(v27, 0LL);
              v21 = v20;
              if ( v20 >= 0 )
              {
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v23);
                winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)v22);
                if ( lpCriticalSection )
                  LeaveCriticalSection(lpCriticalSection);
                result = 0LL;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x859,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                  (const char *)(unsigned int)v20);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v23);
                winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)v22);
                if ( lpCriticalSection )
                  LeaveCriticalSection(lpCriticalSection);
                result = v21;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x858,
                (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                (const char *)(unsigned int)v18);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v23);
              winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)v22);
              if ( lpCriticalSection )
                LeaveCriticalSection(lpCriticalSection);
              result = v19;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x853,
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
          (void *)0x848,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        result = v8;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x85B,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                             v9);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x846,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2147500035LL;
  }
  return result;
}
