/*
 * XREFs of ??$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewDismissalAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Z @ 0x1804B534C
 * Callers:
 *     ?SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B575C (-SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B541C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$SnapAssistViewAnimationCoordinatorB.c)
 *     ?RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x1804CB53C (-RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SnapAssistViewDismissalAnimationCoordinator,SnapAssistViewDismissalAnimationCoordinator,WeakReference::IWeakReference * &,IMultitaskingViewAnimation * &>(
        MultitaskingViewDismissalAnimationCoordinator **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewAnimation **a3)
{
  MultitaskingViewDismissalAnimationCoordinator *v6; // rax
  MultitaskingViewDismissalAnimationCoordinator *v7; // rbx
  int v8; // edi
  MultitaskingViewDismissalAnimationCoordinator *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (MultitaskingViewDismissalAnimationCoordinator *)operator new(
                                                          0xF0uLL,
                                                          (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>(v6);
    *(_QWORD *)v7 = &SnapAssistViewDismissalAnimationCoordinator::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v7 + 1) = &SnapAssistViewDismissalAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
    *((_QWORD *)v7 + 22) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::`vftable';
    v10 = v7;
    v8 = MultitaskingViewDismissalAnimationCoordinator::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(MultitaskingViewDismissalAnimationCoordinator *))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
