/*
 * XREFs of ?ClipOutAppRectWhenNotActive@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E6D0
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800465EC (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802FF440 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall UndockedSearchAppExperienceManager::ClipOutAppRectWhenNotActive(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  int v7; // r9d
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    v6 = SearchAppLauncherLogging::Provider(v5);
    if ( *(_DWORD *)v6 > 5u )
    {
      *(_QWORD *)&v8 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (_DWORD)v6,
        (unsigned int)&unk_1806AAB72,
        0,
        v7,
        (__int64)&v8);
    }
    if ( v4 )
    {
      v8 = 0LL;
      v9 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, __int128 *))(**((_QWORD **)this + 12) + 16LL))(
        *((_QWORD *)this + 12),
        v4,
        &v9,
        &v8);
    }
  }
}
