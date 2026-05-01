/*
 * XREFs of ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180681FFC
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x18022A840 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_18022A840.c)
 *     _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator() @ 0x180682DD8 (_lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_--operator().c)
 *     _lambda_ac2a839fec59629fce3443c282716c2d_::operator() @ 0x180682F88 (_lambda_ac2a839fec59629fce3443c282716c2d_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, GUID *, void *, __int64 *),
        _QWORD *a3)
{
  signed int v4; // eax
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = a2(
         *a3,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &winrt::impl::guid_v<Windows::Internal::Shell::WindowSnapping::ISnapComponent2>,
         &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v6;
  return a1;
}
