/*
 * XREFs of ?AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z @ 0x1804A3940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAnimatableMultitaskingViewFrame@@@?$ComPtr@UIMultitaskingViewFrame@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableMultitaskingViewFrame@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A2CA8 (--$As@UIAnimatableMultitaskingViewFrame@@@-$ComPtr@UIMultitaskingViewFrame@@@WRL@Microsoft@@QEBA.c)
 *     ??$As@UIDismissAnimationController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A2D04 (--$As@UIDismissAnimationController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBA.c)
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x1804A2DBC (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 *     ?SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B575C (-SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSnapAssistViewHost::AnimateDismissView(CSnapAssistViewHost *this, struct ISwitchItem *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IMultitaskingViewAnimation **); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, struct IMultitaskingViewAnimation **); // rbx
  int v5; // eax
  struct IMultitaskingViewAnimation *v6; // rdi
  struct IWeakReference *v7; // rbx
  char v8; // r14
  const struct _GUID *v9; // r8
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  struct IWeakReference *v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF
  void *v18; // [rsp+70h] [rbp+40h] BYREF
  struct IMultitaskingViewAnimation *v19; // [rsp+78h] [rbp+48h] BYREF

  LODWORD(v17) = 0;
  v19 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMultitaskingViewAnimation **))*((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = **v3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    v5 = v4(v3, &GUID_a1b0cf80_ce10_4efd_8623_e2697c1b0f4b, &v19);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x125,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)v5);
  }
  v14 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  v6 = v19;
  v15 = (struct IWeakReference *)*((_QWORD *)this + 8);
  v7 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v8 = 1;
  LODWORD(v17) = 1;
  v10 = SnapAssistViewDismissalAnimationCoordinator_CreateInstance(v7, v6, v9, &v18);
  v11 = retaddr;
  if ( v10 < 0 )
  {
    v12 = 298LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_12;
  }
  v10 = Microsoft::WRL::ComPtr<IMultitaskingViewFrame>::As<IAnimatableMultitaskingViewFrame>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
          &v14);
  v11 = retaddr;
  if ( v10 < 0 )
  {
    v12 = 299LL;
    goto LABEL_10;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v14 + 176LL))(v14, v18);
  v11 = retaddr;
  if ( v10 < 0 )
  {
    v12 = 300LL;
    goto LABEL_10;
  }
  v8 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  if ( v8 )
  {
    v17 = 0LL;
    v13 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IDismissAnimationController>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6,
            &v17);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12F,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)v13);
    AsyncControllerHelpers::CallControllerAsync<IDismissAnimationController,>(&v17);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
}
