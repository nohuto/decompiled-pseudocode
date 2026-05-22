/*
 * XREFs of ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800B53BC
 * Callers:
 *     ?RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800B86A0 (-RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800B45F4 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B48C0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@AEBU_LUID@@@Z @ 0x1800B7B10 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B7B54 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800B7B54.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ForegroundManager::RequestActivation(ForegroundManager *this, struct ActivationControllerBamoProxy *a2)
{
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // eax
  int ViewIdFromWindowId; // eax
  int TopLevelHostView; // eax
  __int64 WindowIdFromViewId; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v5 = *((_QWORD *)this + 67);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 48LL))((char *)a2 + 8);
  ActivationWatcherBamoPrincipal::TryFindActivatableEntity(v5, &v13, v6);
  if ( v13 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 40LL))(v13 + 8) == 0;
    v8 = *(_QWORD *)(v13 + 8);
    if ( v7 )
      v9 = (*(__int64 (**)(void))(v8 + 24))();
    else
      v9 = (*(__int64 (**)(void))(v8 + 40))();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v9);
    TopLevelHostView = ViewHierarchyWithWindowManager::GetTopLevelHostView(ViewHierarchy, ViewIdFromWindowId);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, TopLevelHostView);
    ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v14, WindowIdFromViewId);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 67) + 8LL) + 24LL))(
      *((_QWORD *)this + 67) + 8LL,
      v13,
      v14);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v14);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v13);
}
