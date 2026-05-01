/*
 * XREFs of ??0WindowSizeConverter@@QEAA@XZ @ 0x1800B506C
 * Callers:
 *     ??$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B4FA0 (--$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B5124 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_1800B5124.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1801093CC (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
WindowSizeConverter *__fastcall WindowSizeConverter::WindowSizeConverter(WindowSizeConverter *this)
{
  size_t size_of; // rax
  _QWORD *v3; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>();
  *(_QWORD *)this = &WindowSizeConverter::`vftable';
  *((_QWORD *)this + 3) = &WindowSizeConverter::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &WindowSizeConverter::`vftable'{for `IWindowSizeConversionLogicalClientToWindow'};
  *((_QWORD *)this + 12) = &WindowSizeConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 17) = v3;
  *((_DWORD *)this + 38) = 0;
  return this;
}
