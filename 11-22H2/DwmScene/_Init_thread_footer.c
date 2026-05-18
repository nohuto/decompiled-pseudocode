/*
 * XREFs of _Init_thread_footer @ 0x18000C538
 * Callers:
 *     ?GetAreaList@Trace@@YAAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@@std@@XZ @ 0x18001D3E4 (-GetAreaList@Trace@@YAAEAV-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PE.c)
 *     ?GetAreaListCriticalLock@Trace@@YAAEAVmutex@std@@XZ @ 0x18001D470 (-GetAreaListCriticalLock@Trace@@YAAEAVmutex@std@@XZ.c)
 *     ?GetHandlerMap@Trace@@YAAEAV?$map@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@@std@@XZ @ 0x18001D51C (-GetHandlerMap@Trace@@YAAEAV-$map@IV-$function@$$A6AXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?GetHandlerMapCriticalLock@Trace@@YAAEAVmutex@std@@XZ @ 0x18001D594 (-GetHandlerMapCriticalLock@Trace@@YAAEAVmutex@std@@XZ.c)
 *     _anonymous_namespace_::GetMSCountSinceStartAccurate @ 0x18001D618 (_anonymous_namespace_--GetMSCountSinceStartAccurate.c)
 *     Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate @ 0x18007C198 (Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase--GetOrCreate.c)
 *     ?GetSerializablePropertyLayer@BaseShaderExtension@Engine@Spectre@@UEBA?AW4Layer@MaterialMaker@Framework@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009A630 (-GetSerializablePropertyLayer@BaseShaderExtension@Engine@Spectre@@UEBA-AW4Layer@MaterialMaker@Fr.c)
 *     ?GetOptionNameArray@BackgroundUnlit@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800A577C (-GetOptionNameArray@BackgroundUnlit@ShaderProgramGenerator@@YAPEBV-$basic_string@DU-$char_traits.c)
 *     ?RegisterShaders@BackgroundUnlit@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A5868 (-RegisterShaders@BackgroundUnlit@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?GetOptionNameArray@ImageProcessingBlur@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800A762C (-GetOptionNameArray@ImageProcessingBlur@ShaderProgramGenerator@@YAPEBV-$basic_string@DU-$char_tr.c)
 *     ?GetOptionNameArray@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800A76D4 (-GetOptionNameArray@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEBV-$basic_string@DU.c)
 *     ?GetOptionNameArray@ImageProcessingFullscreen@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800A77C0 (-GetOptionNameArray@ImageProcessingFullscreen@ShaderProgramGenerator@@YAPEBV-$basic_string@DU-$c.c)
 *     ?RegisterShaders@ImageProcessingBlur@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A783C (-RegisterShaders@ImageProcessingBlur@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A7D40 (-RegisterShaders@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@ImageProcessingFullscreen@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AF408 (-RegisterShaders@ImageProcessingFullscreen@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?GetOptionNameArray@Font@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800AF620 (-GetOptionNameArray@Font@ShaderProgramGenerator@@YAPEBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?RegisterShaders@Font@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AF69C (-RegisterShaders@Font@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?GetOptionNameArray@UnlitShader@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800AF954 (-GetOptionNameArray@UnlitShader@ShaderProgramGenerator@@YAPEBV-$basic_string@DU-$char_traits@D@s.c)
 *     ?RegisterShaders@UnlitShader@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AFA28 (-RegisterShaders@UnlitShader@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?GetOptionNameArray@StandardShader@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800B198C (-GetOptionNameArray@StandardShader@ShaderProgramGenerator@@YAPEBV-$basic_string@DU-$char_traits@.c)
 *     ?RegisterShaders@StandardShader@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800B1AB4 (-RegisterShaders@StandardShader@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CalculateFinalDepthBias @ 0x1800D4CAC (Spectre--Engine--D3D11--_anonymous_namespace_--CalculateFinalDepthBias.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 16LL) = Init_global_epoch;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
