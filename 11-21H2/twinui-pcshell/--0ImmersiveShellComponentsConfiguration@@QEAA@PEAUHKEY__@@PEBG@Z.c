/*
 * XREFs of ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803AF970
 * Callers:
 *     ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1803AF348 (--$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA-AU-$com_ptr@UImm.c)
 * Callees:
 *     ??0ComponentCreator@@QEAA@XZ @ 0x180142848 (--0ComponentCreator@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAXXZ @ 0x18022BD9C (-_Tidy@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndI.c)
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803B040C (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 */

// Hidden C++ exception states: #wind=5
ImmersiveShellComponentsConfiguration *__fastcall ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration(
        ImmersiveShellComponentsConfiguration *this,
        HKEY a2,
        const unsigned __int16 *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *Components; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  _BYTE v13[24]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-48h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<IVoiceAssistantPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>'};
  *((_QWORD *)this + 1) = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::root_implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>'};
  v6 = (_QWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v7 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v8 = (_QWORD *)((char *)this + 72);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  ComponentCreator::ComponentCreator((ImmersiveShellComponentsConfiguration *)((char *)this + 96));
  Components = (_QWORD *)ImmersiveShellComponentsConfiguration::GetComponents(v13, a2, a3, L"Components");
  if ( v6 != Components )
  {
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v6);
    *v6 = *Components;
    v6[1] = Components[1];
    v6[2] = Components[2];
    *Components = 0LL;
    Components[1] = 0LL;
    Components[2] = 0LL;
  }
  std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v13);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6[1] - *v6) >> 3) )
  {
    v10 = (_QWORD *)ImmersiveShellComponentsConfiguration::GetComponents(v14, a2, a3, L"PerMonitorComponents");
    if ( v7 != v10 )
    {
      std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v7);
      *v7 = *v10;
      v7[1] = v10[1];
      v7[2] = v10[2];
      *v10 = 0LL;
      v10[1] = 0LL;
      v10[2] = 0LL;
    }
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v14);
    v11 = (_QWORD *)ImmersiveShellComponentsConfiguration::GetComponents(v15, a2, a3, L"PerProxyMonitorComponents");
    if ( v8 != v11 )
    {
      std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v8);
      *v8 = *v11;
      v8[1] = v11[1];
      v8[2] = v11[2];
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)v15);
  }
  return this;
}
