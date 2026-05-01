/*
 * XREFs of ??0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z @ 0x180169570
 * Callers:
 *     ??$make_self@VSnapLayoutProvider@@PEAUIImmersiveMonitorManager@@@winrt@@YA?AU?$com_ptr@VSnapLayoutProvider@@@0@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18016950C (--$make_self@VSnapLayoutProvider@@PEAUIImmersiveMonitorManager@@@winrt@@YA-AU-$com_ptr@VSnapLayo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SnapLayoutProvider *__fastcall SnapLayoutProvider::SnapLayoutProvider(
        SnapLayoutProvider *this,
        struct IImmersiveMonitorManager *a2)
{
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &SnapLayoutProvider::`vftable'{for `winrt::impl::producers_base<SnapLayoutProvider,std::tuple<IInspectable>>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<SnapLayoutProvider>::`vftable'{for `winrt::impl::root_implements<SnapLayoutProvider,IInspectable>'};
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveMonitorManager *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 250LL;
  return this;
}
