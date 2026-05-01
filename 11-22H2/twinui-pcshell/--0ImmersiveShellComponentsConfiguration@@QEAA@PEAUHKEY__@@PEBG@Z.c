/*
 * XREFs of ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x180489E08
 * Callers:
 *     ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1804897D0 (--$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA-AU-$com_ptr@UImm.c)
 * Callees:
 *     ??0ComponentCreator@@QEAA@XZ @ 0x180180450 (--0ComponentCreator@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAXXZ @ 0x1802D36E4 (-_Tidy@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndI.c)
 *     ??4?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18048A150 (--4-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo@.c)
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x18048A58C (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 */

// Hidden C++ exception states: #wind=5
ImmersiveShellComponentsConfiguration *__fastcall ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration(
        ImmersiveShellComponentsConfiguration *this,
        HKEY a2,
        const unsigned __int16 *a3)
{
  _QWORD *v6; // rbx
  __int64 Components; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<IVoiceAssistantPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>'};
  *((_QWORD *)this + 1) = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::root_implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>'};
  v6 = (_QWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  ComponentCreator::ComponentCreator((ImmersiveShellComponentsConfiguration *)((char *)this + 96));
  Components = ImmersiveShellComponentsConfiguration::GetComponents(v11, a2, a3, L"Components");
  std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=(v6, Components);
  std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v11);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6[1] - *v6) >> 3) )
  {
    v8 = ImmersiveShellComponentsConfiguration::GetComponents(v12, a2, a3, L"PerMonitorComponents");
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=((char *)this + 48, v8);
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v12);
    v9 = ImmersiveShellComponentsConfiguration::GetComponents(v13, a2, a3, L"PerProxyMonitorComponents");
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=((char *)this + 72, v9);
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v13);
  }
  return this;
}
