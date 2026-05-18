/*
 * XREFs of ?GetTweenManager@Engine@1Spectre@@QEBA?AV?$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x1800348A4
 * Callers:
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ?StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093110 (-StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ.c)
 *     ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290 (-StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$GetCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DF5C (--$GetCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneDat.c)
 *     ??$_Construct_in_place@VTweenManager@Tweening@Utils@Spectre@@$$V@std@@YAXAEAVTweenManager@Tweening@Utils@Spectre@@@Z @ 0x18002E0AC (--$_Construct_in_place@VTweenManager@Tweening@Utils@Spectre@@$$V@std@@YAXAEAVTweenManager@Tweeni.c)
 */

_QWORD *__fastcall Spectre::Engine::Engine::GetTweenManager(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rax

  v4 = (_QWORD *)(Spectre::Engine::Scene::GetCustomData<Spectre::Engine::Engine::EngineSceneData>(*a3) + 8);
  if ( std::operator==<Spectre::Engine::Scene>(v4) )
  {
    v5 = operator new(0xA8uLL);
    v6 = v5;
    if ( v5 )
    {
      v5[2] = 1;
      v5[3] = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::TweenManager>::`vftable';
      std::_Construct_in_place<Spectre::Utils::Tweening::TweenManager,>((__int64)(v5 + 4));
    }
    else
    {
      v6 = 0LL;
    }
    *v4 = v6 + 4;
    v7 = (std::_Ref_count_base *)v4[1];
    v4[1] = v6;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = v4[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a2 = *v4;
  a2[1] = v4[1];
  return a2;
}
