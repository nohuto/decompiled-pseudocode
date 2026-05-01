/*
 * XREFs of ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18005C170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x18005C224 (-RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BA2B8 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::SetPositionAndViewData(
        CTaskWindow *this,
        struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  int v6; // edi
  ImmersiveOwnedWindowHelper *v7; // rax
  const struct tagRECT *v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( (*((_BYTE *)this + 60) & 2) == 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
      (char *)this + 48,
      &v10);
    v6 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)v10 + 80LL))(
           v10,
           a2,
           a3);
    if ( v6 >= 0 )
    {
      v7 = (ImmersiveOwnedWindowHelper *)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
      if ( v7 )
        ImmersiveOwnedWindowHelper::RepositionOwnedWindows(v7, (HWND)a2, v8);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  return (unsigned int)v6;
}
