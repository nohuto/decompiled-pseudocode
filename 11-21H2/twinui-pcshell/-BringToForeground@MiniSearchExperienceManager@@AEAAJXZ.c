/*
 * XREFs of ?BringToForeground@MiniSearchExperienceManager@@AEAAJXZ @ 0x1801A74F4
 * Callers:
 *     ?ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z @ 0x1801A731C (-ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803A23E0 (-OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowSt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800467B0 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008FBF8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MiniSearchExperienceManager::BringToForeground(MiniSearchExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = SearchAppLauncherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v2,
      (int)&unk_1806AED8B,
      0);
  if ( *((_QWORD *)this + 5) )
  {
    v8 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
           &v8);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
      if ( v5 >= 0 )
        v3 = 0;
      else
        v3 = v5;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  }
  else
  {
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)0x8007139FLL);
  }
  return v3;
}
