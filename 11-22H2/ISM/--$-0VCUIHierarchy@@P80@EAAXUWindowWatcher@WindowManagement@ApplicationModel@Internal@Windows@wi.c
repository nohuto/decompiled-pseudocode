/*
 * XREFs of ??$?0VCUIHierarchy@@P80@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Z@?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCUIHierarchy@@P84@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@23@UWindowChangedEventArgs@67823@@Z@Z @ 0x1800AD374
 * Callers:
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AFBB0 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>(
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
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>,_lambda_8796a88b72841d6ebf3a72c1da83edbf_>::`vftable';
  *a1 = v6;
  return a1;
}
