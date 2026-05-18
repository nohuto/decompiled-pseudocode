/*
 * XREFs of ?GetTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C2B4
 * Callers:
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 * Callees:
 *     ?UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ @ 0x18003E150 (-UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

_OWORD *__fastcall Spectre::Engine::SceneNode::GetTransformMatrix(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  Spectre::Engine::SceneNode::VerifyReadAccess((Spectre::Engine::SceneNode *)a1);
  if ( *(_QWORD *)(a1 + 352) != *(_QWORD *)(a1 + 208) )
    Spectre::Engine::SceneNode::UpdateTransformMatrix((Spectre::Engine::SceneNode *)a1);
  result = a2;
  v5 = *(_OWORD *)(a1 + 240);
  *a2 = *(_OWORD *)(a1 + 224);
  v6 = *(_OWORD *)(a1 + 256);
  a2[1] = v5;
  v7 = *(_OWORD *)(a1 + 272);
  a2[2] = v6;
  a2[3] = v7;
  return result;
}
