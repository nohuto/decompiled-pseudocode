/*
 * XREFs of ?Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@Utils@3@AEAV?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@@Z @ 0x1800959E0
 * Callers:
 *     ?GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA?AV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@AEBVCamera@23@@Z @ 0x180095840 (-GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA-AV-$vector@PEAVSceneNod.c)
 *     ?Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@Utils@3@AEAV?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@@Z @ 0x1800959E0 (-Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@.c)
 * Callees:
 *     ?GetWorldPosition@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C334 (-GetWorldPosition@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEAMAEAPEAVSceneNode@Engine@Spectre@@@?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@QEAAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU2345@AEAMAEAPEAVSceneNode@45@@Z @ 0x180094A84 (--$_Emplace_reallocate@AEAMAEAPEAVSceneNode@Engine@Spectre@@@-$vector@UNodeInfo@DistanceFromCame.c)
 *     ?Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@Utils@3@AEAV?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@@Z @ 0x1800959E0 (-Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@.c)
 */

void __fastcall Spectre::Engine::DistanceFromCameraSceneNodeTraversal::Traverse(
        int a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        __int64 a4,
        Spectre::Engine::SceneNode *a5)
{
  Spectre::Engine::SceneNode *v5; // rbx
  unsigned __int64 *WorldPosition; // rax
  __int64 v11; // rdx
  __m128 v12; // xmm3
  __m128 v13; // xmm3
  __m128 v14; // xmm1
  float v15; // xmm3_4
  __int64 *v16; // rbp
  __int64 *i; // rbx
  __int64 v18; // xmm0_8
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  int v21; // [rsp+38h] [rbp-20h]
  float v22; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  Spectre::Engine::SceneNode::VerifyReadAccess(a5);
  if ( (*((_QWORD *)v5 + 56) & a2[66]) == a2[65] )
  {
    Spectre::Engine::SceneNode::VerifyReadAccess(v5);
    if ( (*((_QWORD *)v5 + 56) & a2[64]) == a2[63] )
    {
      WorldPosition = (unsigned __int64 *)Spectre::Engine::SceneNode::GetWorldPosition(v5, (__int64)&v20);
      v11 = *(_QWORD *)(a4 + 8);
      v12 = _mm_sub_ps(
              _mm_movelh_ps((__m128)*WorldPosition, (__m128)*((unsigned int *)WorldPosition + 2)),
              _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)));
      v13 = _mm_mul_ps(v12, v12);
      v14 = _mm_shuffle_ps(v13, v13, 153);
      v15 = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
      v22 = v15;
      if ( v11 == *(_QWORD *)(a4 + 16) )
      {
        std::vector<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>::_Emplace_reallocate<float &,Spectre::Engine::SceneNode * &>(
          (__int128 **)a4,
          (char *)v11,
          &v22,
          (__int64 *)&a5);
        v5 = a5;
      }
      else
      {
        *(float *)v11 = v15;
        *(_QWORD *)(v11 + 8) = v5;
        *(_QWORD *)(a4 + 8) += 16LL;
      }
    }
    Spectre::Engine::SceneNode::VerifyReadAccess(v5);
    v16 = (__int64 *)*((_QWORD *)v5 + 5);
    for ( i = (__int64 *)*((_QWORD *)v5 + 4); i != v16; i += 2 )
    {
      v18 = *a3;
      v21 = *((_DWORD *)a3 + 2);
      v19 = *i;
      v20 = v18;
      Spectre::Engine::DistanceFromCameraSceneNodeTraversal::Traverse(a1, (_DWORD)a2, (unsigned int)&v20, a4, v19);
    }
  }
}
