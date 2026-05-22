/*
 * XREFs of ?Removed@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800825D0
 * Callers:
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800865A0 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Removed(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 96LL))(*a1, *a3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  return a2;
}
