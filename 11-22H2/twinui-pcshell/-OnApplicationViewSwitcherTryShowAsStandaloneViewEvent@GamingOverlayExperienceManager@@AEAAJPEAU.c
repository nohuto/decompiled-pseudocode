/*
 * XREFs of ?OnApplicationViewSwitcherTryShowAsStandaloneViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804027D4
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804041EC (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804033E4 (-OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GamingOverlayExperienceManager::OnApplicationViewSwitcherTryShowAsStandaloneViewEvent(
        GamingOverlayExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        __int64 (__fastcall ***a3)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = GamingOverlayExperienceManager::OnTryShowViewEventShared(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_QWORD *)v10 = a3;
    if ( a3 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *)))(*a3)[1])(a3);
    v12 = 0LL;
    v6 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v7 = v6(
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
           &GUID_73fde223_ab79_4255_b395_e73cc002703f,
           &v12);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 96LL))(v12, 0LL);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        goto LABEL_11;
      }
      v8 = 2108LL;
    }
    else
    {
      v8 = 2107LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_11:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v10);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x838,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
