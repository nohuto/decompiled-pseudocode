/*
 * XREFs of ?RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C850
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013E14 (--$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VBounds@E.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ?GetCorners@BoundingBox@DirectX@@QEBAXPEAUXMFLOAT3@2@@Z @ 0x18004A35C (-GetCorners@BoundingBox@DirectX@@QEBAXPEAUXMFLOAT3@2@@Z.c)
 *     ?RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z @ 0x1800814B8 (-RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::MeshInstance::RenderSymbols(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  Spectre::Engine::SceneNode **SceneNode; // rax
  __int64 v7; // [rsp+30h] [rbp-B8h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-B0h]
  __int64 v9; // [rsp+40h] [rbp-A8h] BYREF
  std::_Ref_count_base *v10; // [rsp+48h] [rbp-A0h]
  __int128 v11; // [rsp+50h] [rbp-98h]
  __int128 v12; // [rsp+60h] [rbp-88h]
  char v13[96]; // [rsp+70h] [rbp-78h] BYREF

  v5 = *(_DWORD *)(*(_QWORD *)a4 + 440LL);
  if ( (v5 & 0x10000) != 0 && (v5 & 0x800000) != 0 )
  {
    SceneNode = (Spectre::Engine::SceneNode **)Spectre::Engine::Component::GetSceneNode(a1, &v9);
    Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Bounds>(*SceneNode, &v7);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    if ( v7 )
    {
      `vector constructor iterator'(v13, 12LL, 8LL, (void (__fastcall *)(char *))Spectre::Utils::Math::Vector3::Vector3);
      DirectX::BoundingBox::GetCorners((DirectX::BoundingBox *)(v7 + 88), (struct DirectX::XMFLOAT3 *)v13);
      v11 = _xmm;
      v12 = _xmm;
      Spectre::Engine::Component::RenderSymbolLine3D(a1);
    }
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
}
