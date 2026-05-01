/*
 * XREFs of ??$make@VSnapWindowProvider@SnapLauncher@@AEAH@winrt@@YA?A_PAEAH@Z @ 0x18022DD20
 * Callers:
 *     ?TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z @ 0x18022E03C (-TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<SnapLauncher::SnapWindowProvider,int &>(_QWORD *a1, int *a2)
{
  _QWORD *v4; // r8
  int v5; // edx
  _QWORD *result; // rax

  v4 = operator new(0x38uLL);
  v5 = *a2;
  *v4 = &winrt::impl::producers_base<SnapLauncher::SnapWindowProvider,std::tuple<IObjectWithSite,IServiceProvider,IUpdateViewValueSet>>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IObjectWithSite,void>'};
  v4[1] = &winrt::impl::producers_base<SnapLauncher::SnapWindowProvider,std::tuple<IObjectWithSite,IServiceProvider,IUpdateViewValueSet>>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IUpdateViewValueSet,void>'};
  v4[2] = &winrt::impl::producers_base<SnapLauncher::SnapWindowProvider,std::tuple<IObjectWithSite,IServiceProvider,IUpdateViewValueSet>>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IUpdateViewValueSet,void>'};
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 8) = 1;
  v4[1] = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IServiceProvider,void>'};
  v4[2] = &SnapLauncher::SnapWindowProvider::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IUpdateViewValueSet,void>'};
  v4[3] = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable';
  v4[5] = 0LL;
  *v4 = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IObjectWithSite,void>'};
  v4[1] = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IServiceProvider,void>'};
  v4[2] = &SnapLauncher::SnapWindowProvider::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IUpdateViewValueSet,void>'};
  v4[3] = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable';
  result = a1;
  *((_DWORD *)v4 + 12) = v5;
  *a1 = v4;
  return result;
}
