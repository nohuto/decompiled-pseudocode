/*
 * XREFs of ??0StartupAppMonitor@@QEAA@XZ @ 0x18010A6FC
 * Callers:
 *     ??$MakeAndInitialize@VStartupAppMonitor@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18017245C (--$MakeAndInitialize@VStartupAppMonitor@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0REGKEYINFO@@QEAA@PEAUHKEY__@@PEBGW4StartupAppLocation@@1@Z @ 0x18010AA24 (--0REGKEYINFO@@QEAA@PEAUHKEY__@@PEBGW4StartupAppLocation@@1@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180167064 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFt.c)
 */

// Hidden C++ exception states: #wind=8
StartupAppMonitor *__fastcall StartupAppMonitor::StartupAppMonitor(StartupAppMonitor *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &StartupAppMonitor::`vftable'{for `Microsoft::WRL::Details::Selector<CServiceHostComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 5) = &StartupAppMonitor::`vftable'{for `IServiceHostComponent'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &StartupAppMonitor::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 18) = v2;
  *((_OWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  REGKEYINFO::REGKEYINFO(
    (char *)this + 184,
    -2147483646LL,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Run",
    0LL,
    L"Run");
  REGKEYINFO::REGKEYINFO(
    (char *)this + 288,
    -2147483647LL,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Run",
    1LL,
    L"Run");
  REGKEYINFO::REGKEYINFO(
    (char *)this + 392,
    -2147483646LL,
    L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run",
    2LL,
    L"Run32");
  *((GUID *)this + 31) = FOLDERID_CommonStartup;
  *((_DWORD *)this + 128) = 3;
  *((_QWORD *)this + 65) = -2147483646LL;
  std::wstring::wstring((_QWORD *)this + 66, L"StartupFolder");
  *((_OWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *(GUID *)((char *)this + 584) = FOLDERID_Startup;
  *((_DWORD *)this + 150) = 4;
  *((_QWORD *)this + 76) = -2147483647LL;
  std::wstring::wstring((_QWORD *)this + 77, L"StartupFolder");
  *(_OWORD *)((char *)this + 648) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  return this;
}
