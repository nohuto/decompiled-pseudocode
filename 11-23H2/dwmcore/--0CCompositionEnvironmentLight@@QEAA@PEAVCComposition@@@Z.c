/*
 * XREFs of ??0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z @ 0x18026DC50
 * Callers:
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x18026314C (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180023D04 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionEnvironmentLight *__fastcall CCompositionEnvironmentLight::CCompositionEnvironmentLight(
        CCompositionEnvironmentLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CCompositionLight::CCompositionLight(this, a2, 1);
  *(_DWORD *)(v2 + 256) = 1065353216;
  *(_QWORD *)(v2 + 80) = &CCompositionEnvironmentLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionEnvironmentLight::`vftable'{for `CPropertyChangeResource'};
  *(_OWORD *)(v2 + 260) = xmmword_1803B8E70;
  *(_OWORD *)(v2 + 276) = xmmword_1803B8E80;
  *(_OWORD *)(v2 + 292) = xmmword_1803B8E90;
  *(_OWORD *)(v2 + 308) = xmmword_1803B8EA0;
  *(_OWORD *)(v2 + 324) = xmmword_1803B8EB0;
  *(_OWORD *)(v2 + 340) = xmmword_1803B8EC0;
  *(_QWORD *)(v2 + 356) = 0xBF3B531EBD893965uLL;
  *(_DWORD *)(v2 + 364) = 1059333266;
  return (CCompositionEnvironmentLight *)v2;
}
