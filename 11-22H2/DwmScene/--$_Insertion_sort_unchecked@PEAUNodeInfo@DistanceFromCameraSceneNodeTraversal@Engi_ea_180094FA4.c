/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094FA4
 * Callers:
 *     ??$_Insertion_sort_isort_max_chunks@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094EC4 (--$_Insertion_sort_isort_max_chunks@PEAUNodeInfo@DistanceFromCameraSceneNodeTravers_ea_180094EC4.c)
 *     ??$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J01U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095240 (--$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U-$l.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800955CC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UNodeInfo@Distan_ea_1800955CC.c)
 * Callees:
 *     ??$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A2C (--$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU.c)
 */

char *__fastcall std::_Insertion_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        char *Src,
        char *a2)
{
  char *v4; // rax
  __int128 v5; // xmm6
  float *v6; // rdx
  char *v7; // rbx
  float *i; // rcx

  if ( Src != a2 )
  {
    v4 = Src + 16;
    while ( v4 != a2 )
    {
      v5 = *(_OWORD *)v4;
      v6 = (float *)v4;
      if ( *(float *)Src <= COERCE_FLOAT(*(_OWORD *)v4) )
      {
        for ( i = (float *)v4; ; v6 = i )
        {
          i -= 4;
          if ( *i <= *(float *)&v5 )
            break;
          *(_OWORD *)v6 = *(_OWORD *)i;
        }
        *(_OWORD *)v6 = v5;
        v4 += 16;
      }
      else
      {
        v7 = v4 + 16;
        std::_Copy_backward_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
          Src,
          (__int64)v4,
          (__int64)(v4 + 16));
        v4 = v7;
        *(_OWORD *)Src = v5;
      }
    }
  }
  return a2;
}
