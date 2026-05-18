/*
 * XREFs of ?SetEnvironmentLightingOrientation@ViewerEngine@Engine@Spectre@@QEAAXAEBUQuaternion@Math@Utils@3@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067D40
 * Callers:
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?SetOrientation@LightProbe@Engine@Spectre@@QEAAXAEBUQuaternion@Math@Utils@3@@Z @ 0x180051C10 (-SetOrientation@LightProbe@Engine@Spectre@@QEAAXAEBUQuaternion@Math@Utils@3@@Z.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 */

void __fastcall Spectre::Engine::ViewerEngine::SetEnvironmentLightingOrientation(
        __int64 a1,
        const struct Spectre::Utils::Math::Quaternion *a2,
        __int64 *a3)
{
  __int64 v4; // rax
  char v5; // r9
  __int64 *v6; // r8
  __int64 *v7; // r8
  __int64 **v8; // rcx
  __int64 *j; // rax
  __int64 *i; // rcx

  v4 = Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(*a3);
  v5 = 0;
  v6 = **(__int64 ***)(v4 + 104);
  while ( *((_BYTE *)v6 + 25) == v5 )
  {
    Spectre::Engine::LightProbe::SetOrientation((Spectre::Engine::LightProbe *)v6[5], a2);
    v8 = (__int64 **)v7[2];
    if ( *((_BYTE *)v8 + 25) == v5 )
    {
      v6 = (__int64 *)v7[2];
      for ( i = *v8; *((_BYTE *)i + 25) == v5; i = (__int64 *)*i )
        v6 = i;
    }
    else
    {
      for ( j = (__int64 *)v7[1]; *((_BYTE *)j + 25) == v5 && v7 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v7 = j;
      v6 = j;
    }
  }
}
