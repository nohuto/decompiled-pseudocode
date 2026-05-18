/*
 * XREFs of ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C
 * Callers:
 *     ?SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z @ 0x18001AF10 (-SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z.c)
 *     ?InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z @ 0x180034A30 (-InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z.c)
 *     ?GetFramePresentationMaximumLatency@RenderDeviceGeneric@Engine@Spectre@@UEBAIXZ @ 0x180053350 (-GetFramePresentationMaximumLatency@RenderDeviceGeneric@Engine@Spectre@@UEBAIXZ.c)
 *     ?SetFramePresentationMaximumLatency@RenderDeviceGeneric@Engine@Spectre@@UEAAXI@Z @ 0x180053980 (-SetFramePresentationMaximumLatency@RenderDeviceGeneric@Engine@Spectre@@UEAAXI@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@5@V?$TransformationDefault@M@123@@Z @ 0x18009165C (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@.c)
 *     ?IsFeatureSupported@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NW4DeviceFeature@34@@Z @ 0x1800C68A0 (-IsFeatureSupported@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NW4DeviceFeature@34@@Z.c)
 *     ?LoadConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4LoadPolicy@IConfigurationManager@23@@Z @ 0x1800DECB0 (-LoadConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAAXAEBV-$basic_string@_WU-$char_tra.c)
 *     ?SerializeConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@Z @ 0x1800DEDA0 (-SerializeConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAA-AV-$basic_string@_WU-$char_.c)
 *     ?SerializeConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@5@V45@@Z @ 0x1800DEE30 (-SerializeConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAA-AV-$basic_stri_ea_1800DEE30.c)
 *     ??0CancelledException@Utils@Spectre@@QEAA@XZ @ 0x1800DFE08 (--0CancelledException@Utils@Spectre@@QEAA@XZ.c)
 *     ??0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800E1A7C (--0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::SpectreException::SpectreException(__int64 a1, const char *a2, char a3)
{
  const char *v4; // rbx
  const char *v6; // rax
  __int64 v7; // rdx

  v4 = a2;
  v6 = a2;
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v6 = *(const char **)a2;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  std::string::string((_QWORD *)(a1 + 16), (__int64)a2);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  if ( a3 )
  {
    if ( *((_QWORD *)v4 + 3) >= 0x10uLL )
      v4 = *(const char **)v4;
    v7 = 4LL;
  }
  else
  {
    if ( *((_QWORD *)v4 + 3) >= 0x10uLL )
      v4 = *(const char **)v4;
    v7 = 3LL;
  }
  Trace::LevelSettingsWrapper::Output(&gTraceLevelsSmartThrow, v7, "Throwing SpectreException with message '%s'", v4);
  return a1;
}
