/*
 * XREFs of ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@0@@Z @ 0x18002E26C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 *     ??$_Buffered_merge_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J0P6A_NAEBV10@2@Z@Z @ 0x180039F74 (--$_Buffered_merge_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 *     ??$_Buffered_rotate_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@00_J101@Z @ 0x18003A080 (--$_Buffered_rotate_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV-$sh.c)
 *     ??$_Inplace_merge_buffer_left@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00QEAV10@P6A_NAEBV10@2@Z@Z @ 0x18003A4A8 (--$_Inplace_merge_buffer_left@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std.c)
 *     ??$_Inplace_merge_buffer_right@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00QEAV10@P6A_NAEBV10@2@Z@Z @ 0x18003A5C4 (--$_Inplace_merge_buffer_right@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z.c)
 *     ??1?$_Uninitialized_backout@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003B32C (--1-$_Uninitialized_backout@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@QEAA@XZ.c)
 *     ?RemoveComponent@SceneNode@Engine@Spectre@@QEAAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003D11C (-RemoveComponent@SceneNode@Engine@Spectre@@QEAAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@.c)
 *     ?RemoveCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057A70 (-RemoveCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18005F270 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FA68 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$shared_ptr@VShaderPipeline@Engine@Spec.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return a1;
}
