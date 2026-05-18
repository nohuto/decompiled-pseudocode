/*
 * XREFs of ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148
 * Callers:
 *     ?CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUISpectreTexture@@@Z @ 0x180018620 (-CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUI.c)
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 *     ?PrintDevices@Engine@1Spectre@@QEAAXXZ @ 0x1800358C4 (-PrintDevices@Engine@1Spectre@@QEAAXXZ.c)
 *     ?SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ @ 0x18003691C (-SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 *     ?GetDeviceCount@Engine@1Spectre@@QEBAIXZ @ 0x1800341E4 (-GetDeviceCount@Engine@1Spectre@@QEBAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::Engine::GetDevice(Spectre::Engine::Engine *this, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 112), (__int64)v8);
  if ( (unsigned int)v3 >= Spectre::Engine::Engine::GetDeviceCount(this) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = (unsigned int)v3;
    if ( (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 4 <= v3 )
    {
      std::_Xout_of_range("invalid vector subscript");
      __debugbreak();
    }
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      a2,
      (_QWORD *)(*((_QWORD *)this + 11) + 16 * v6));
  }
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v8);
  return a2;
}
