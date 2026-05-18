/*
 * XREFs of ??$_Buffered_rotate_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@00_J101@Z @ 0x180094808
 * Callers:
 *     ??$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@0011@Z @ 0x180094000 (--$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal.c)
 *     ??$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@0011@Z @ 0x1800940F0 (--$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraScene_ea_1800940F0.c)
 * Callees:
 *     ??$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A2C (--$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU.c)
 *     ??$_Copy_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A4C (--$_Copy_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std.c)
 *     ??$_Uninitialized_move_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@0@Z @ 0x1800954B0 (--$_Uninitialized_move_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectr.c)
 *     ??$reverse@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0@Z @ 0x1800954D4 (--$reverse@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXQEAUNodeIn.c)
 */

char *__fastcall std::_Buffered_rotate_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
        char *Src,
        char *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        void *Srca,
        __int64 a7)
{
  char *v7; // r10
  void *v10; // r11
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r11

  v7 = a3;
  if ( a4 )
  {
    if ( !a5 )
      return Src;
    if ( a4 <= a5 && a4 <= a7 )
    {
      std::_Uninitialized_move_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
        Src,
        a2,
        Srca);
      v11 = std::_Copy_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(v10);
      std::_Copy_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(Srca);
      return (char *)v11;
    }
    if ( a5 <= a7 )
    {
      std::_Uninitialized_move_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
        a2,
        a3,
        Srca);
      std::_Copy_backward_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(Src);
      return (char *)std::_Copy_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(Srca);
    }
    if ( Src != a2 )
    {
      if ( a2 == a3 )
      {
        return Src;
      }
      else
      {
        ((void (*)(void))std::reverse<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>)();
        std::reverse<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(v13, v12);
        std::reverse<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(Src, v14);
        return &Src[(v15 - v16) & 0xFFFFFFFFFFFFFFF0uLL];
      }
    }
  }
  return v7;
}
