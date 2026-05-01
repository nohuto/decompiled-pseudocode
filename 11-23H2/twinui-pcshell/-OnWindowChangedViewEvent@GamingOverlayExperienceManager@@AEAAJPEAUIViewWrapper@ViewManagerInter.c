/*
 * XREFs of ?OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804043CC
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804041EC (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4549908e5068fc9a3dad541137578901___ @ 0x1801D9C64 (Windows--Internal--ComTaskPool--QueueTask__lambda_4549908e5068fc9a3dad541137578901___.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1804100C0 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GamingOverlayExperienceManager::OnWindowChangedViewEvent(
        GamingOverlayExperienceManager *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *),
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  volatile __int64 *v7; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v8; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v9; // r15
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v10; // r8
  signed __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  __int64 (__fastcall *v14)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v26; // [rsp+90h] [rbp+50h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v27; // [rsp+98h] [rbp+58h] BYREF

  v26 = a3;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 448));
  v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *), struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **))(*a2)[6])(
         a2,
         &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BB,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_29;
  }
  v7 = 0LL;
  v27 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 174);
  v8 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 175);
  v9 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)*((_QWORD *)this + 176);
  while ( v8 != v9
       && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
             *v8,
             (unsigned int)v26) )
    ++v8;
  if ( v8 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 176) )
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C2,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80070490LL);
    if ( this != (GamingOverlayExperienceManager *)-1392LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 174);
    goto LABEL_27;
  }
  v10 = *v8;
  if ( *v8 )
  {
    v27 = *v8;
    v11 = *((_QWORD *)v10 + 1);
    while ( v11 >= 0 )
    {
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 1, v11 + 1, v11);
      v12 = v11 == v13;
      v11 = v13;
      if ( v12 )
        goto LABEL_16;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v11 + 24), 1u);
LABEL_16:
    v7 = (volatile __int64 *)v27;
  }
  if ( this != (GamingOverlayExperienceManager *)-1392LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 174);
  if ( v7 == *((volatile __int64 **)this + 49) )
  {
    v25 = 0LL;
    v14 = **a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    v15 = v14(
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
            &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
            &v25);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 1994LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      goto LABEL_27;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 48LL))(v25, &v24);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 1995LL;
      goto LABEL_24;
    }
    v18 = v24;
    *((_QWORD *)this + 50) = v24;
    v19 = *((_QWORD *)this + 51);
    v22[0] = this;
    v22[1] = v19;
    v22[2] = v18;
    Windows::Internal::ComTaskPool::QueueTask__lambda_4549908e5068fc9a3dad541137578901___(
      v18,
      v17,
      *((_DWORD *)this + 345),
      (__int64)v22);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  }
  v6 = 0;
LABEL_27:
  if ( v7 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v27);
LABEL_29:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
