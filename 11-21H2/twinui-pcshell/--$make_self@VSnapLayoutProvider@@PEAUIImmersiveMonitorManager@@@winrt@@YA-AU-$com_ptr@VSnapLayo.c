/*
 * XREFs of ??$make_self@VSnapLayoutProvider@@PEAUIImmersiveMonitorManager@@@winrt@@YA?AU?$com_ptr@VSnapLayoutProvider@@@0@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18016950C
 * Callers:
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800DB690 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 *     ?GetData@CShellSnapComponent@@UEAAXPEAPEAXPEA_J0@Z @ 0x180593470 (-GetData@CShellSnapComponent@@UEAAXPEAPEAXPEA_J0@Z.c)
 * Callees:
 *     ??0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z @ 0x180169570 (--0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

SnapLayoutProvider **__fastcall winrt::make_self<SnapLayoutProvider,IImmersiveMonitorManager *>(
        SnapLayoutProvider **a1,
        struct IImmersiveMonitorManager **a2)
{
  SnapLayoutProvider *v4; // rdi
  SnapLayoutProvider **result; // rax

  v4 = (SnapLayoutProvider *)operator new(0xA0uLL);
  SnapLayoutProvider::SnapLayoutProvider(v4, *a2);
  *(_QWORD *)v4 = &SnapLayoutProvider::`vftable'{for `winrt::impl::producers_base<SnapLayoutProvider,std::tuple<IInspectable>>'};
  *((_QWORD *)v4 + 1) = &winrt::impl::heap_implements<SnapLayoutProvider>::`vftable'{for `winrt::impl::root_implements<SnapLayoutProvider,IInspectable>'};
  result = a1;
  *a1 = v4;
  return result;
}
