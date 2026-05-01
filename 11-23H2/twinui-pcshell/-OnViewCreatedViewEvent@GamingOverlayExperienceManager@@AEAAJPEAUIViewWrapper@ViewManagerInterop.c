/*
 * XREFs of ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180403968
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804041EC (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180048274 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU23@AEAU23@@Z @ 0x1803F4CAC (--$_Emplace_reallocate@AEAU-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Inte.c)
 *     ??$make_self@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@45@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@winrt@@YA?AU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@89@@Z @ 0x1803F7CD0 (--$make_self@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAP.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803F9E3C (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x1803FD3D0 (-GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU-$IVectorView@PEAUHSTRING__@@@.c)
 *     ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBURect@Foundation@56@@Z @ 0x18040F5C8 (-Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUR.c)
 *     ?IsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18040FF70 (-IsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1804100C0 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180410154 (-IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1804106DC (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?WindowType@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBW4GameBarWindowType@3456@@Z @ 0x18041203C (-WindowType@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GamingOverlayExperienceManager::OnViewCreatedViewEvent(
        GamingOverlayExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v9; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v10; // r12
  volatile __int64 **v11; // rax
  volatile signed __int64 *v12; // rbx
  char v13; // r13
  volatile signed __int64 **v14; // r12
  signed __int64 v15; // rdx
  bool v16; // zf
  signed __int64 v17; // rax
  volatile signed __int64 **v18; // rdx
  signed __int64 v19; // rdx
  signed __int64 v20; // rax
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v21; // rcx
  int DisplayMonitors; // eax
  unsigned int v23; // r14d
  unsigned __int64 v24; // xmm0_8
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  int v28; // eax
  unsigned int v29; // esi
  int v30; // eax
  unsigned int v31; // ebx
  volatile __int64 *v32; // [rsp+20h] [rbp-58h] BYREF
  char *v33; // [rsp+28h] [rbp-50h] BYREF
  float v34; // [rsp+30h] [rbp-48h]
  float v35; // [rsp+34h] [rbp-44h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v37; // [rsp+80h] [rbp+8h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v38; // [rsp+88h] [rbp+10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v39; // [rsp+90h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp+20h] BYREF

  v39 = a3;
  v38 = a2;
  v3 = a2;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 448));
  try
  {
    v5 = (*(__int64 (**)(void))(*(_QWORD *)v3 + 48LL))();
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x784,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v6;
    }
    v37 = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 174);
    v33 = (char *)this + 1392;
    v9 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 175);
    v10 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 176);
    while ( v9 != v10
         && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
               *v9,
               (unsigned int)v39) )
      ++v9;
    if ( v9 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 176) )
    {
      v11 = (volatile __int64 **)winrt::make_self<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,Microsoft::WRL::ComPtr<IApplicationFrameFactory> &,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations> &>(
                                   &v32,
                                   &v38,
                                   (__int64 *)this + 41,
                                   (__int64 *)this + 44);
      winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
        (volatile __int64 **)&v37,
        v11);
      if ( v32 )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v32);
      v12 = (volatile signed __int64 *)v37;
      if ( *((_QWORD *)this + 175) == *((_QWORD *)this + 176) )
      {
        v13 = 1;
        v14 = (volatile signed __int64 **)((char *)this + 392);
        if ( *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 49) != v37 )
        {
          if ( *v14 )
            winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)this + 49);
          *v14 = v12;
          if ( v12 )
          {
            v15 = *((_QWORD *)v12 + 1);
            while ( v15 >= 0 )
            {
              v17 = _InterlockedCompareExchange64(v12 + 1, v15 + 1, v15);
              v16 = v15 == v17;
              v15 = v17;
              if ( v16 )
                goto LABEL_23;
            }
            _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v15 + 24), 1u);
LABEL_23:
            v12 = (volatile signed __int64 *)v37;
            v3 = v38;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
          (__int64 *)this + 48,
          (__int64)v3);
      }
      else
      {
        v13 = 0;
      }
      v18 = (volatile signed __int64 **)*((_QWORD *)this + 176);
      if ( v18 == *((volatile signed __int64 ***)this + 177) )
      {
        std::vector<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>::_Emplace_reallocate<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl> &>(
          (__int64 *)this + 175,
          (__int64)v18,
          (volatile __int64 **)&v37);
        v12 = (volatile signed __int64 *)v37;
      }
      else
      {
        *v18 = v12;
        if ( v12 )
        {
          v19 = *((_QWORD *)v12 + 1);
          while ( v19 >= 0 )
          {
            v20 = _InterlockedCompareExchange64(v12 + 1, v19 + 1, v19);
            v16 = v19 == v20;
            v19 = v20;
            if ( v16 )
              goto LABEL_33;
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v19 + 24), 1u);
LABEL_33:
          v12 = (volatile signed __int64 *)v37;
          v3 = v38;
        }
        *((_QWORD *)this + 176) += 8LL;
      }
      if ( this != (GamingOverlayExperienceManager *)-1392LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 174);
      if ( !v13 )
        goto LABEL_53;
      v21 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)*((_QWORD *)this + 49);
      if ( !v21 )
        goto LABEL_53;
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsResizingEnabled(v21, 0);
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsTitleBarEnabled(
        *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 49),
        0);
      LODWORD(v38) = 1;
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowType(
        *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 49),
        (const enum winrt::Windows::Internal::GamingOverlay::GameBarWindowType *)&v38);
      if ( *((_DWORD *)this + 328) == -1 )
      {
        DisplayMonitors = GamingOverlayExperienceManager::GetDisplayMonitors(
                            (__int64)this + 136,
                            *((_QWORD *)this + 168),
                            0LL,
                            0LL);
        v23 = DisplayMonitors;
        if ( DisplayMonitors < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7A4,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)(unsigned int)DisplayMonitors);
          if ( v12 )
            winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v37);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return v23;
        }
      }
      v24 = _mm_srli_si128(*(__m128i *)((char *)this + 1316), 8).m128i_u64[0];
      v25 = (float)(int)(HIDWORD(v24) - HIDWORD(*(_QWORD *)((char *)this + 1316)));
      v26 = (float)(int)(v24 - *(_QWORD *)((char *)this + 1316));
      v27 = (float)(int)HIDWORD(*(_QWORD *)((char *)this + 1316));
      *(float *)&v33 = (float)(int)*(_QWORD *)((char *)this + 1316);
      *((float *)&v33 + 1) = v27;
      v34 = v26;
      v35 = v25;
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Bounds(
        *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 49),
        (const struct winrt::Windows::Foundation::Rect *)&v33);
      v28 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, char *))(*(_QWORD *)v3 + 584LL))(
              v3,
              (char *)this + 408);
      v29 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7AA,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v28);
        if ( v12 )
          winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v37);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        result = v29;
      }
      else
      {
LABEL_53:
        if ( v12 )
        {
          v30 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewCreated(
                  (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)v12,
                  (struct IApplicationFrameWrapper **)(((unsigned __int64)this + 336) & -(__int64)(v13 != 0)));
          v31 = v30;
          if ( v30 >= 0 )
          {
            winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v37);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7AE,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)(unsigned int)v30);
            winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v37);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            result = v31;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7AD,
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
        (void *)0x78C,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
      if ( this != (GamingOverlayExperienceManager *)-1392LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 174);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v38) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x7B1,
                     (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                     v7);
    return (unsigned int)v38;
  }
  return result;
}
