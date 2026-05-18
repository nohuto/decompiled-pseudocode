/*
 * XREFs of ?UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DE70
 * Callers:
 *     ?UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DBC8 (-UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?Invert@Matrix@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x1800189F4 (-Invert@Matrix@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ?IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z @ 0x18005BD74 (-IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z.c)
 *     ?SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z @ 0x18005D494 (-SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Spectre::Engine::Camera::UpdateViewMatrixStage(Spectre::Engine::Camera *this)
{
  __int128 *v2; // r9
  __int64 v4; // [rsp+20h] [rbp-79h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-71h]
  __int128 v6; // [rsp+30h] [rbp-69h] BYREF
  __int128 v7; // [rsp+40h] [rbp-59h]
  __int128 v8; // [rsp+50h] [rbp-49h]
  __int128 v9; // [rsp+60h] [rbp-39h]
  __int128 v10; // [rsp+70h] [rbp-29h] BYREF
  __int128 v11; // [rsp+80h] [rbp-19h]
  __int128 v12; // [rsp+90h] [rbp-9h]
  __int128 v13; // [rsp+A0h] [rbp+7h]
  __int128 v14[4]; // [rsp+B0h] [rbp+17h] BYREF

  if ( (*((_BYTE *)this + 544) & 1) == 0 || Spectre::Engine::Camera::IsTransformStateLocked(this, 1) )
    return 0;
  Spectre::Engine::Component::GetSceneNode((__int64)this, &v4);
  if ( std::operator!=<Spectre::Engine::Scene>(&v4) )
  {
    Spectre::Engine::SceneNode::GetWorldTransformMatrix(v4, v14);
    Spectre::Utils::Math::Matrix::Invert(v14, (__int64)&v6);
    v10 = v14[0];
    v11 = v14[1];
    v12 = v14[2];
    v13 = v14[3];
    Spectre::Engine::Camera::SetTransformMatrix((__int64)this, 1, 0, &v10);
    v10 = v6;
    v11 = v7;
    v12 = v8;
    v13 = v9;
    v2 = &v10;
  }
  else
  {
    v6 = Spectre::Utils::Math::Matrix::Identity;
    v7 = xmmword_180106A40;
    v8 = xmmword_180106A50;
    v9 = xmmword_180106A60;
    Spectre::Engine::Camera::SetTransformMatrix((__int64)this, 1, 0, &v6);
    v6 = Spectre::Utils::Math::Matrix::Identity;
    v7 = xmmword_180106A40;
    v8 = xmmword_180106A50;
    v9 = xmmword_180106A60;
    v2 = &v6;
  }
  Spectre::Engine::Camera::SetTransformMatrix((__int64)this, 0, 1, v2);
  *((_DWORD *)this + 136) &= ~1u;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return 1;
}
