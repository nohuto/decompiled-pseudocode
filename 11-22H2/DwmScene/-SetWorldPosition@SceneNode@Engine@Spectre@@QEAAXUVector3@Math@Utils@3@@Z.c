/*
 * XREFs of ?SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003DA80
 * Callers:
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?Invert@Matrix@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x1800189F4 (-Invert@Matrix@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?Transform@Vector3@Math@Utils@Spectre@@SA?AU1234@AEBU1234@AEBUMatrix@234@@Z @ 0x18003DCF4 (-Transform@Vector3@Math@Utils@Spectre@@SA-AU1234@AEBU1234@AEBUMatrix@234@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::SceneNode::SetWorldPosition(Spectre::Engine::SceneNode *a1, __int64 a2)
{
  char v4; // bl
  __int64 *Parent; // rax
  __int128 *WorldTransformMatrix; // rax
  __int64 v7; // [rsp+28h] [rbp-89h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-81h]
  __int64 v9; // [rsp+38h] [rbp-79h] BYREF
  std::_Ref_count_base *v10; // [rsp+40h] [rbp-71h]
  _OWORD v11[4]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v12[4]; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v13[4]; // [rsp+C8h] [rbp+17h] BYREF

  v4 = 0;
  if ( *Spectre::Engine::SceneNode::GetParent(a1, &v7) )
  {
    Parent = Spectre::Engine::SceneNode::GetParent(a1, &v9);
    v4 = 1;
    WorldTransformMatrix = Spectre::Engine::SceneNode::GetWorldTransformMatrix(*Parent, v13);
  }
  else
  {
    v11[0] = Spectre::Utils::Math::Matrix::Identity;
    v11[1] = xmmword_180106A40;
    v11[2] = xmmword_180106A50;
    v11[3] = xmmword_180106A60;
    WorldTransformMatrix = v11;
  }
  v12[0] = *WorldTransformMatrix;
  v12[1] = WorldTransformMatrix[1];
  v12[2] = WorldTransformMatrix[2];
  v12[3] = WorldTransformMatrix[3];
  if ( (v4 & 1) != 0 && v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  Spectre::Utils::Math::Matrix::Invert(v12, (__int64)v11);
  Spectre::Utils::Math::Vector3::Transform(&v7, a2, v11);
  v9 = v7;
  LODWORD(v10) = (_DWORD)v8;
  Spectre::Engine::SceneNode::SetPosition(a1, &v9);
}
