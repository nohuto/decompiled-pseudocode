/*
 * XREFs of ?ApplyModelTransformFromConfiguration@ViewerEngine@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ??$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VCamera@23@@std@@YA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@@Z @ 0x180063140 (--$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VCamera@23@@std@@YA-AV-$shared_ptr@VViewer.c)
 *     ?UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@_N1@Z @ 0x18006B874 (-UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VViewerCa.c)
 *     ?UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_N@Z @ 0x18006BA5C (-UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@S.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ViewerEngine::ApplyModelTransformFromConfiguration(
        Spectre::Engine::Engine *this,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+48h] [rbp-10h]

  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v9,
         a2);
  Spectre::Engine::Engine::GetCamera((__int64)this, &v7, v5, v4);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 440) & 0x2000000) != 0 )
    {
      std::dynamic_pointer_cast<Spectre::Engine::ViewerCamera,Spectre::Engine::Camera>(&v10, &v7);
      Spectre::Engine::ViewerEngine::UpdateModelFromCameraConfiguration(this);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
  }
  LOBYTE(v6) = 1;
  Spectre::Engine::ViewerEngine::UpdateModelFromConfiguration(this, a2, v6);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
