/*
 * XREFs of ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801B0338
 * Callers:
 *     ?UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B0310 (-UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180174EA4 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::UnsubscribeFromServicesInternal(
        CortanaStoreAppExperienceManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  _DWORD *v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

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
    v14 = 0LL;
    v11 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29,
            &v14);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BE,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, *((_QWORD *)this + 22));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    *((_QWORD *)this + 22) = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  if ( *((_QWORD *)this + 34) )
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 34);
  v4 = *((_QWORD *)this + 36);
  v5 = (_DWORD *)((char *)this + 184);
  if ( v4 )
  {
    if ( *v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    v6 = (_DWORD *)((char *)this + 188);
    if ( *((_DWORD *)this + 47) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 48LL))(*((_QWORD *)this + 36));
  }
  else
  {
    v6 = (_DWORD *)((char *)this + 188);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 36);
  *v5 = 0;
  *v6 = 0;
  v7 = (__int64 *)((char *)this + 296);
  v8 = *((_QWORD *)this + 37);
  v9 = (_DWORD *)((char *)this + 192);
  if ( v8 && *v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  *v9 = 0;
  return 0LL;
}
