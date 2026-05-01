/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged @ 0x18049D170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x18049719C (-RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x18049B684 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x18049D5F8 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int (__fastcall *v5)(__int64, _QWORD, _QWORD); // rbx
  __int64 v6; // rcx
  MultitaskingViewGestureHandlerHelpers *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a3 == 1 )
  {
    v11 = 0LL;
    v5 = *(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    if ( v5(a2, &v11, 0LL) >= 0 )
    {
      v12[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v11, v12) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 40LL))(v12[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
    }
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  }
  else if ( a3 == 5 )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)(a1 + 24) + 120LL));
    CAppThumbnailWindow::Uninitialize(*(CAppThumbnailWindow **)(a1 + 24));
    if ( *(_BYTE *)(a1 + 40) )
      MultitaskingViewGestureHandlerHelpers::RaiseDesktop(v7);
    v8 = *(_QWORD *)(a1 + 48);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
  }
  else if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
  }
  return 0LL;
}
