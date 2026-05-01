/*
 * XREFs of ??$MakeAndInitialize@VSnapAssistViewInvocationAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewInvocationAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@$$QEA$$T@Z @ 0x1804B4E04
 * Callers:
 *     ?SnapAssistViewInvocationAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B51CC (-SnapAssistViewInvocationAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReferenc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SnapAssistViewInvocationAnimationCoordinator@@QEAA@XZ @ 0x1804B4EB8 (--0SnapAssistViewInvocationAnimationCoordinator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x1804C8988 (-RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SnapAssistViewInvocationAnimationCoordinator,SnapAssistViewInvocationAnimationCoordinator,WeakReference::IWeakReference * &,std::nullptr_t>(
        MultitaskingViewInvocationAnimationCoordinator **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewAnimation **a3)
{
  SnapAssistViewInvocationAnimationCoordinator *v6; // rax
  int v7; // edi
  MultitaskingViewInvocationAnimationCoordinator *v8; // rbx
  MultitaskingViewInvocationAnimationCoordinator *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (SnapAssistViewInvocationAnimationCoordinator *)operator new(
                                                         0xE8uLL,
                                                         (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SnapAssistViewInvocationAnimationCoordinator::SnapAssistViewInvocationAnimationCoordinator(v6);
    v10 = v8;
    v7 = MultitaskingViewInvocationAnimationCoordinator::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(MultitaskingViewInvocationAnimationCoordinator *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
