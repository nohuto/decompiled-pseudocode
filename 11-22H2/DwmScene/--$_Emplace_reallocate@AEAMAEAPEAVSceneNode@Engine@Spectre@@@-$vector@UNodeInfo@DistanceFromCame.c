/*
 * XREFs of ??$_Emplace_reallocate@AEAMAEAPEAVSceneNode@Engine@Spectre@@@?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@QEAAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU2345@AEAMAEAPEAVSceneNode@45@@Z @ 0x180094A84
 * Callers:
 *     ?Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@Utils@3@AEAV?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@@Z @ 0x1800959E0 (-Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@AEAAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@_K1@Z @ 0x180095B34 (-_Change_array@-$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V-$alloca.c)
 */

char *__fastcall std::vector<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>::_Emplace_reallocate<float &,Spectre::Engine::SceneNode * &>(
        __int128 **a1,
        char *a2,
        _DWORD *a3,
        __int64 *a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v7; // rax
  __int128 *v9; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 size_of; // rax
  _OWORD *v15; // rax
  __int64 v16; // rdx
  char *v17; // r14
  _OWORD *v18; // r10
  __int128 *v19; // rdx
  __int128 *v20; // rcx
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 *v23; // rdx
  _OWORD *v24; // rcx
  __int128 v25; // xmm0

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  v9 = (__int128 *)a2;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v7 + 1;
  v12 = a1[2] - *a1;
  v13 = v12 >> 1;
  if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
  {
    v4 = v13 + v12;
    if ( v13 + v12 < v11 )
      v4 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v4);
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = *a4;
  v17 = (char *)v15 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v18 = v15;
  *(_DWORD *)v17 = *a3;
  *((_QWORD *)v17 + 1) = v16;
  v19 = a1[1];
  v20 = *a1;
  if ( v9 == v19 )
  {
    while ( v20 != v19 )
    {
      v21 = *v20++;
      *v15++ = v21;
    }
  }
  else
  {
    while ( v20 != v9 )
    {
      v22 = *v20++;
      *v15++ = v22;
    }
    v23 = a1[1];
    if ( v9 != v23 )
    {
      v24 = v17 + 16;
      do
      {
        v25 = *v9++;
        *v24++ = v25;
      }
      while ( v9 != v23 );
    }
  }
  std::vector<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>::_Change_array(a1, v18, v11, v4);
  return v17;
}
