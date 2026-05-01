/*
 * XREFs of ?OnAnimationFinished@MultitaskingViewInvocationAnimationCoordinator@@MEAAXXZ @ 0x1804C86F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewInvocationAnimationCoordinator::OnAnimationFinished(
        MultitaskingViewInvocationAnimationCoordinator *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *((_QWORD *)this + 7);
  v3 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
  if ( v3(v2, &GUID_5b292bfd_6752_499b_bff1_cd8805578b96, &v4) >= 0 )
    (*(void (__fastcall **)(__int64, MultitaskingViewInvocationAnimationCoordinator *))(*(_QWORD *)v4 + 24LL))(v4, this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
}
