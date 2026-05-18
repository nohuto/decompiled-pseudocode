/*
 * XREFs of ??$make_shared@UEngineSceneData@Engine@2Spectre@@$$V@std@@YA?AV?$shared_ptr@UEngineSceneData@Engine@2Spectre@@@0@XZ @ 0x180030018
 * Callers:
 *     ??$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DBBC (--$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneDat.c)
 *     ?Clone@EngineSceneData@Engine@2Spectre@@UEAA?AV?$shared_ptr@USceneCustomData@Engine@Spectre@@@std@@AEBVScene@23@AEAV623@@Z @ 0x180032B40 (-Clone@EngineSceneData@Engine@2Spectre@@UEAA-AV-$shared_ptr@USceneCustomData@Engine@Spectre@@@st.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::Engine::EngineSceneData,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx

  v2 = operator new(0x38uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Engine::EngineSceneData>::`vftable';
    *((_QWORD *)v2 + 2) = &Spectre::Engine::Engine::EngineSceneData::`vftable';
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
