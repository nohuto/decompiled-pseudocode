/*
 * XREFs of ?Clone@EngineSceneData@Engine@2Spectre@@UEAA?AV?$shared_ptr@USceneCustomData@Engine@Spectre@@@std@@AEBVScene@23@AEAV623@@Z @ 0x180032B40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@UEngineSceneData@Engine@2Spectre@@$$V@std@@YA?AV?$shared_ptr@UEngineSceneData@Engine@2Spectre@@@0@XZ @ 0x180030018 (--$make_shared@UEngineSceneData@Engine@2Spectre@@$$V@std@@YA-AV-$shared_ptr@UEngineSceneData@Eng.c)
 */

_QWORD *__fastcall Spectre::Engine::Engine::EngineSceneData::Clone(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v3 = std::make_shared<Spectre::Engine::Engine::EngineSceneData,>(&v7);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  v5 = v3[1];
  v3[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
