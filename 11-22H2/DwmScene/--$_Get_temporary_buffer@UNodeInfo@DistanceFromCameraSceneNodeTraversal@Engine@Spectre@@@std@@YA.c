/*
 * XREFs of ??$_Get_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YA?AU?$pair@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@_J@0@_J@Z @ 0x18003A430
 * Callers:
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@1@Z@Z @ 0x18003AD68 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VComponent@Engi.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@1@Z@Z @ 0x180063AAC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VCamera@Engine@.c)
 *     ??$?0_J@?$_Optimistic_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@QEAA@_J@Z @ 0x180093F80 (--$-0_J@-$_Optimistic_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spe.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18001C138 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Get_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rdi
  void *v4; // rax

  v2 = a2;
  if ( a2 <= 0xFFFFFFFFFFFFFFFLL )
  {
    while ( v2 > 0 )
    {
      v4 = operator new(16 * v2, (const struct std::nothrow_t *)&std::nothrow);
      if ( v4 )
      {
        *a1 = v4;
        a1[1] = v2;
        return a1;
      }
      v2 /= 2LL;
    }
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  return a1;
}
