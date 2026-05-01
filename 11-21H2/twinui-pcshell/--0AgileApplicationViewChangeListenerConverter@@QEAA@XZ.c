/*
 * XREFs of ??0AgileApplicationViewChangeListenerConverter@@QEAA@XZ @ 0x1801117E0
 * Callers:
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180111718 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewChangeListener@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180111854 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewChangeListener@@VFtmB.c)
 */

AgileApplicationViewChangeListenerConverter *__fastcall AgileApplicationViewChangeListenerConverter::AgileApplicationViewChangeListenerConverter(
        AgileApplicationViewChangeListenerConverter *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>(this);
  *((_DWORD *)this + 22) = -2;
  *((_DWORD *)this + 23) = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *(_QWORD *)this = &AgileApplicationViewChangeListenerConverter::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 1) = &AgileApplicationViewChangeListenerConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
