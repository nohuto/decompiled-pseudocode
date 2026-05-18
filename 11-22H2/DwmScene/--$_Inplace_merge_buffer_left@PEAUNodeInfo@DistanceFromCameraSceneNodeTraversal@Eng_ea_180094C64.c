/*
 * XREFs of ??$_Inplace_merge_buffer_left@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00QEAU1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094C64
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked_impl@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800945F4 (--$_Buffered_inplace_merge_unchecked_impl@PEAUNodeInfo@DistanceFromCameraSceneNodeT_ea_1800945F4.c)
 * Callees:
 *     ??$_Copy_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A4C (--$_Copy_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std.c)
 *     ??$_Uninitialized_move_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@0@Z @ 0x1800954B0 (--$_Uninitialized_move_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectr.c)
 */

_OWORD *__fastcall std::_Inplace_merge_buffer_left<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  float *v6; // r11
  _OWORD *v7; // rdx
  float *v8; // r9
  _OWORD *v9; // r10
  _OWORD *v10; // r10
  float *v11; // rcx
  void *v12; // r8
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm6
  _OWORD *result; // rax

  v5 = std::_Uninitialized_move_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
         a1,
         a2,
         a4);
  v8 = (float *)(v7 + 1);
  *v9 = *v7;
  v10 = v9 + 1;
  v11 = (float *)(v5 - 16);
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v10 + 1;
      if ( *v6 > *v8 )
        break;
      v14 = *(_OWORD *)v6;
      v6 += 4;
      *v10++ = v14;
      if ( v6 == v11 )
      {
        v15 = *(_OWORD *)v11;
        result = (_OWORD *)std::_Copy_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
                             v8,
                             a3,
                             v12);
        *result = v15;
        return result;
      }
    }
    v13 = *(_OWORD *)v8;
    v8 += 4;
    *v10 = v13;
    if ( v8 == (float *)a3 )
      break;
    ++v10;
  }
  return (_OWORD *)std::_Copy_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
                     v6,
                     v5,
                     v12);
}
