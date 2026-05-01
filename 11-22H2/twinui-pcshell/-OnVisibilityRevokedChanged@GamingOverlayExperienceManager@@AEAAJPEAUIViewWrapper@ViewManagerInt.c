/*
 * XREFs of ?OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801DAFC4
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804041EC (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180095B78 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801BCC7C (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7f273b5241418b148f445f7cfb724964___ @ 0x1801D9DAC (Windows--Internal--ComTaskPool--QueueTask__lambda_7f273b5241418b148f445f7cfb724964___.c)
 *     ?VisibilityRevoked@?$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801DB9DC (-VisibilityRevoked@-$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOv.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x1803FB640 (-FindWindowW@GamingOverlayExperienceManager@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple.c)
 *     ?add_ref@?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@AEBAXXZ @ 0x18040A9D0 (-add_ref@-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GamingOverlayExperienceManager::OnVisibilityRevokedChanged(
        GamingOverlayExperienceManager *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  void (__fastcall **v7)(_QWORD *, void *, RTL_SRWLOCK **); // rbx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // r9
  void *v11; // r8
  RTL_SRWLOCK *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  RTL_SRWLOCK *v17; // [rsp+20h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+28h] [rbp-28h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  RTL_SRWLOCK *v23; // [rsp+80h] [rbp+30h] BYREF
  _QWORD *v24; // [rsp+88h] [rbp+38h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v25; // [rsp+90h] [rbp+40h] BYREF
  void (__fastcall **v26)(_QWORD *, void *, RTL_SRWLOCK **); // [rsp+98h] [rbp+48h] BYREF

  v25 = a3;
  wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 448), &v18);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **))a2->lpVtbl[2].QueryInterface)(
         a2,
         &v25);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7EA,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_18;
  }
  v7 = 0LL;
  v26 = 0LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 174, &v23);
  GamingOverlayExperienceManager::FindWindowW(this, &v24, v8, &v25);
  if ( v24 == *((_QWORD **)this + 176) )
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F1,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80070490LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
    goto LABEL_16;
  }
  v9 = 0LL;
  if ( *v24 )
  {
    v7 = (void (__fastcall **)(_QWORD *, void *, RTL_SRWLOCK **))*v24;
    v26 = (void (__fastcall **)(_QWORD *, void *, RTL_SRWLOCK **))*v24;
    winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::add_ref(&v26);
    v9 = v10;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
  if ( v9 == *((_QWORD *)this + 49) && *((_QWORD *)this + 50) )
  {
    v24 = 0LL;
    winrt::copy_from_abi((winrt *)&v24, a2, v11);
    if ( v24 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(_QWORD *, void *, RTL_SRWLOCK **))*v24)(
        v24,
        &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>,
        &v17);
      v12 = v17;
      v23 = v17;
    }
    else
    {
      v23 = 0LL;
      v12 = 0LL;
    }
    if ( !v12 )
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7FA,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v23);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v24);
      goto LABEL_16;
    }
    v13 = (unsigned int)((unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>::VisibilityRevoked(&v23) != 0)
        + 2;
    v14 = *((_QWORD *)this + 50);
    v15 = *((_QWORD *)this + 51);
    *(_QWORD *)&v19 = this;
    DWORD2(v19) = v13;
    v20 = v15;
    v21 = v14;
    Windows::Internal::ComTaskPool::QueueTask__lambda_7f273b5241418b148f445f7cfb724964___(
      v14,
      v13,
      *((_DWORD *)this + 345),
      &v19);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v23);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v24);
  }
  v6 = 0;
LABEL_16:
  if ( v7 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v26);
LABEL_18:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
  return v6;
}
