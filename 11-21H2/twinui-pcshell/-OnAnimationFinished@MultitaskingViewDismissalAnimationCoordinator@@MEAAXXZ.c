/*
 * XREFs of ?OnAnimationFinished@MultitaskingViewDismissalAnimationCoordinator@@MEAAXXZ @ 0x1804CB410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewDismissalAnimationCoordinator::OnAnimationFinished(
        MultitaskingViewDismissalAnimationCoordinator *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !*((_BYTE *)this + 192) )
  {
    v2 = *((_QWORD *)this + 7);
    v3 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
    v4 = v3(v2, &GUID_44165396_6e38_431d_b682_2ac4077f5b3a, &v6);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64, MultitaskingViewDismissalAnimationCoordinator *))(*(_QWORD *)v6 + 24LL))(
        v6,
        this);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
        (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
}
