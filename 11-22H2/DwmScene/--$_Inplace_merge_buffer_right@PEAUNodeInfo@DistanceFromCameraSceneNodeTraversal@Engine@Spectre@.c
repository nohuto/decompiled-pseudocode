/*
 * XREFs of ??$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00QEAU1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094D00
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked_impl@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800945B0 (--$_Buffered_inplace_merge_unchecked_impl@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engi.c)
 * Callees:
 *     ??$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A2C (--$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU.c)
 *     ??$_Uninitialized_move_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@0@Z @ 0x1800954B0 (--$_Uninitialized_move_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectr.c)
 */

void *__fastcall std::_Inplace_merge_buffer_right<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        float *Src,
        __int64 a2,
        __int64 a3,
        float *a4)
{
  __int64 v6; // rax
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int64 v9; // r10
  _OWORD *v10; // r10
  float *v11; // r11
  float *v12; // rdx
  __int128 v13; // xmm0
  void *result; // rax

  v6 = std::_Uninitialized_move_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
         a2,
         a3,
         a4);
  v8 = *(_OWORD *)(v7 - 16);
  v10 = (_OWORD *)(v9 - 16);
  v11 = (float *)(v7 - 32);
  v12 = (float *)(v6 - 16);
  *v10 = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      --v10;
      if ( *v12 > *v11 )
        break;
      v13 = *(_OWORD *)v12;
      v12 -= 4;
      *v10 = v13;
      if ( a4 == v12 )
      {
        *(v10 - 1) = *(_OWORD *)v11;
        result = std::_Copy_backward_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
                   Src,
                   (__int64)v11,
                   (__int64)(v10 - 1));
        *(_OWORD *)Src = *(_OWORD *)a4;
        return result;
      }
    }
    *v10 = *(_OWORD *)v11;
    if ( Src == v11 )
      break;
    v11 -= 4;
  }
  *(v10 - 1) = *(_OWORD *)v12;
  return std::_Copy_backward_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
           a4,
           (__int64)v12,
           (__int64)(v10 - 1));
}
