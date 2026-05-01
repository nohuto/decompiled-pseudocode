/*
 * XREFs of ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x180176228
 * Callers:
 *     ?UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180176200 (-UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006BBE8 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::UnsubscribeFromServicesInternal(
        CortanaStoreAppExperienceManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 200);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, *((_QWORD *)this + 21));
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 29) && *((_QWORD *)this + 22) )
  {
    v10 = 0LL;
    v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29,
           &v10);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x222,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 88LL))(v10, *((_QWORD *)this + 22));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x223,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    *((_QWORD *)this + 22) = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  if ( *((_QWORD *)this + 34) )
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 34);
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    if ( *((_DWORD *)this + 46) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    if ( *((_DWORD *)this + 47) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 48LL))(*((_QWORD *)this + 36));
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 36);
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  v5 = *((_QWORD *)this + 37);
  if ( v5 && *((_DWORD *)this + 48) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 37);
  *((_DWORD *)this + 48) = 0;
  return 0LL;
}
