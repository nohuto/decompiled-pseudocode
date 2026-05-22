/*
 * XREFs of ??$?0VViewHierarchyWithWindowManager@@P80@EAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Z@?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVViewHierarchyWithWindowManager@@P84@EAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@23@UAppViewChangedEventArgs@67823@@Z@Z @ 0x180048E08
 * Callers:
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180048CFC (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v5; // [rsp+20h] [rbp-18h]
  char *v6; // [rsp+40h] [rbp+8h]

  *(_QWORD *)&v5 = a2;
  *((_QWORD *)&v5 + 1) = a3;
  v6 = (char *)operator new(0x20uLL);
  *(_OWORD *)(v6 + 8) = v5;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>,_lambda_e811ed625de1c9f36d6dae6db721db2b_>::`vftable';
  *a1 = v6;
  return a1;
}
